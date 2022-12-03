#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// 感觉这里得extern就是一个标识作用，告诉用户他是外部传进来的
extern Hazel::Application* Hazel::CreateApplication( );

int main(int argc, char** argv)
{
	Hazel::Log::Init( );
    HZ_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Startup.json");

	auto app = Hazel::CreateApplication( );
    HZ_PROFILE_END_SESSION();

    HZ_PROFILE_BEGIN_SESSION("Runtime", "HazelProfile-Runtime.json");

	app->Run( );
    HZ_PROFILE_END_SESSION();

    HZ_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Shutdown.json");

	delete app;

    HZ_PROFILE_END_SESSION();
}


#endif