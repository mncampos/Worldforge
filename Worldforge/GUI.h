#pragma once
#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"
#include "Window/WindowManager.h"



void initGUI(Worldforge::Window& mainWindow, const char* glsl_version)
{
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	ImGui::StyleColorsDark();
	ImGui_ImplGlfw_InitForOpenGL(mainWindow.getWindow(), true);
	ImGui_ImplOpenGL3_Init(glsl_version);
}

void renderDebugWindow(ImVec4 &clear_color, ImVec4 &uni_color)
{


	ImGui_ImplOpenGL3_NewFrame();
	ImGui_ImplGlfw_NewFrame();
	ImGui::NewFrame();
	{
		static float f = 0.0f;
		static int counter = 0;
		ImGui::Begin("Debug Window");
		ImGui::Text("Worldforge");
		ImGui::Text((const char*)glGetString(GL_VERSION));
		ImGui::ColorEdit3("clear color", (float*)&clear_color);
		ImGui::ColorEdit3("uniform color", (float*)&uni_color);
		ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		ImGui::End();
	}
}
