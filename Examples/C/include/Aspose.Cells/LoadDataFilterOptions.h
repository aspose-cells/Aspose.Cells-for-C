#pragma once
namespace Aspose {
namespace Cells {
	enum LoadDataFilterOptions 

	{

			LoadDataFilterOptions_None = 0x0000 ,
			LoadDataFilterOptions_All = 0xFFFF ,
			LoadDataFilterOptions_CellBlank = 0x0001 ,
			LoadDataFilterOptions_CellString = 0x0002 ,
			LoadDataFilterOptions_CellNumeric = 0x0004 ,
			LoadDataFilterOptions_CellError = 0x0008 ,
			LoadDataFilterOptions_CellBool = 0x0010 ,
			LoadDataFilterOptions_CellValue = 0x001F ,
			LoadDataFilterOptions_Style = 0x0020 ,
			LoadDataFilterOptions_Formula = 0x0040 ,
			LoadDataFilterOptions_CellData = 0x007F ,
			LoadDataFilterOptions_DocumentProperties = 0x0080 ,
			LoadDataFilterOptions_Chart = 0x0100 ,
			LoadDataFilterOptions_Shape = 0x0200 ,
			LoadDataFilterOptions_MergedArea = 0x0400 ,
			LoadDataFilterOptions_ConditionalFormatting = 0x0800 ,
			LoadDataFilterOptions_DataValidation = 0x1000 ,
			LoadDataFilterOptions_PivotTable = 0x2000 ,
			LoadDataFilterOptions_Table = 0x4000 ,
			LoadDataFilterOptions_Settings = 0x8000 ,
	};


}

}
