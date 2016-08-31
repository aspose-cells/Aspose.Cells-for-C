#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "CellBorderType.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_ROWPROPERTIES() 

namespace Aspose {
namespace Cells {
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowProperties : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::Int32 FIELD_INDEX;
			 static const Aspose::Cells::System::Int32 FIELD_XF;
			 static const Aspose::Cells::System::Int32 FIELD_OPTION;
			 static const Aspose::Cells::System::Int32 FIELD_HEIGHT;
			 static const Aspose::Cells::System::Int32 FIELD_ALL;
			 static const Aspose::Cells::System::Int32 FIELD_WITHOUT_INDEX;
			Aspose::Cells::System::Int32 RowIndex;
			Aspose::Cells::System::Byte Option0;
			Aspose::Cells::System::Byte Option1;
			Aspose::Cells::System::Int32 XfIndex;
			Aspose::Cells::System::Int16 RawHeight;
			 RowProperties();
			 RowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> source);
			void ToDefault(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Cells> cells);
			void Copy(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> source);
			void Copy(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> source , Aspose::Cells::System::Int32 fields);
			bool IsRowCollapsed();
			void SetIsRowCollapsed(bool value);
			bool IsRowHidden();
			void SetIsRowHidden(bool value);
			bool IsRowHeightMatched();
			void SetIsRowHeightMatched(bool value);
			bool IsRowExplicit();
			void SetIsRowExplicit(bool value);
			Aspose::Cells::System::Byte GetRowOutlineLevel();
			void SetRowOutlineLevel(Aspose::Cells::System::Byte value);
			bool GetThickTopBorder();
			void SetThickTopBorder(bool value);
			bool GetThickOrMediumBottomBorder();
			void SetThickOrMediumBottomBorder(bool value);
			static bool GetRowCollapsed(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetRowCollapsed(Aspose::Cells::System::Byte option , bool value);
			static bool GetRowHidden(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetRowHidden(Aspose::Cells::System::Byte option , bool value);
			static bool GetRowHeightMatched(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetRowHeightMatched(Aspose::Cells::System::Byte option , bool value);
			static bool GetRowExplicit(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetRowExplicit(Aspose::Cells::System::Byte option , bool value);
			static Aspose::Cells::System::Int32 GetRowOutlineLevel(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetRowOutlineLevel(Aspose::Cells::System::Byte option , Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Byte ClearBorderFlags(Aspose::Cells::System::Byte option);
			static bool GetThickTopBorder(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetThickTopBorder(Aspose::Cells::System::Byte option , bool value);
			static bool GetThickOrMediumBottomBorder(Aspose::Cells::System::Byte option);
			static Aspose::Cells::System::Byte SetThickOrMediumBottomBorder(Aspose::Cells::System::Byte option , bool value);
			static bool IsThickTopBorder(Aspose::Cells::CellBorderType border);
			static bool IsThickOrMediumBottomBorder(Aspose::Cells::CellBorderType border);
		public:
			virtual ~RowProperties();
	};

}

}

}
