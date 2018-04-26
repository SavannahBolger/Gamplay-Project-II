#include "NPC.h"

NPC::NPC()
{
}

NPC::~NPC()
{
}

void NPC::update(sf::RenderWindow & window, glm::mat4 &model)
{
	int x = sf::Mouse::getPosition(window).x;
	int y = sf::Mouse::getPosition(window).y;

	if (x<350)
	{
		// Set Model Rotation
		model = glm::rotate(model, 0.05f, glm::vec3(0, 1, 0)); // Rotate
	}
	else if (x>450)
	{
		// Set Model Rotation
		model = glm::rotate(model, -0.05f, glm::vec3(0, 1, 0)); // Rotate
	}

	if (y<250)
	{
		// Set Model Rotation
		model = glm::rotate(model, -0.05f, glm::vec3(1, 0, 0)); // Rotate
	}
	else if (y>350)
	{
		// Set Model Rotation
		model = glm::rotate(model, 0.05f, glm::vec3(1, 0, 0)); // Rotate
	}

	if (i <= 0)
	{
		glViewport(0, 150, 400, 300);
		i++;
	}
	else if (i > 0)
	{
		glViewport(400, 150, 400, 300);
		i--;
	}

}

void NPC::display()
{
	glViewport(400, 150, 400, 300);
}
