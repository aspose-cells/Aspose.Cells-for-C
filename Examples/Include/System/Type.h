#ifndef _SYSTEM_TYPE_H_
#define _SYSTEM_TYPE_H_

#include "System/Object.h"
#include "System/TypeCode.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
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