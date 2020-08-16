#include "Texture.h"

Texture::Texture() 
{
	id = -1; // id allows us to set texture before we draw it, so opengl knows what data we want onscreen
}

Texture::Texture(int _id) 
{
	id = _id;

	if (!getTextureParams()) 
	{
		cout << "Error loading image with ID: " << id << endl;
	}
}

Texture::Texture(string path) 
{
	id = SOIL_load_OGL_texture(path.c_str(), SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MULTIPLY_ALPHA);

	if (!getTextureParams()) {
		cout << "Error loading image: " << path << endl;
	}
}

int Texture::getId() 
{
	return id;
}

int Texture::getHeight() 
{
	return height;
}

int Texture::getWidth() 
{
	return width;
}


bool Texture::getTextureParams() 
{

	if (id > 0) {
		int miplevel = 0; //has something to do with compression? used for when we get parameters from opengl
		glBindTexture(GL_TEXTURE_2D, id);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_WIDTH, &width);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_HEIGHT, &height);
		return true;
	}
	
	return false;
}