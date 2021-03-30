
#include "CobaltCXX/CobaltCXX.h"
#include <stdio.h>
#define gl gl
class SandboxApp : public cblt::Application {
protected:
	void cblt::Application::OnUpdate(cblt::timeStep_t ts) {
		gl::ClearColor(0, 1, 1, 1);
		gl::Clear(GL_COLOR_BUFFER_BIT);
	}
};

int main() {

	SandboxApp* app = new SandboxApp();
	app->Start(720,640,"Hello");
	return 0;
}