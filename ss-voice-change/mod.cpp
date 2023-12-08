#include "pch.h"

extern "C"
{
	__declspec(dllexport) __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		helperFunctions.ReplaceFile("system\\sounddata\\voice_us\\wma\\0396.wma", "system\\sounddata\\voice_us\\wma\\0388.wma");
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}