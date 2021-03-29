#pragma once
#include "CobaltCXX/Components/Types.h"

namespace cblt {
	class Application {
	public:
		void Start(size_t width, size_t height, cstr_t title);

	protected:
		void OnCreate (             );
		virtual void OnUpdate (timeStep_t ts) = NULL;
		void OnDestroy(             );
		
	};
}