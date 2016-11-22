#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXOPTIONS_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXOPTIONS_H_

namespace Aspose { 
	namespace Cells { 
		namespace System{
			namespace Text {
				namespace RegularExpressions {
					enum RegexOptions
					{
						// Summary:
						//     Specifies that no options are set->
						RegexOptions_None = 0,
						//
						// Summary:
						//     Specifies case-insensitive matching->
						RegexOptions_IgnoreCase = 1,
						//
						// Summary:
						//     Multiline mode-> Changes the meaning of ^ and $ so they match at the beginning
						//     and end, respectively, of any line, and not just the beginning and end of
						//     the entire StringPtr->
						RegexOptions_Multiline = 2,
						//
						// Summary:
						//     Specifies that the only valid captures are explicitly named or numbered groups
						//     of the form (?<name>бн)-> This allows unnamed parentheses to act as noncapturing
						//     groups without the syntactic clumsiness of the expression (?:бн)->
						RegexOptions_ExplicitCapture = 4,
						//
						// Summary:
						//     Specifies that the regular expression is compiled to an assembly-> This yields
						//     faster execution but increases startup time-> This value should not be assigned
						//     to the System->Text->RegularExpressions->RegexCompilationInfo->Options property
						//     when calling the System->Text->RegularExpressions->Regex->CompileToAssembly(System->Text->RegularExpressions->RegexCompilationInfo[],System->Reflection->AssemblyName)
						//     method->
						RegexOptions_Compiled = 8,
						//
						// Summary:
						//     Specifies single-line mode-> Changes the meaning of the dot (->) so it matches
						//     every character (instead of every character except \n)->
						RegexOptions_Singleline = 16,
						//
						// Summary:
						//     Eliminates unescaped white space from the pattern and enables comments marked
						//     with #-> However, the System->Text->RegularExpressions->RegexOptions->IgnorePatternWhitespace
						//     value does not affect or eliminate white space in character classes->
						RegexOptions_IgnorePatternWhitespace = 32,
						//
						// Summary:
						//     Specifies that the search will be from right to left instead of from left
						//     to right->
						RegexOptions_RightToLeft = 64,
						//
						// Summary:
						//     Enables ECMAScript-compliant behavior for the expression-> This value can
						//     be used only in conjunction with the System->Text->RegularExpressions->RegexOptions->IgnoreCase,
						//     System->Text->RegularExpressions->RegexOptions->Multiline, and System->Text->RegularExpressions->RegexOptions->Compiled
						//     values-> The use of this value with any other values results in an exception->
						RegexOptions_ECMAScript = 256,
						//
						// Summary:
						//     Specifies that cultural differences in language is ignored-> See Performing
						//     Culture-Insensitive Operations in the RegularExpressions Namespace for more
						//     information->
						RegexOptions_CultureInvariant = 512,
					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXOPTIONS_H_
