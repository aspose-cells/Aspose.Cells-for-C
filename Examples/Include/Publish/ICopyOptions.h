#pragma once
#include "Aspose.Cells.Systems/Object.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the copy options.
			/// </summary>
	class ASPOSE_CELLS_API ICopyOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates whether copying the names.
			/// </summary>
			 virtual bool GetCopyNames()=0;
			/// <summary>
			/// Indicates whether copying the names.
			/// </summary>
			 virtual void SetCopyNames(bool value)=0;
			/// <summary>
			/// If the formula is not valid for the dest destination, only copy values.
			/// </summary>
			 virtual bool GetCopyInvalidFormulasAsValues()=0;
			/// <summary>
			/// If the formula is not valid for the dest destination, only copy values.
			/// </summary>
			 virtual void SetCopyInvalidFormulasAsValues(bool value)=0;
			/// <summary>
			/// Indicates whether copying column width in unit of characters.
			/// </summary>
			 virtual bool GetColumnCharacterWidth()=0;
			/// <summary>
			/// Indicates whether copying column width in unit of characters.
			/// </summary>
			 virtual void SetColumnCharacterWidth(bool value)=0;
			/// <summary>
			/// When copying a worksheet to another workbook and the worksheet contains the formulas which refer to other worksheets in MS Excel,
			/// the copied formulas should refer to source workbook. 
			/// But sometimes we have copied other worksheets and we hope the copied formulas refer to other worksheets with the name in the same workbook,
			/// please set this property as true.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// </remarks>
			 virtual bool GetReferToSheetWithSameName()=0;
			/// <summary>
			/// When copying a worksheet to another workbook and the worksheet contains the formulas which refer to other worksheets in MS Excel,
			/// the copied formulas should refer to source workbook. 
			/// But sometimes we have copied other worksheets and we hope the copied formulas refer to other worksheets with the name in the same workbook,
			/// please set this property as true.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// </remarks>
			 virtual void SetReferToSheetWithSameName(bool value)=0;
			/// <summary>
			/// When copying the range in the same file and the chart refers to the source sheet,
			/// False means the copied chart's data source will not be changed.
			/// True means the copied chart's data source refers to the destination sheet.
			/// </summary>
			/// <remarks>
			/// The default value is false, it works as MS Excel.
			/// </remarks>
			 virtual bool GetReferToDestinationSheet()=0;
			/// <summary>
			/// When copying the range in the same file and the chart refers to the source sheet,
			/// False means the copied chart's data source will not be changed.
			/// True means the copied chart's data source refers to the destination sheet.
			/// </summary>
			/// <remarks>
			/// The default value is false, it works as MS Excel.
			/// </remarks>
			 virtual void SetReferToDestinationSheet(bool value)=0;

	};
}
}
