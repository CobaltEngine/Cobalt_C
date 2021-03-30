#include "CobaltCXX/Components/Core/Window.h"
#include <stdio.h>


void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}

bool cblt::Window::Create(size_t width, size_t height, cstr_t title)
{
	glfwSetErrorCallback(error_callback);
	if (!glfwInit()) return false;
	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (window == NULL) return false;
	glfwMakeContextCurrent(window);
	return true;
}

void cblt::Window::Refresh()
{
	glfwSwapBuffers(window);
	glfwPollEvents();
}

bool cblt::Window::IsOpen()
{
	return !glfwWindowShouldClose(window);
}

void cblt::Window::RequestClose()
{
	glfwSetWindowShouldClose(window, 1);
}



