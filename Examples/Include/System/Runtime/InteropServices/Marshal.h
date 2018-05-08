#ifndef _SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H_
#define _SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/IntPtr.h"

using namespace Aspose::Cells::System;

namespace Aspose {
namespace Cells {
namespace System {
namespace Runtime {
namespace InteropServices {

	class ASPOSE_CELLS_API Marshal : public Object
	{
	public:
		static void Copy(intrusive_ptr<Array1D<Byte>> source, Int32 startIndex, intrusive_ptr<IntPtr> destination, Int32 length);
		static void Copy(intrusive_ptr<IntPtr> source, intrusive_ptr<Array1D<Byte>> destination, Int32 startIndex, Int32 length);
		static intrusive_ptr<IntPtr> AllocCoTaskMem(Int32 cb);
		static void FreeCoTaskMem(intrusive_ptr<IntPtr> ptr);
	};
}
}
}
}
}
#endif
