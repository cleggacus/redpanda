#pragma once

extern RedPanda::Application* RedPanda::createApplication();

int main(int argc, char** argv){
	RedPanda::Log::init();
	RP_INFO("init log");
	RP_WARN("hello");

	auto app = RedPanda::createApplication();
	app->run();
	delete app;
}