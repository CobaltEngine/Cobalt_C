#include "CobaltCXX/Components/Core/Application.h"

namespace cblt {
	void Application::Start(size_t width, size_t height, cstr_t title) {
		OnCreate();
		while (true) {
			OnUpdate(1.0f);
		}
		OnDestroy();
	}

	void Application::OnCreate() {}
	void Application::OnDestroy() {}


}