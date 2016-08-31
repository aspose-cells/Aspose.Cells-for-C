#pragma once
#include "System/Object.h"
#include "SmartGroupType.h"
#include "System/Array2D.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "SmartMarkerType.h"
#define STATIC_SMARTMARKER() 

namespace Aspose {
namespace Cells {
class Row;
}
}

namespace Aspose {
namespace Cells {
	class SmartMarker : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::SmartMarkerType Type;
			Aspose::Cells::System::Int32 BaseRow;
			Aspose::Cells::System::Int32 BaseColumn;
			Aspose::Cells::System::Int32 Row;
			Aspose::Cells::System::Int32 Column;
			Aspose::Cells::System::Int32 GetCRIndex(bool isVertical);
			bool IsArrayFormula;
			bool IsVertical;
			bool AddRows;
			bool CopyStyle;
			Aspose::Cells::System::Int32 MergedRows;
			Aspose::Cells::System::Int32 MergedColumns;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> XfIndexes;
			Aspose::Cells::System::Int32 ReadXfIndex;
			bool Shift;
			Aspose::Cells::System::Int32 ShiftCounts;
			Aspose::Cells::System::Int32 Skip;
			intrusive_ptr<Aspose::Cells::System::String> TableName;
			intrusive_ptr<Aspose::Cells::System::String> FieldName;
			Aspose::Cells::System::Int32 FieldIndex;
			Aspose::Cells::System::Int32 MaxCount;
			bool ConvertNumber;
			bool Group;
			Aspose::Cells::System::Int32 GroupOrder;
			Aspose::Cells::System::Int32 GroupStartIndex;
			Aspose::Cells::System::Int32 DataCount;
			Aspose::Cells::SmartGroupType GroupType;
			Aspose::Cells::System::Int32 Subtotal;
			intrusive_ptr<Aspose::Cells::System::String> SubtotalFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SubtotalGroups;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> SubTotalInfo;
			bool SubtotalInNextRow;
			Aspose::Cells::System::Int32 SubtotalXfIndex;
			intrusive_ptr<Aspose::Cells::Row> SubtotalRow;
			intrusive_ptr<Aspose::Cells::System::String> SubtotalString;
			bool IsRepeatedSubtotalFormula;
			Aspose::Cells::System::Int32 SortKey;
			bool Ascending;
			bool IsBean;
			bool IsHtml;
			bool IsPicture;
			bool PictureFitToCell;
			bool IsPictureScale;
			bool HasPictureLeft;
			Aspose::Cells::System::Int32 PictureLeft;
			bool HasPictureTop;
			Aspose::Cells::System::Int32 PictureTop;
			bool HasPcitureWidth;
			Aspose::Cells::System::Int32 PictureWidth;
			bool HasPictureHeight;
			Aspose::Cells::System::Int32 PictureHeight;
			Aspose::Cells::System::Int32 PictureHeightScale;
			Aspose::Cells::System::Int32 PictureWidthScale;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> MulLevels;
			Aspose::Cells::System::Int32 currentItemCount;
			 SmartMarker(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void InitRC();
			Aspose::Cells::System::Int32 GetTotalCount();
			Aspose::Cells::System::Int32 GetInsertCount();
			Aspose::Cells::System::Int32 GetShiftCount();
			 SmartMarker();
		public:
			virtual ~SmartMarker();
	};

}

}
