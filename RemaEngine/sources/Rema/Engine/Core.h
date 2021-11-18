#ifndef REMA_CORE_H
#define REMA_CORE_H

#ifdef REMA_PLATFORM_WINDOWS
	#ifdef REMA_BUILD_DLL
		#define REMA_API __declspec(dllexport)
	#else
		#define REMA_API __declspec(dllimport)
	#endif
#else
	#error Rema only supports windows
#endif

#endif // !REMA_CORE_H
