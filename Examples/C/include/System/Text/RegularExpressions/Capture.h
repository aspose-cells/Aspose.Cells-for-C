#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_H_

#include <regex>
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"


namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API Capture : public Object
					{
					protected:
						cmatch* _match;
					public:
						//StringPtr _text;
						//StringPtr  GetValue();
						Int32 GetIndex();
					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_H_