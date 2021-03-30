#pragma once
#include "CobaltCXX/Components/Types.h"
#include "Window.h"
#include "CobaltCXX/Components/OpenGL/OpenGL46.h"


namespace cblt {
	class Application {
		Window* window;
	public:
		void Start(size_t width, size_t height, cstr_t title);

	protected:
		void OnCreate (             );
		virtual void OnUpdate (timeStep_t ts) = NULL;
		void OnDestroy(             );
		
	};
}