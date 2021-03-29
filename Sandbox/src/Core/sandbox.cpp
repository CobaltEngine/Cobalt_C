#include "CobaltCXX/CobaltCXX.h"
#include <stdio.h>
class SandboxApp : public cblt::Application {
protected:
	void cblt::Application::OnUpdate(cblt::timeStep_t ts) {
		printf("Updating!");
	}
};

int main() {

	SandboxApp* app = new SandboxApp();
	app->Start(100,100,"Hello");
	return 0;
}