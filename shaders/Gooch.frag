#version 330 core
in vec3 Normal;
in vec3 FragPos;
out vec4 FragColor;

uniform vec3 u_objectColor;
uniform vec3 u_lightPos;


void main()
{
    vec3 cool = vec3(0, 0, 0.55) + 0.25 * u_objectColor;
    vec3 warm = vec3(0.3, 0.3, 0) + 0.25 * u_objectColor;
    vec3 highlight = vec3(1.0, 1.0, 1.0);


    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(u_lightPos - FragPos);

    float t = ((dot(norm, lightDir) + 1) / 2);
    vec3 r = 2 * dot(norm, lightDir) * norm - lightDir;
    float s = clamp(100 * dot(r, FragPos) - 97, 0, 1.0);

    vec3 result = s * highlight + (1 - s) * ((t * warm) + (1 - t) * cool);

    FragColor = vec4(result, 1.0);
}