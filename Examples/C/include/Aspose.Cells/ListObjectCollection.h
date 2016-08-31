#pragma once
#include "ListObject.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "ShiftType.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_LISTOBJECTCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ITableCellStyleAccessor;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API ListObjectCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ListObjectCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_sheet;
	public:

			intrusive_ptr<Aspose::Cells::Tables::ITableCellStyleAccessor> TableCellStyleAccessor;
			 ListObjectCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void StartStyleAcceleration();
			void FinishStyleAcceleration();
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::System::String> GetNextTableName(intrusive_ptr<Aspose::Cells::System::String> tableName);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyInRange(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> source , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , intrusive_ptr<Aspose::Cells::CellArea> destArea , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			Aspose::Cells::System::Int32 GetTableIndexByCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetTableByCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetByDisplayName(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool hasHeaders);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> startCell , intrusive_ptr<Aspose::Cells::System::String> endCell , bool hasHeaders);
			Aspose::Cells::System::Int32 Add();
			void InsertRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 number);
			void ClearRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType type);
			bool IsAllowedToDeleteRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void InsertColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 number);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetById(Aspose::Cells::System::Int32 id);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			bool HasFilterComboBox(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void DoAfteReadingXlsx();
			void UpdateColumnName();
			void Remove(intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
			 ListObjectCollection();
		public:
			virtual ~ListObjectCollection();
	};

}

}

}
