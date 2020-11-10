#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
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
