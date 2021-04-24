#pragma once
#define WINDOW_HEIGHT 1600
#define WINDOW_WIDTH 750
#include <iostream>
#include "glad/glad.h"
#include "glfw/glfw3.h"
#include "glm/glm/glm.hpp"
#include "Window/WindowManager.h"
#include "glm/glm/gtc/matrix_transform.hpp"
#include "glm/glm/gtc/type_ptr.hpp"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"
#include "GUI.h"
#include "Buffer.h"
#include "Shader.h"
#include "GLerror.h"
#include "glm/glm/gtc/matrix_transform.hpp"
#include "glm/glm/gtx/transform.hpp"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "ControlsManager.h"
#include "assimp/Importer.hpp"