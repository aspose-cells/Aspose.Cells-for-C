#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
#include "System/Double.h"
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "CellValueType.h"
#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/DateTime.h"
//#include "System/TypeCode.h"
#include "System/Array1D.h"
#define STATIC_REVISIONCELLDATA() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class Revision;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionCellData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::Revision> _revision;
			 RevisionCellData(intrusive_ptr<Aspose::Cells::Revisions::Revision> revision);
			 RevisionCellData(intrusive_ptr<Aspose::Cells::Revisions::Revision> revision , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Row;
			Aspose::Cells::System::Int16 Column;
			Aspose::Cells::System::Int32 XfIndex;
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::CellValueType GetType();
			Aspose::Cells::System::Double GetDoubleValue();
			intrusive_ptr<Aspose::Cells::System::Object> m_Value;
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			bool IsPh;
			intrusive_ptr<Aspose::Cells::System::String> Formula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula;
			Aspose::Cells::System::Int16 GrbitFmla;
			bool IsFormula();
			intrusive_ptr<Aspose::Cells::System::Object> GetExportValue();
			bool IsVolatileFormula();
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2007();
			void SetFormula2007(intrusive_ptr<Aspose::Cells::System::String> value);
			 RevisionCellData();
		public:
			virtual ~RevisionCellData();
	};

}

}

}
