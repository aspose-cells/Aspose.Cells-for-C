#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class IDataSorter;
		enum DateTimeGroupingType;
		enum DynamicFilterType;
		class ICellsColor;
		enum BackgroundType;
		enum IconSetType;
		enum FilterOperatorType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents auto filtering for the specified worksheet.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// 
			/// [C++]
			/// 
	    /// //Creating a file stream containing the Excel file to be opened
	    /// intrusive_ptr<FileStream> fstream = new FileStream(new String("D:\\book1.xls"), FileMode::FileMode_Open);
	    /// //Instantiating a Workbook object and open a stream.
	    /// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(fstream);
	    /// //Accessing the first worksheet in the Excel file
	    /// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
	    /// //Creating AutoFilter by giving the cells range of the heading row
	    /// worksheet->GetIAutoFilter()->SetRange(new String("A1:B1"));
	    /// //Filtering columns with specified values
	    /// worksheet->GetIAutoFilter()->Filter(1, new String("Bananas"));
	    /// //Saving the modified Excel file.
	    /// workbook->Save(new String("D:\\output.xls"));
	    /// //Closing the file stream to free all resources
	    /// fstream->Close();
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IAutoFilter : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the data sorter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IDataSorter> 		GetIDataSorter()=0;
			/// <summary>
			/// Sets the range to which the specified AutoFilter applies.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endColumn" >End column Index.</param>
			 virtual void SetRange(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Represents the range to which the specified AutoFilter applies.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetRange()=0;
			/// <summary>
			/// Represents the range to which the specified AutoFilter applies.
			/// </summary>
			 virtual void SetRange(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Adds a filter for a filter column.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).
			/// </param>
			/// <param name="criteria" >The specified criteria (a string; for example, "101"). 
			/// It only can be null or be one of the cells' value in this column.
			/// </param>
			/// <remarks>
			/// MS Excel 2007 supports multiple selection in a filter column.
			/// </remarks>
			 virtual void AddFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria)=0;
			/// <summary>
			/// Adds a date filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).
			/// </param>
			/// <param name="dateTimeGroupingType" ><see cref="DateTimeGroupingType" />
			/// </param>
			/// <param name="year" >The year.</param>
			/// <param name="month" >The month.</param>
			/// <param name="day" >The day.</param>
			/// <param name="hour" >The hour.</param>
			/// <param name="minute" >The minute.</param>
			/// <param name="second" >The second.</param>
			/// <remarks>
			/// If DateTimeGroupingType is Year, only the param year effects.
			/// If DateTiemGroupingType is Month, only the param year and month effect.
			/// </remarks>
			 virtual void AddDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second)=0;
			/// <summary>
			/// Removes a date filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).
			/// </param>
			/// <param name="dateTimeGroupingType" ><see cref="DateTimeGroupingType" />
			/// </param>
			/// <param name="year" >The year.</param>
			/// <param name="month" >The month.</param>
			/// <param name="day" >The day.</param>
			/// <param name="hour" >The hour.</param>
			/// <param name="minute" >The minute.</param>
			/// <param name="second" >The second.</param>
			/// <remarks>
			/// If DateTimeGroupingType is Year, only the param year effects.
			/// If DateTiemGroupingType is Month, only the param year and month effect.
			/// </remarks>
			 virtual void RemoveDateFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DateTimeGroupingType dateTimeGroupingType , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second)=0;
			/// <summary>
			/// Removes a filter for a filter column.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).
			/// </param>
			/// <param name="criteria" >The specified criteria (a string; for example, "101"). 
			/// It only can be null or be one of the cells' value in this column.
			/// </param>
			 virtual void RemoveFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria)=0;
			/// <summary>
			/// Filters a list with specified criteria.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).
			/// </param>
			/// <param name="criteria" >The specified criteria (a string; for example, "101"). </param>
			/// <remarks>
			/// Aspose.Cells will remove all other filter setting on this field as Ms Excel 97-2003.
			/// </remarks>
			 virtual void Filter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::System::String> criteria)=0;
			/// <summary>
			/// Filter the top 10 item in the list
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="isTop" >Indicates whether filter from top or bottom</param>
			/// <param name="isPercent" >Indicates whether the items is percent or count </param>
			/// <param name="itemCount" >The item count</param>
			 virtual void FilterTop10(Aspose::Cells::System::Int32 fieldIndex , bool isTop , bool isPercent , Aspose::Cells::System::Int32 itemCount)=0;
			/// <summary>
			/// Adds a dynamic filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="dynamicFilterType" >
			/// Dynamic filter type.
			/// </param>
			 virtual void DynamicFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::DynamicFilterType dynamicFilterType)=0;
			/// <summary>
			/// Adds a font color filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="color" >The <see cref="ICellsColor" />
			///  object.
			/// </param>
			 virtual void 		AddFontColorFilter(Aspose::Cells::System::Int32 fieldIndex , intrusive_ptr<Aspose::Cells::ICellsColor> color)=0;
			/// <summary>
			/// Adds a fill color filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="pattern" >The background pattern type.</param>
			/// <param name="foregroundColor" >The foreground color.</param>
			/// <param name="backgroundColor" >The background color.</param>
			 virtual void 		AddFillColorFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::BackgroundType pattern , intrusive_ptr<Aspose::Cells::ICellsColor> foregroundColor , intrusive_ptr<Aspose::Cells::ICellsColor> backgroundColor)=0;
			/// <summary>
			/// Adds an icon filter.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="iconSetType" >The icon set type.</param>
			/// <param name="iconId" >The icon id.</param>
			/// <remarks>
			/// Only supports to add the icon filter.
			/// Not supports checking which row is visible if the filter is icon filter.
			/// </remarks>
			 virtual void AddIconFilter(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::IconSetType iconSetType , Aspose::Cells::System::Int32 iconId)=0;
			/// <summary>
			/// Match all blank cell in the list.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			 virtual void MatchBlanks(Aspose::Cells::System::Int32 fieldIndex)=0;
			/// <summary>
			/// Match all not blank cell in the list.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			 virtual void MatchNonBlanks(Aspose::Cells::System::Int32 fieldIndex)=0;
			/// <summary>
			/// Filters a list with a custom criteria.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="operatorType1" >The filter operator type</param>
			/// <param name="criteria1" >The custom criteria</param>
			 virtual void Custom(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::FilterOperatorType operatorType1 , intrusive_ptr<Aspose::Cells::System::Object> criteria1)=0;
			/// <summary>
			/// Filters a list with custom criterias.
			/// </summary>
			/// <param name="fieldIndex" >The integer offset of the field on which you want to base the filter 
			/// (from the left of the list; the leftmost field is field 0).</param>
			/// <param name="operatorType1" >The filter operator type</param>
			/// <param name="criteria1" >The custom criteria</param>
			/// <param name="isAnd" />
			/// 
			/// <param name="operatorType2" >The filter operator type</param>
			/// <param name="criteria2" >The custom criteria</param>
			 virtual void Custom(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::FilterOperatorType operatorType1 , intrusive_ptr<Aspose::Cells::System::Object> criteria1 , bool isAnd , Aspose::Cells::FilterOperatorType operatorType2 , intrusive_ptr<Aspose::Cells::System::Object> criteria2)=0;
			/// <summary>
			/// Unhide all rows.
			/// </summary>
			 virtual void ShowAll()=0;
			/// <summary>
			/// Remove the specific filter.
			/// </summary>
			/// <param name="fieldIndex" >The specific filter index</param>
			 virtual void RemoveFilter(Aspose::Cells::System::Int32 fieldIndex)=0;
			/// <summary>
			/// Refresh auto filters to hide or unhide the rows. 
			/// </summary>
			 virtual void Refresh()=0;

	};
}
}
