#pragma once
#include "glad/glad.h"
#include "glfw/glfw3.h"
#include <iostream>



namespace Worldforge {

	void errorCallback(int error, const char* description);
	void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	class Window
	{
	private:
		GLFWwindow* currentWindow;
	public:
		Window(int width, int height, const char* title);
		~Window();
		GLFWwindow* getWindow();
	};

}