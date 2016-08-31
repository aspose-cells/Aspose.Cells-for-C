#pragma once
#include "System/Byte.h"
#include "RectangleAlignmentType.h"
#include "System/Object.h"
//#include "System/Double.h"
//#include "System/Single.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/String.h"
//#include "System/ArgumentException.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PANECOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API PaneCollection : public Aspose::Cells::System::Object
#else	class PaneCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_sheet;
			Aspose::Cells::System::Byte activePane;
			Aspose::Cells::System::Int32 row;
			Aspose::Cells::System::Int16 column;
			Aspose::Cells::System::Int32 freezedRows;
			Aspose::Cells::System::Int32 freezedColumns;
	public:

			 PaneCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			bool NoLeftCell;
			Aspose::Cells::System::Int32 GetFirstVisibleRowOfBottomPane();
			void SetFirstVisibleRowOfBottomPane(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFirstVisibleColumnOfRightPane();
			void SetFirstVisibleColumnOfRightPane(Aspose::Cells::System::Int32 value);
			Aspose::Cells::Drawing::RectangleAlignmentType GetAcitvePaneType();
			void SetAcitvePaneType(Aspose::Cells::Drawing::RectangleAlignmentType value);
			Aspose::Cells::System::Byte GetActivePane();
			void SetActivePane(Aspose::Cells::System::Byte value);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void Copy(intrusive_ptr<Aspose::Cells::PaneCollection> source);
			Aspose::Cells::System::Int32 GetRow();
			void SetRow(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetColumn();
			void SetColumn(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFreezeRows();
			void SetFreezeRows(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFreezedColumns();
			void SetFreezedColumns(Aspose::Cells::System::Int32 value);
			void Split(intrusive_ptr<Aspose::Cells::System::String> activeCell);
			void InitSelection();
			void Split(Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void SetPane1(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns);
			void SetPane(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns);
			 PaneCollection();
		public:
			virtual ~PaneCollection();
	};

}

}
