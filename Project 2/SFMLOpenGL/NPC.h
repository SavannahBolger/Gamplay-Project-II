#pragma once

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML\Graphics.hpp>

class NPC
{
public:
	NPC();
	~NPC();

	int i = 0;
	void update(sf::RenderWindow &window, glm::mat4 &model);
	void display();
};