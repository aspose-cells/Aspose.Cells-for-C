#pragma once
//#include "System/CharHelper.h"
//#include "System/UInt16.h"
//#include "System/Int16.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Array.h"
#define STATIC_DATAEXPDCON() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SheetPivotCacheDataSource;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class DataExpDcon : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::System::String> SheetName;
			intrusive_ptr<Aspose::Cells::System::String> ExpRelId;
			bool IsRef;
			bool IsBuiltIn;
			intrusive_ptr<Aspose::Cells::System::String> ReferTo;
			intrusive_ptr<Aspose::Cells::CellArea> Ca;
			intrusive_ptr<Aspose::Cells::System::String> FileName;
			Aspose::Cells::System::Int32 GetRecordSize();
			Aspose::Cells::System::Int32 WriteToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 WriteDconRefToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 WriteDconNameToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dconRef;
			 DataExpDcon(intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dconRef);
			 DataExpDcon();
		public:
			virtual ~DataExpDcon();
	};

}

}

}
