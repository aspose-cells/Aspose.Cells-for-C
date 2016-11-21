#ifndef _SYSTEM_PARSEFLAGS_H_
#define _SYSTEM_PARSEFLAGS_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			enum ParseFlags
			{
				ParseFlags_HaveYear = 1,
				ParseFlags_HaveMonth = 2,
				ParseFlags_HaveDay = 4,
				ParseFlags_HaveHour = 8,
				ParseFlags_HaveMinute = 16,
				ParseFlags_HaveSecond = 32,
				ParseFlags_HaveTime = 64,
				ParseFlags_HaveDate = 128,
				ParseFlags_TimeZoneUsed = 256,
				ParseFlags_TimeZoneUtc = 512,
				ParseFlags_ParsedMonthName = 1024,
				ParseFlags_CaptureOffset = 2048,
				ParseFlags_YearDefault = 4096,
				ParseFlags_Rfc1123Pattern = 8192,
				ParseFlags_UtcSortPattern = 16384
			};
		}
	}
}
#endif//_SYSTEM_PARSEFLAGS_H_