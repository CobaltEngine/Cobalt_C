#include "CobaltCXX/Components/OpenGL/OpenGL46.h"

	namespace gl {

		void InitGLFW() {
			gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		}

		void ClearColor(float r, float g, float b, float a) {
			glClearColor(r, g, b, a);
		}

		void Clear(int bufferBits) {
			glClear(bufferBits);
		}
	}
