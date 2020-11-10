#ifndef _SYSTEM_TYPE_H_
#define _SYSTEM_TYPE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/TypeCode.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems
		{
			class ASPOSE_CELLS_API Type : public Object
			{
			private:
				TypeCode _typeCode;
			protected:
				Type();
			public:
				Type(const Type& type);
				Type(TypeCode tc);
			public:
				static TypeCode GetTypeCode(intrusive_ptr<Type> type);
				static intrusive_ptr<Type> GetType(StringPtr typeName);

			};

			typedef intrusive_ptr<Type> TypePtr;
		}
	}
}
#endif//_SYSTEM_TYPE_H_