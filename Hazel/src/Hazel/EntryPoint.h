#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// �о������extern����һ����ʶ���ã������û������ⲿ��������
extern Hazel::Application* Hazel::CreateApplication( );

int main(int argc, char** argv)
{
	printf( "Hazel Engine" );
	auto app = Hazel::CreateApplication( );
	app->Run( );
	delete app;
}


#endif