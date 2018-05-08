#pragma once
#include "System/Object.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			///  The load data options.
			/// </summary>
	class ASPOSE_CELLS_API ILoadDataOption : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates whether to import the formulas.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetImportFormula(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool GetFormula()=0;
			/// <summary>
			/// Indicates whether to import the formulas.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetImportFormula(bool). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetFormula(bool value)=0;
			/// <summary>
			/// Indicates whether to import the formulas.
			/// The default value is true.
			/// </summary>
			 virtual bool GetImportFormula()=0;
			/// <summary>
			/// Indicates whether to import the formulas.
			/// The default value is true.
			/// </summary>
			 virtual void SetImportFormula(bool value)=0;
			/// <summary>
			/// Indicates that only creating all worksheet instances without loading data.
			/// </summary>
			 virtual bool GetOnlyCreateWorksheet()=0;
			/// <summary>
			/// Indicates that only creating all worksheet instances without loading data.
			/// </summary>
			 virtual void SetOnlyCreateWorksheet(bool value)=0;
			/// <summary>
			/// Indicates only loading the data of the visible worksheet.
			/// </summary>
			 virtual bool GetOnlyVisibleWorksheet()=0;
			/// <summary>
			/// Indicates only loading the data of the visible worksheet.
			/// </summary>
			 virtual void SetOnlyVisibleWorksheet(bool value)=0;

	};
}
}
