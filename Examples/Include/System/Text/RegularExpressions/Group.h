#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API Group: public Object
					{
					private:
						bool mIsSuccess;
						StringPtr mValue;

					public:
						static intrusive_ptr<Group> EmptyGroup;

						Group(StringPtr value, bool isSuccess);
						bool IsSuccess();
						bool GetSuccess();
						StringPtr GetValue();

					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_H_
