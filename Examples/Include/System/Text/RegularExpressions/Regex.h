#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Text/RegularExpressions/RegexOptions.h"
#include "System/Text/RegularExpressions/NamedPattern.h"
#include "System/Text/RegularExpressions/RegexHelper.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Collections;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class Match;
					class MatchCollection;
					class ASPOSE_CELLS_API Regex : public Object
					{
					private:
						intrusive_ptr<NamedPattern> mPattern;
						static bool isMetachar(Char ch);
					public:
						//java: was byte, but internally it int anywere
						static const int Q = 5;	// quantifier
						static const int S = 4;	// ordinary stoppper
						static const int Z = 3;	// ScanBlank stopper
						static const int X = 2;	// whitespace
						static const int E = 1;	// should be escaped
					public:
						Regex(StringPtr pattern);
						Regex(StringPtr pattern, RegexOptions options);

						intrusive_ptr<Match> getMatch(StringPtr input);
						intrusive_ptr<Match> getMatch(StringPtr input, int startat);
						static intrusive_ptr<Match> getMatch1(StringPtr  input, StringPtr  pattern);
						static intrusive_ptr<Match> getMatch1(StringPtr  input, StringPtr  pattern, RegexOptions options);
						static intrusive_ptr<MatchCollection> Matches(StringPtr input, StringPtr pattern, RegexOptions regexOptions);
						intrusive_ptr<MatchCollection> Matches(StringPtr input);
						static bool IsMatch(StringPtr input, StringPtr pattern);
						intrusive_ptr<Array1D<String*>> Split(StringPtr  input);
						intrusive_ptr<Array1D<String*>> Split(StringPtr  input, Int32 limit);
						static intrusive_ptr<Array1D<String*>> Split(StringPtr input, StringPtr pattern);
						static intrusive_ptr<MatchCollection> Matches(intrusive_ptr<Regex> regex, StringPtr text);
						static intrusive_ptr<MatchCollection> Matches(intrusive_ptr<NamedPattern> pattern, StringPtr text);
						intrusive_ptr<NamedPattern> GetPattern();
						static StringPtr Replace(StringPtr input, StringPtr pattern, StringPtr replacement, RegexOptions regexOptions);

						bool IsMatch(StringPtr input);
						static bool IsMatch(StringPtr input, StringPtr pattern, RegexOptions options);
						StringPtr Replace(StringPtr input, StringPtr replacement);
						static StringPtr escape(StringPtr input);

					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_H_