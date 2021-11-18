#ifndef REMA_ENGINE_H
#define REMA_ENGINE_H

#include "Core.h"

namespace remaEngine
{
	class REMA_API Engine
	{
	public:
		Engine();
		virtual ~Engine();

		void Run();
	protected:

	private:

	};

	// To be defined in client
	Engine* CreateApplication();
}

#endif // !REMA_ENGINE_H

