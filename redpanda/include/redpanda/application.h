#pragma once

#include "core.h"

namespace RedPanda {
	class REDPANDA_API Application {
		public:
			Application();
			virtual ~Application();

			void run();
	};

	Application* createApplication();
}