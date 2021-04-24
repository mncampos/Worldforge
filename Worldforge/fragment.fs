#version 460 core

// Interpolated values from the vertex shaders
in vec3 fragmentColor;
in vec2 UV;

// Ouput data
out vec3 color;

uniform sampler2D myTextureSampler;

void main(){

	// Output color = color specified in the vertex shader, 
	// interpolated between all 3 surrounding vertices
	color = texture(myTextureSampler, UV).rgb;

}