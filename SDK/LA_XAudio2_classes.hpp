#pragma once

// [Generate by @Respecter] - Lost Ark (1.0.2.1,61) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_XAudio2_structs.hpp"

namespace LASDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class XAudio2.XAudio2Device
// 0x00B0 (0x0410 - 0x0360)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0360(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
