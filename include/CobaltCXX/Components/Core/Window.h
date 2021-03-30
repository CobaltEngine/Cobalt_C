#pragma once
#include "CobaltCXX/Components/Types.h"
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"

namespace cblt {
	class Window {
	private:
		GLFWwindow* window;
	public:
		bool Create(size_t width, size_t height, cstr_t title);
		void Refresh();
		bool IsOpen();
		void RequestClose();
	};
}