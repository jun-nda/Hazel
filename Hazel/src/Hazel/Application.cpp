#include "hzpch.h"

#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"

#include <GLFW/glfw3.h>

namespace Hazel{

	Application::Application( )
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application( )
	{

	}

	void Application::Run( )
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
			while (m_Running)
			{
				HZ_TRACE("ASD" );
				glClearColor(1, 0, 1, 1);
				glClear(GL_COLOR_BUFFER_BIT);
				m_Window->OnUpdate();
			}
		if (e.IsInCategory(EventCategoryInput))
		{
			//HZ_TRACE(e);
		}

		while (true);
	}
}