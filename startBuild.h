#pragma once
#ifndef startBuild_h
#define startBuild_h

#include "includes.h"

class StartBuild {
public:

	//tekstura
	GLuint texture;

	glm::mat4 position;

	//wektory
	std::vector<glm::vec4> verts;
	std::vector<glm::vec4> norms;
	std::vector<glm::vec2> texCoords;
	std::vector<unsigned int> indices;

	//³adowanie tekstury
	void readTexture(const char* filename);

	//³adowanie modelu
	void loadModel(std::string filename);

	//rysowanie modelu
	void drawModel();

	void rotate(float angle, glm::vec3 vec);
};


#endif
