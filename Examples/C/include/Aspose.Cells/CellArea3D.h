#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_CELLAREA3D() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellArea3D : public Aspose::Cells::System::Object
#else	class CellArea3D : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Supbook;
			Aspose::Cells::System::Int32 SheetIndex;
			Aspose::Cells::Worksheet* Sheet;
			intrusive_ptr<Aspose::Cells::CellArea> Area;
			 CellArea3D();
		public:
			virtual ~CellArea3D();
	};

}

}
