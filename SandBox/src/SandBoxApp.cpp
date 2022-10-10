
#include <Hazel.h>
//namespace Hazel{
//	__declspec( dllimport ) void App( );
//}

class Sandbox : public Hazel::Application
{
public:
	Sandbox( ){

	}

	~Sandbox( ){

	}
};

Hazel::Application* Hazel::CreateApplication( )
{
	return new Sandbox( );
}