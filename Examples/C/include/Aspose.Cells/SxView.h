#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SXVIEW() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFieldCollection;
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxView : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotTable* _u_pivotTable;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> _basePivotFields;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> _dataFields;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> _rowFields;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> _columnFields;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> _pageFields;
			intrusive_ptr<Aspose::Cells::System::String> _name;
			intrusive_ptr<Aspose::Cells::System::String> _dataName;
			Aspose::Cells::System::UInt16 _option;
			Aspose::Cells::System::Int16 _number;
			 SxView(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			 SxView(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::System::String> tableName);
			void InitFields(Aspose::Cells::System::Int32 count);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxView> record);
			void SetOption(bool boolValue , Aspose::Cells::System::Int32 mask);
			bool GetOption(Aspose::Cells::System::Int32 mask);
			Aspose::Cells::System::Int32 GetRecordSize();
			Aspose::Cells::System::Int32 WriteToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			 SxView();
		public:
			virtual ~SxView();
	};

}

}

}
