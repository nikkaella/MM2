#ifndef MARSHMALLOW_SPRITE
#define MARHSMALLOW_SPRITE

#include "GLFW/glfw3.h"
#include "Texture.h"

#include <iostream>
#include <string>
using namespace std;

class Sprite
{
public:
	Sprite();
	Sprite(string imgPath);
	Sprite(string imgPath, float _xPos, float _yPos);

	void update();
	void render();

private:
	Texture texture;
	float xPos;
	float yPos;
};

#endif // ! MARSHMALLOW_SPRITE