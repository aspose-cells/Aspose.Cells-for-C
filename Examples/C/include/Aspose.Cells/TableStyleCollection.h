#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "TableStyle.h"
#include "System/Object.h"
#include "System/String.h"
#include "TableStyleType.h"
#include "PivotTableStyleType.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_TABLESTYLECOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API TableStyleCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class TableStyleCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::System::Object> m_defaultTableStyleType;
			intrusive_ptr<Aspose::Cells::System::String> m_defaultPivotStyle;
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetDefaultTableStyleType();
			void SetDefaultTableStyleType(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetDefaultPivotStyle();
			void SetDefaultPivotStyle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetParent();
			 TableStyleCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> worksheets);
			Aspose::Cells::System::Int32 AddTableStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 AddPivotTableStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetBuiltinTableStyle(Aspose::Cells::Tables::TableStyleType type);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetPivotTableStyle(Aspose::Cells::Pivot::PivotTableStyleType type);
			 TableStyleCollection();
		public:
			virtual ~TableStyleCollection();
	};

}

}

}
