#version 330 core
in vec3 Normal;
in vec3 FragPos;
out vec4 FragColor;

uniform vec3 u_objectColor;
uniform vec3 u_lightColor;
uniform vec3 u_lightPos;
uniform vec3 u_viewPos;

void main()
{
    float ambientStrength = 0.1;
    vec3 ambient = ambientStrength * u_lightColor;


    // Remember to always normalize vectors for light calculations
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(u_lightPos - FragPos);

    float diffuseFactor = max(dot(norm, lightDir), 0.0); // max ensure no negative
    vec3 diffuse = diffuseFactor * u_lightColor;

    float specularStrength = 0.5;
    vec3 viewDir = normalize(u_viewPos - FragPos);
    // negate lightDir to make sure the vector is from the fragment towards the light
    vec3 reflectDir = reflect(-lightDir, norm);
    // 32 is the shininess value, the greater it is, the better it reflects lights instead of scattering
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 2);
    vec3 specular = specularStrength * spec * u_lightColor;

    vec3 result = (ambient + diffuse + specular) * u_objectColor;
    FragColor = vec4(result, 1.0);
}