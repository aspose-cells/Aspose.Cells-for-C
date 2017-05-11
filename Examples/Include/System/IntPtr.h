#ifndef _SYSTEM_INTPTR_H_
#define _SYSTEM_INTPTR_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Int64.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			class ASPOSE_CELLS_API IntPtr 
			{
			private:
				void* m_value;
			public:
				IntPtr(int value);
				IntPtr(Int64 value);
				static Int32 GetSize();
				bool IsNull();
				IntPtr(void* value)
				{
					this->m_value = value;
				}
			};
		}
	}
}
#endif//_SYSTEM_INTPTR_H_