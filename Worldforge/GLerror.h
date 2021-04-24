#pragma once
#include <iostream>
#include "glad/glad.h"
namespace Worldforge {
	static void GLclearError()
	{
		while (glGetError() != GL_NO_ERROR);
	}

	static void GLCheckError()
	{
		while (GLenum error = glGetError())
		{
			std::cout << "[OPEN GL ERROR] (" << error << ")" << std::endl;
		}
	}

}