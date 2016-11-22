#ifndef _SYSTEM_GLOBALIZATION_NUMBERSTYLES_H_
#define _SYSTEM_GLOBALIZATION_NUMBERSTYLES_H_
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Globalization {
	enum NumberStyles
	{
        // Summary:
        //     Indicates that none of the bit styles are allowed->
		NumberStyles_None = 0,
        //
        // Summary:
        //     Indicates that a leading white-space character must be ignored during parsing->
        //     Valid white-space characters have the Unicode values U+0009, U+000A, U+000B,
        //     U+000C, U+000D, and U+0020->
		NumberStyles_AllowLeadingWhite = 1,
        //
        // Summary:
        //     Indicates that trailing white-space character must be ignored during parsing->
        //     Valid white-space characters have the Unicode values U+0009, U+000A, U+000B,
        //     U+000C, U+000D, and U+0020->
		NumberStyles_AllowTrailingWhite = 2,
        //
        // Summary:
        //     Indicates that the numeric String* can have a leading sign-> Valid leading
        //     sign characters are determined by the System->Globalization->NumberFormatInfo->PositiveSign
        //     and System->Globalization->NumberFormatInfo->NegativeSign properties of System->Globalization->NumberFormatInfo->
		NumberStyles_AllowLeadingSign = 4,
        //
        // Summary:
        //     Indicates that the AllowLeadingWhite, AllowTrailingWhite, and AllowLeadingSign
        //     styles are used-> This is a composite number style->
		NumberStyles_Integer = 7,
        //
        // Summary:
        //     Indicates that the numeric String* can have a trailing sign-> Valid trailing
        //     sign characters are determined by the System->Globalization->NumberFormatInfo->PositiveSign
        //     and System->Globalization->NumberFormatInfo->NegativeSign properties of System->Globalization->NumberFormatInfo->
		NumberStyles_AllowTrailingSign = 8,
        //
        // Summary:
        //     Indicates that the numeric String* can have one pair of parentheses enclosing
        //     the number->
		NumberStyles_AllowParentheses = 16,
        //
        // Summary:
        //     Indicates that the numeric String* can have a decimal point-> Valid decimal
        //     point characters are determined by the System->Globalization->NumberFormatInfo->NumberDecimalSeparator
        //     and System->Globalization->NumberFormatInfo->CurrencyDecimalSeparator properties
        //     of System->Globalization->NumberFormatInfo->
		NumberStyles_AllowDecimalPoint = 32,
        //
        // Summary:
        //     Indicates that the numeric String* can have group separators, for example,
        //     separating the hundreds from the thousands-> Valid group separator characters
        //     are determined by the System->Globalization->NumberFormatInfo->NumberGroupSeparator
        //     and System->Globalization->NumberFormatInfo->CurrencyGroupSeparator properties
        //     of System->Globalization->NumberFormatInfo and the number of digits in each
        //     group is determined by the System->Globalization->NumberFormatInfo->NumberGroupSizes
        //     and System->Globalization->NumberFormatInfo->CurrencyGroupSizes properties of
        //     System->Globalization->NumberFormatInfo->
		NumberStyles_AllowThousands = 64,
        //
        // Summary:
        //     Indicates that the AllowLeadingWhite, AllowTrailingWhite, AllowLeadingSign,
        //     AllowTrailingSign, AllowDecimalPoint, and AllowThousands styles are used->
        //     This is a composite number style->
		NumberStyles_Number = 111,
        //
        // Summary:
        //     Indicates that the numeric String* can be in exponential notation->
		NumberStyles_AllowExponent = 128,
        //
        // Summary:
        //     Indicates that the AllowLeadingWhite, AllowTrailingWhite, AllowLeadingSign,
        //     AllowDecimalPoint, and AllowExponent styles are used-> This is a composite
        //     number style->
		NumberStyles_Float = 167,
        //
        // Summary:
        //     Indicates that the numeric String* is parsed as currency if it contains a
        //     currency symbol-> Otherwise, it is parsed as a number-> Valid currency symbols
        //     are determined by the System->Globalization->NumberFormatInfo->CurrencySymbol
        //     property of System->Globalization->NumberFormatInfo->
		NumberStyles_AllowCurrencySymbol = 256,
        //
        // Summary:
        //     Indicates that all styles, except AllowExponent and AllowHexSpecifier, are
        //     used-> This is a composite number style->
		NumberStyles_Currency = 383,
        //
        // Summary:
        //     Indicates that all styles, except AllowHexSpecifier, are used-> This is a
        //     composite number style->
		NumberStyles_Any = 511,
        //
        // Summary:
        //     Indicates that the numeric String* represents a hexadecimal value-> Valid hexadecimal
        //     values include the numeric digits 0-9 and the hexadecimal digits A-F and
        //     a-f-> Hexadecimal values can be left-padded with zeros-> Strings parsed using
        //     this style are not permitted to be prefixed with "0x".
		NumberStyles_AllowHexSpecifier = 512,
        //
        // Summary:
        //     Indicates that the AllowLeadingWhite, AllowTrailingWhite, and AllowHexSpecifier
        //     styles are used-> This is a composite number style->
		NumberStyles_HexNumber = 515,
	};
}
}
}
}
#endif//_SYSTEM_GLOBALIZATION_NUMBERSTYLES_H_
