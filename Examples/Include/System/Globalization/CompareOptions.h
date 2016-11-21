#ifndef _SYSTEM_GLOBALIZATION_COMPAREOPTION_H_
#define _SYSTEM_GLOBALIZATION_COMPAREOPTION_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Globalization
			{
				enum CompareOptions
				{
					/// <summary>Indicates the default option settings for String* comparisons-></summary>
					CompareOptions_None = 0,
					/// <summary>Indicates that the String* comparison must ignore case-></summary>
					CompareOptions_IgnoreCase = 1,
					/// <summary>Indicates that the String* comparison must ignore nonspacing combining characters, such as diacritics-> The Unicode Standard defines combining characters as characters that are combined with base characters to produce a NEW character-> Nonspacing combining characters do not occupy a spacing position by themselves when rendered-></summary>
					CompareOptions_IgnoreNonSpace = 2,
					/// <summary>Indicates that the String* comparison must ignore symbols, such as white-space characters, punctuation, currency symbols, the percent sign, mathematical symbols, the ampersand, and so on-></summary>
					CompareOptions_IgnoreSymbols = 4,
					/// <summary>Indicates that the String* comparison must ignore the Kana type-> Kana type refers to Japanese hiragana and katakana characters, which represent phonetic sounds in the Japanese language-> Hiragana is used for native Japanese expressions and words, while katakana is used for words borrowed from other languages, such as "computer" or "Internet". A phonetic sound can be expressed in both hiragana and katakana-> If this value is selected, the hiragana character for one sound is considered equal to the katakana character for the same sound-></summary>
					CompareOptions_IgnoreKanaType = 8,
					/// <summary>Indicates that the String* comparison must ignore the character width-> For example, Japanese katakana characters can be written as full-width or half-width-> If this value is selected, the katakana characters written as full-width are considered equal to the same characters written as half-width-></summary>
					CompareOptions_IgnoreWidth = 16,
					/// <summary>String* comparison must ignore case, then perform an ordinal comparison-> This technique is equivalent to converting the String* to uppercase using the invariant culture and then performing an ordinal comparison on the result-></summary>
					CompareOptions_OrdinalIgnoreCase = 268435456,
					/// <summary>Indicates that the String* comparison must use the String* sort algorithm-> In a String* sort, the hyphen and the apostrophe, as well as other nonalphanumeric symbols, come before alphanumeric characters-></summary>
					CompareOptions_StringSort = 536870912,
					/// <summary>Indicates that the String* comparison must use successive Unicode UTF-16 encoded values of the String* (code unit by code unit comparison), leading to a fast comparison but one that is culture-insensitive-> A String* starting with a code unit XXXX16 comes before a String* starting with YYYY16, if XXXX16 is less than YYYY16-> This value cannot be combined with other <see cref="T:System->Globalization->CompareOptions" /> values and must be used alone-></summary>
					CompareOptions_Ordinal = 1073741824
				};

			}
		}
	}
}
#endif	// _SYSTEM_GLOBALIZATION_COMPAREOPTION_H_

