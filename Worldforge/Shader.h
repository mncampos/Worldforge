#pragma once
#include <string>
#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

namespace Worldforge {
	class Shader
	{
	public:
		unsigned int ID;
		Shader(const char* vertexPath, const char* fragmentPath);
		void useShader();
		void uniform_setBool(const std::string& name, bool value) const;
		void uniform_setFloat(const std::string& name, float value) const;
		void uniform_setInt(const std::string& name, int value) const;

	private:
		void checkCompileErrors(unsigned int shader, std::string type);

	};

}