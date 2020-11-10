#ifndef _SYSTEM_INTPTR_H_
#define _SYSTEM_INTPTR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Int64.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			class ASPOSE_CELLS_API IntPtr : public Object
			{
			private:
				void* m_value;
			public:
				static intrusive_ptr<Aspose::Cells::Systems::IntPtr> Zero;

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