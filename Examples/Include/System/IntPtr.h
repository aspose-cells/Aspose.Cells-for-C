#ifndef _SYSTEM_INTPTR_H_
#define _SYSTEM_INTPTR_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Int64.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			class ASPOSE_CELLS_API IntPtr : public Object
			{
			private:
				void* m_value;
			public:
				static intrusive_ptr<IntPtr> Zero;

				IntPtr();
				IntPtr(void* value);
				IntPtr(int value);
				IntPtr(Int64 value);

				void* GetValue();
				void SetValue(void* _val);
				bool IsNull();
				void SetNULL();
				static Int32 GetSize();
				
			};
		}
	}
}
#endif//_SYSTEM_INTPTR_H_