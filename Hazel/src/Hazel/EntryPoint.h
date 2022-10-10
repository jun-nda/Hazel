#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// 感觉这里得extern就是一个标识作用，告诉用户他是外部传进来的
extern Hazel::Application* Hazel::CreateApplication( );

int main(int argc, char** argv)
{
	printf( "Hazel Engine" );
	auto app = Hazel::CreateApplication( );
	app->Run( );
	delete app;
}


#endif