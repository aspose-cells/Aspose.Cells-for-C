#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "System/Drawing/Color.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "System/Collections/Hashtable.h"
#include "CellBorderType.h"
#include "System/String.h"
#include "CellArea.h"
//#include "System/Math.h"
#include "System/Collections/IEnumerator.h"
#include "BorderType.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "Cell.h"
//#include "System/Int16.h"
//#include "System/Collections/CollectionBase.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/StringBuilder.h"
#define STATIC_RANGE() 

namespace Aspose {
namespace Cells {
class PasteOptions;
class StyleFlag;
class Cells;
class Worksheet;
class Style;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Range : public Aspose::Cells::System::Object
#else	class Range : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> rangeName;
			intrusive_ptr<Aspose::Cells::CellArea> m_Area;
			void SetCellBorder(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> xfMap , Aspose::Cells::BorderType type , Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::System::Drawing::Color> borderColor);
			void MoveColumnInfo(Aspose::Cells::System::Int32 sourceIndex , Aspose::Cells::System::Int32 destIndex);
			void MoveRowInfo(Aspose::Cells::System::Int32 sourceIndex , Aspose::Cells::System::Int32 destIndex);
			void MoveCellInfo(Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 j , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			Aspose::Cells::System::Int32 GetDispalyXFIndex(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void CopyMergedCells(intrusive_ptr<Aspose::Cells::Range> range , bool transpose);
			bool Equals(intrusive_ptr<Aspose::Cells::Range> range);
			void InnerCopy(intrusive_ptr<Aspose::Cells::Range> range , intrusive_ptr<Aspose::Cells::PasteOptions> options);
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			Aspose::Cells::Cells* cells;
			intrusive_ptr<Aspose::Cells::System::Object> Source;
			bool IsIntersect(intrusive_ptr<Aspose::Cells::Range> range);
			intrusive_ptr<Aspose::Cells::Range> Intersect(intrusive_ptr<Aspose::Cells::Range> range);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Union(intrusive_ptr<Aspose::Cells::Range> range);
			intrusive_ptr<Aspose::Cells::CellArea> GetArea();
			 Range(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::Cells> cells);
			 Range(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::Cells> cells);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columns);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			Aspose::Cells::System::Int32 GetRowCount();
			Aspose::Cells::System::Int32 GetColumnCount();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::String> GetRefersTo();
			intrusive_ptr<Aspose::Cells::System::String> GetSheetName();
			intrusive_ptr<Aspose::Cells::System::String> GetRefName();
			intrusive_ptr<Aspose::Cells::System::String> GetRefToWithoutSheet(Aspose::Cells::System::Int32 limitRow , Aspose::Cells::System::Int32 limitColumn , bool absolute);
			bool IsWholeRow(Aspose::Cells::System::Int32 limitColumn);
			bool IsWholeColumn(Aspose::Cells::System::Int32 limitRow);
			bool IsEmpty();
			Aspose::Cells::System::Int32 GetFirstRow();
			Aspose::Cells::System::Int32 GetFirstColumn();
			void Merge();
			void UnMerge();
			void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue , bool isConverted , bool setStyle);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void SetXFIndex(Aspose::Cells::System::Int32 xfIndex);
			void SetOutlineBorders(Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::System::Drawing::Color> borderColor);
			void SetOutlineBorders(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellBorderType>> borderStyles , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> borderColors);
			void SetOutlineBorder(Aspose::Cells::BorderType borderEdge , Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::System::Drawing::Color> borderColor);
			Aspose::Cells::System::Double GetColumnWidth();
			void SetColumnWidth(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetRowHeight();
			void SetRowHeight(Aspose::Cells::System::Double value);
			void CopyRangeData(intrusive_ptr<Aspose::Cells::Range> source);
			void MoveTo(Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			void CopyData(intrusive_ptr<Aspose::Cells::Range> range);
			void CopyValue(intrusive_ptr<Aspose::Cells::Range> range);
			void UpdateListColumnName(intrusive_ptr<Aspose::Cells::CellArea> destArea , intrusive_ptr<Aspose::Cells::PasteOptions> options);
			void CopyStyle(intrusive_ptr<Aspose::Cells::Range> range);
			void Copy(intrusive_ptr<Aspose::Cells::Range> range , intrusive_ptr<Aspose::Cells::PasteOptions> options);
			void Copy(intrusive_ptr<Aspose::Cells::Range> range);
			intrusive_ptr<Aspose::Cells::Cell> GetIndexObject(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::Cell> GetCellOrNull(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::Worksheet> GetWorksheet();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 Range();
		public:
			virtual ~Range();
	};

}

}
