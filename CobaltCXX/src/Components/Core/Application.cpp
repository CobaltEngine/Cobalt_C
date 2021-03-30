#include "CobaltCXX/Components/Core/Application.h"


namespace cblt {
	void Application::Start(size_t width, size_t height, cstr_t title) {
		window = new Window();
		if (!window->Create(width, height, title)) return;
		gl::InitGLFW();
		OnCreate();
		while (window->IsOpen()) {
			OnUpdate(1.0f);
			window->Refresh();
		}
		OnDestroy();
		window->RequestClose();
	}

	void Application::OnCreate() {}
	void Application::OnDestroy() {}


}