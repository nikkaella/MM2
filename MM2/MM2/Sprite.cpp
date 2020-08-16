#include "Sprite.h"

Sprite::Sprite()
{
	xPos = 0;
	yPos = 0;
	texture = Texture();

}

Sprite::Sprite(string imgPath)
{
	texture = Texture(imgPath);
	xPos = 0;
	yPos = 0;
}

Sprite::Sprite(string imgPath, float _xPos, float _yPos)
{
	texture = Texture(imgPath);
	xPos = _xPos;
	yPos = _yPos;
}

void Sprite::update()
{

}

void Sprite::render()
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture.getId()); //bind id to texture id
	glLoadIdentity();

	// translate -> rotate -> scale
	glTranslatef(xPos, yPos, 0); // translate entire matrix first
	//glRotatef();
	//glScalef();

	//Rendering
	glColor4f(1,1,1,1);
	glBegin(GL_QUADS); 

	// each corner of the image, put it on respective xPos and yPos
	glTexCoord2f(0, 0); // where the image starts
	glVertex2f(0, 0); // put that image on these positions
	glTexCoord2f(1, 0); glVertex2f(texture.getWidth(), 0);
	glTexCoord2f(1, 1); glVertex2f(texture.getWidth(), texture.getHeight());
	glTexCoord2f(0, 1); glVertex2f(0, texture.getHeight());
	glEnd();

	glDisable(GL_TEXTURE_2D);


}
