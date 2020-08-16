#ifndef MARSHMALLOW_TEXTURE
#define MARSHMALLOW_TEXTURE

#include "GLFW/glfw3.h"
#include "SOIL2/SOIL2.h"

#include <iostream>
#include <string>

using namespace std;

class Texture
{
public:
	Texture();
	Texture(int _id);
	Texture(string path);

	int getId();
	int getWidth();
	int getHeight();
	
private:
	bool getTextureParams(); //loads image in the soil library	and returns texture id

	int id;
	int width;
	int height;	
};


#endif

