#ifndef MARSHMALLOW_ENGINE
#define MARSHMALLOW_ENGINE


#include "GLFW/glfw3.h"
#pragma comment(lib, "opengl32.lib")

#include <iostream>

using namespace std;

class Engine
{
public:
	//static variables keep their values and are not destroyed even after they go out of scope
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;

	Engine();
	~Engine();

	bool Initialize(const char* windowTitle);

	void Update();
	void Render();

private:
	// made static bc only need one window and so we can access outside of class
	static GLFWwindow* window;

};

#endif