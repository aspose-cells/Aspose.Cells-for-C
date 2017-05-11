#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the options to filter data when loading workbook from template.
			/// </summary>
			/// 
			/// 
	enum LoadDataFilterOptions 

	{

			/// <summary>
			/// Load nothing
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_None = 0x0000 ,
			/// <summary>
			/// Load all
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_All = 0xFFFF ,
			/// <summary>
			/// Load cells whose value is blank
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellBlank = 0x0001 ,
			/// <summary>
			/// Load cells whose value is string
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellString = 0x0002 ,
			/// <summary>
			/// Load cells whose value is numeric(including datetime)
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellNumeric = 0x0004 ,
			/// <summary>
			/// Load cells whose value is error
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellError = 0x0008 ,
			/// <summary>
			/// Load cells whose value is bool
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellBool = 0x0010 ,
			/// <summary>
			/// Load cells value(all value types) only
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellValue = 0x001F ,
			/// <summary>
			/// Load styles for cell formatting
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Style = 0x0020 ,
			/// <summary>
			/// Load formulas including defined Names
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Formula = 0x0040 ,
			/// <summary>
			/// Load cells data including values, formulas and formatting
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_CellData = 0x007F ,
			/// <summary>
			/// Load document properties
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_DocumentProperties = 0x0080 ,
			/// <summary>
			/// Load charts
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Chart = 0x0100 ,
			/// <summary>
			/// Load shapes
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Shape = 0x0200 ,
			/// <summary>
			/// Load merged cells
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_MergedArea = 0x0400 ,
			/// <summary>
			/// Load conditional formatting
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_ConditionalFormatting = 0x0800 ,
			/// <summary>
			/// Load data validations
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_DataValidation = 0x1000 ,
			/// <summary>
			/// Load pivot tables
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_PivotTable = 0x2000 ,
			/// <summary>
			/// Load tables
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Table = 0x4000 ,
			/// <summary>
			/// Load settings for workbook and worksheet.
			/// </summary>
			/// 
			/// 
			LoadDataFilterOptions_Settings = 0x8000 ,
	};


}

}
