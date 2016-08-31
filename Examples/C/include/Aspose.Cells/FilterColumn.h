#pragma once
#include "IconSetType.h"
#include "FilterType.h"
#include "DateTimeGroupingType.h"
//#include "System/Char.h"
#include "FilterOperatorType.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "DynamicFilterType.h"
#include "System/String.h"
#include "System/Int32.h"
#include "BackgroundType.h"
#define STATIC_FILTERCOLUMN() 

namespace Aspose {
namespace Cells {
class FilterColumnCollection;
class CellsColor;
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FilterColumn : public Aspose::Cells::System::Object
#else	class FilterColumn : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::FilterType m_FilterType;
			intrusive_ptr<Aspose::Cells::System::Object> m_filter;
			bool m_hiddenButton;
			bool m_showButton;
			Aspose::Cells::System::Int32 m_FieldIndex;
			Aspose::Cells::FilterColumnCollection* m_FilterColumns;
			static bool IsSimpleFilter(intrusive_ptr<Aspose::Cells::System::String> filter);
			bool IsTrueCriteria(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::FilterOperatorType operatorType , intrusive_ptr<Aspose::Cells::System::Object> criteria);
	public:

			bool GetVisibledropdown();
			void SetVisibledropdown(bool value);
			bool GetHiddenButton();
			void SetHiddenButton(bool value);
			bool GetShowButton();
			void SetShowButton(bool value);
			intrusive_ptr<Aspose::Cells::System::Object> GetFilter();
			void SetFilter(intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::FilterType GetFilterType();
			void SetFilterType(Aspose::Cells::FilterType value);
			Aspose::Cells::System::Int32 GetFieldIndex();
			void SetFieldIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::FilterColumnCollection> GetFilterColumns();
			 FilterColumn(intrusive_ptr<Aspose::Cells::FilterColumnCollection> filterColumns , Aspose::Cells::System::Int32 fieldIndex);
			 FilterColumn(intrusive_ptr<Aspose::Cells::FilterColumnCollection> filterColumns , Aspose::Cells::System::Int32 fieldIndex , bool hiddenButton , bool showButton);
			void Copy(intrusive_ptr<Aspose::Cells::FilterColumn> source);
			void RemoveFilter(intrusive_ptr<Aspose::Cells::System::String> filter);
			void RemoveDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			void AddDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			void AddIconFilter(Aspose::Cells::IconSetType type , Aspose::Cells::System::Int32 iconId);
			void AddFontColor(intrusive_ptr<Aspose::Cells::CellsColor> color);
			void AddFillFilter(Aspose::Cells::BackgroundType pattern , intrusive_ptr<Aspose::Cells::CellsColor> foreColor , intrusive_ptr<Aspose::Cells::CellsColor> backColor);
			void AddFilter(intrusive_ptr<Aspose::Cells::System::String> filter);
			void SimpleFilter(intrusive_ptr<Aspose::Cells::System::String> filter);
			void MatchBlanks();
			void MatchNonBlanks();
			bool IsMatchNonBlanks();
			void Custom(Aspose::Cells::FilterOperatorType operatorType1 , intrusive_ptr<Aspose::Cells::System::Object> criteria1 , bool isAnd , Aspose::Cells::FilterOperatorType operatorType2 , intrusive_ptr<Aspose::Cells::System::Object> criteria2);
			void DynamicFilter(Aspose::Cells::DynamicFilterType type);
			void FilterTop10(bool isTop , bool isPercent , Aspose::Cells::System::Int32 items);
			bool IsVisible(intrusive_ptr<Aspose::Cells::System::Object> o);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FilterColumn();
		public:
			virtual ~FilterColumn();
	};

}

}
