#include <redpanda.h>

class Sandbox : public RedPanda::Application {
  public:
    Sandbox() {

    }

    ~Sandbox() {

    }
};

Sandbox::Application* RedPanda::createApplication() {
	return new Sandbox();
}