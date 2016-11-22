#ifndef _SYSTEM_TOKENTYPE_H_
#define _SYSTEM_TOKENTYPE_H_
namespace Aspose {
	namespace Cells {
		namespace System {
			enum TokenType
			{
				TokenType_NumberToken = 1,
				TokenType_YearNumberToken,
				TokenType_Am,
				TokenType_Pm,
				TokenType_MonthToken,
				TokenType_EndOfString,
				TokenType_DayOfWeekToken,
				TokenType_TimeZoneToken,
				TokenType_EraToken,
				TokenType_DateWordToken,
				TokenType_UnknownToken,
				TokenType_HebrewNumber,
				TokenType_JapaneseEraToken,
				TokenType_TEraToken,
				TokenType_IgnorableSymbol,
				TokenType_SEP_Unk = 256,
				TokenType_SEP_End = 512,
				TokenType_SEP_Space = 768,
				TokenType_SEP_Am = 1024,
				TokenType_SEP_Pm = 1280,
				TokenType_SEP_Date = 1536,
				TokenType_SEP_Time = 1792,
				TokenType_SEP_YearSuff = 2048,
				TokenType_SEP_MonthSuff = 2304,
				TokenType_SEP_DaySuff = 2560,
				TokenType_SEP_HourSuff = 2816,
				TokenType_SEP_MinuteSuff = 3072,
				TokenType_SEP_SecondSuff = 3328,
				TokenType_SEP_LocalTimeMark = 3584,
				TokenType_SEP_DateOrOffset = 3840,
				TokenType_RegularTokenMask = 255,
				TokenType_SeparatorTokenMask = 65280
			};
		}
	}
}
#endif
