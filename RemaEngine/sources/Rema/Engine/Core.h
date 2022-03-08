#ifndef REMA_CORE_H
#define REMA_CORE_H

#ifdef REMA_PLATFORM_WINDOWS
	#ifdef REMA_BUILD_DLL
		#define REMA_API __declspec(dllexport)
	#else
		#define REMA_API __declspec(dllimport)
	#endif
#else
	#error Rema only supports windows now
#endif

#define BIT(x) (1 << x)
#define ruint unsigned int

#endif // !REMA_CORE_H
