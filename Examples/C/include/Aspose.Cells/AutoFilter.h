#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Collections/IList.h"
//#include "System/Exception.h"
#include "IconSetType.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "BackgroundType.h"
#include "System/UInt16.h"
//#include "System/TypeCode.h"
#include "DateTimeGroupingType.h"
//#include "System/Char.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/StringHelperPal.h"
#include "DynamicFilterType.h"
//#include "System/Collections/SortedList.h"
#include "System/String.h"
#include "System/Int32.h"
#include "FilterOperatorType.h"
//#include "System/Type.h"
#define STATIC_AUTOFILTER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class FilterColumnCollection;
class DataSorter;
class CellArea;
class Name;
class CellsColor;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API AutoFilter : public Aspose::Cells::System::Object
#else	class AutoFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_sheet;
			intrusive_ptr<Aspose::Cells::System::String> range;
			void ParseRange();
	public:

			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			Aspose::Cells::System::Object* m_parent;
			bool IsInListObject();
			 AutoFilter(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::CellArea> GetSortArea();
			intrusive_ptr<Aspose::Cells::DataSorter> m_sorter;
			intrusive_ptr<Aspose::Cells::DataSorter> GetSorter();
			void Copy(intrusive_ptr<Aspose::Cells::AutoFilter> source);
			intrusive_ptr<Aspose::Cells::CellArea> rangeArea;
			void SetRange(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			void SetRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::System::String> GetRange();
			void SetRange(intrusive_ptr<Aspose::Cells::System::String> value);
			void DoBeforeWriteXlsx();
			void SetName(intrusive_ptr<Aspose::Cells::Name> name);
			bool m_customFilter;
			void AddFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria);
			void AddDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			void RemoveDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			void RemoveFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria);
			void Filter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria);
			void FilterTop10(Aspose::Cells::System::Int32 fieldIndex , bool isTop , bool isPercent , Aspose::Cells::System::Int32 itemCount);
			void DynamicFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DynamicFilterType dynamicFilterType);
			void AddFontColorFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::CellsColor> color);
			void AddFillColorFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::BackgroundType pattern , intrusive_ptr<Aspose::Cells::CellsColor> foregroundColor , intrusive_ptr<Aspose::Cells::CellsColor> backgroundColor);
			void AddIconFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::IconSetType iconSetType , Aspose::Cells::System::Int32 iconId);
			void MatchBlanks(Aspose::Cells::System::Int32 fieldIndex);
			void MatchNonBlanks(Aspose::Cells::System::Int32 fieldIndex);
			void Custom(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::FilterOperatorType operatorType1 , intrusive_ptr<Aspose::Cells::System::Object> criteria1);
			void Custom(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::FilterOperatorType operatorType1 , intrusive_ptr<Aspose::Cells::System::Object> criteria1 , bool isAnd , Aspose::Cells::FilterOperatorType operatorType2 , intrusive_ptr<Aspose::Cells::System::Object> criteria2);
			void ShowAll();
			void RemoveFilter(Aspose::Cells::System::Int32 fieldIndex);
			bool CalculatePivotFilter(intrusive_ptr<Aspose::Cells::System::Object> o);
			void Refresh();
			intrusive_ptr<Aspose::Cells::FilterColumnCollection> GetFilterColumns();
			intrusive_ptr<Aspose::Cells::FilterColumnCollection> GetFilterColumnCollection();
			intrusive_ptr<Aspose::Cells::FilterColumnCollection> m_FilterColumns;
			bool HasFilterColumns();
			Aspose::Cells::System::Int32 GetDropDownCount();
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::UInt16 GetRow();
			intrusive_ptr<Aspose::Cells::CellArea> GetRangeArea();
			void InsertRow(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 number);
			void InsertColumn(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 number);
			static intrusive_ptr<Aspose::Cells::System::String> FilterCriteriaToString(intrusive_ptr<Aspose::Cells::System::Object> filterCriteria);
			 AutoFilter();
		public:
			virtual ~AutoFilter();
	};

}

}
