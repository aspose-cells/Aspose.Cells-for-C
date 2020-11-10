#ifndef _SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H_
#define _SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
namespace Cells {
namespace Systems {
namespace Runtime {
namespace InteropServices {

	class ASPOSE_CELLS_API Marshal : public Object
	{
	public:
		static void Copy(intrusive_ptr<Array1D<Byte>> source, Int32 startIndex, intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> destination, Int32 length);
		static void Copy(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> source, intrusive_ptr<Array1D<Byte>> destination, Int32 startIndex, Int32 length);
		static intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> AllocCoTaskMem(Int32 cb);
		static void FreeCoTaskMem(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
	};
}
}
}
}
}
#endif
