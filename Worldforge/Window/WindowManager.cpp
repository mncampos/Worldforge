#include "WindowManager.h"

using namespace Worldforge;

Window::Window(int Height, int Width, const char* Title)
{

	glfwSetErrorCallback(Worldforge::errorCallback);



	if (!glfwInit())
		std::cout << "Log Warning : GLFW Initialization failed" << std::endl;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

	this->currentWindow = glfwCreateWindow(Height, Width, Title, NULL, NULL);
	glfwMakeContextCurrent(this->currentWindow);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	glfwGetFramebufferSize(this->currentWindow, &Height, &Width);
	glViewport(0, 0, Height, Width);
	glfwSetKeyCallback(this->currentWindow, keyCallback);

}
Window::~Window()
{
	glfwDestroyWindow(this->currentWindow);
	glfwTerminate();
}

void Worldforge::errorCallback(int error, const char* description)
{
	std::cout << "Log Warning : " << description << std::endl;

}

void Worldforge::keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);

}

GLFWwindow* Window::getWindow()
{
	return this->currentWindow;
}