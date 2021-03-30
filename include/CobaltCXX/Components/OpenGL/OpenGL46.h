#pragma once
#include "glad/glad.h"
#include "GLFW/glfw3.h"

	namespace gl {
		void InitGLFW();

		void ClearColor(float r, float g, float b, float a);
		void Clear(int bufferBits);
	}