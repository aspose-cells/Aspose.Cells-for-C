#ifndef _SYSTEM_STRINGCOMPARISON_H_
#define _SYSTEM_STRINGCOMPARISON_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			enum StringComparison
			{
				// Summary:
				//     Compare strings using culture-sensitive sort rules and the current culture->
				StringComparison_CurrentCulture = 0,
				//
				// Summary:
				//     Compare strings using culture-sensitive sort rules, the current culture,
				//     and ignoring the case of the strings being compared->
				StringComparison_CurrentCultureIgnoreCase = 1,
				//
				// Summary:
				//     Compare strings using culture-sensitive sort rules and the invariant culture->
				StringComparison_InvariantCulture = 2,
				//
				// Summary:
				//     Compare strings using culture-sensitive sort rules, the invariant culture,
				//     and ignoring the case of the strings being compared->
				StringComparison_InvariantCultureIgnoreCase = 3,
				//
				// Summary:
				//     Compare strings using ordinal sort rules->
				StringComparison_Ordinal = 4,
				//
				// Summary:
				//     Compare strings using ordinal sort rules and ignoring the case of the strings
				//     being compared->
				StringComparison_OrdinalIgnoreCase = 5,
			};
		}
	}
}
#endif//_SYSTEM_STRINGCOMPARISON_H_