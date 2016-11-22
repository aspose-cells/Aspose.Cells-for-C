#ifndef _SYSTEM_GLOBALIZATION_DATETIMESTYLES_H_
#define _SYSTEM_GLOBALIZATION_DATETIMESTYLES_H_
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Globalization {
	enum DateTimeStyles
	{
		/// <summary>Default formatting options must be used-> This value represents the default style for <see cref="M:System->DateTime->Parse(System->String*)" />, <see cref="M:System->DateTime->ParseExact(System->String*,System->String*,System->IFormatProvider)" />, and <see cref="M:System->DateTime->TryParse(System->String*,System->DateTime@)" />-></summary>
		DateTimeStyles_None = 0,
		/// <summary>Leading white-space characters must be ignored during parsing, except if they occur in the <see cref="T:System->Globalization->DateTimeFormatInfo" /> format patterns-></summary>
		DateTimeStyles_AllowLeadingWhite = 1,
		/// <summary>Trailing white-space characters must be ignored during parsing, except if they occur in the <see cref="T:System->Globalization->DateTimeFormatInfo" /> format patterns-></summary>
		DateTimeStyles_AllowTrailingWhite = 2,
		/// <summary>Extra white-space characters in the middle of the String* must be ignored during parsing, except if they occur in the <see cref="T:System->Globalization->DateTimeFormatInfo" /> format patterns-></summary>
		DateTimeStyles_AllowInnerWhite = 4,
		/// <summary>Extra white-space characters anywhere in the String* must be ignored during parsing, except if they occur in the <see cref="T:System->Globalization->DateTimeFormatInfo" /> format patterns-> This value is a combination of the <see cref="F:System->Globalization->DateTimeStyles->AllowLeadingWhite" />, <see cref="F:System->Globalization->DateTimeStyles->AllowTrailingWhite" />, and <see cref="F:System->Globalization->DateTimeStyles->AllowInnerWhite" /> values-></summary>
		DateTimeStyles_AllowWhiteSpaces = 7,
		/// <summary>If the parsed String* contains only the time and not the date, the parsing methods assume the Gregorian date with year = 1, month = 1, and day = 1. If this value is not used, the current date is assumed-></summary>
		DateTimeStyles_NoCurrentDateDefault = 8,
		/// <summary>Date and time are returned as a Coordinated Universal Time (UTC)-> If the input String* denotes a local time, through a time zone specifier or <see cref="F:System->Globalization->DateTimeStyles->AssumeLocal" />, the date and time are converted from the local time to UTC-> If the input String* denotes a UTC time, through a time zone specifier or <see cref="F:System->Globalization->DateTimeStyles->AssumeUniversal" />, no conversion occurs-> If the input String* does not denote a local or UTC time, no conversion occurs and the resulting <see cref="P:System->DateTime->Kind" /> property is <see cref="F:System->DateTimeKind->Unspecified" />-> </summary>
		DateTimeStyles_AdjustToUniversal = 16,
		/// <summary>If no time zone is specified in the parsed String*, the String* is assumed to denote a local time-> </summary>
		DateTimeStyles_AssumeLocal = 32,
		/// <summary>If no time zone is specified in the parsed String*, the String* is assumed to denote a UTC-> </summary>
		DateTimeStyles_AssumeUniversal = 64,
		/// <summary>The <see cref="T:System->DateTimeKind" /> field of a date is preserved when a <see cref="T:System->DateTime" /> object is converted to a String* using the o or r standard format specifier and the String* is then converted back to a <see cref="T:System->DateTime" /> object-></summary>
		DateTimeStyles_RoundtripKind = 128
	};
}
}
}
}
#endif//_SYSTEM_GLOBALIZATION_DATETIMESTYLES_H_