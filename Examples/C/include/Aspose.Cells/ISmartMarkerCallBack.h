#pragma once
#include "System/String.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ISMARTMARKERCALLBACK() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ISmartMarkerCallBack : public Aspose::Cells::System::Object
#else	class ISmartMarkerCallBack : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual void Process(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 colIndex , intrusive_ptr<Aspose::Cells::System::String> tableName , intrusive_ptr<Aspose::Cells::System::String> columnName) = 0;
		public:
	};

}

}
