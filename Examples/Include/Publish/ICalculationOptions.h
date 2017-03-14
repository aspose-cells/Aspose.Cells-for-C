#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		class ICustomFunction;
		enum  CalculationPrecisionStrategy;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents options for calculation.
			/// </summary>
	class ASPOSE_CELLS_API ICalculationOptions : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates if you need to hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.
			/// </summary>
			 virtual bool GetIgnoreError()=0;
			/// <summary>
			/// Indicates if you need to hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.
			/// </summary>
			 virtual void SetIgnoreError(bool value)=0;
			/// <summary>
			/// The custom formula calculation functions to extend the calculation engine.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICustomFunction> 		GetCustomFunction()=0;
			/// <summary>
			/// The custom formula calculation functions to extend the calculation engine.
			/// </summary>
			 virtual void SetCustomFunction(intrusive_ptr<Aspose::Cells::ICustomFunction> value)=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// -1 for this property means the calculation will use WorkbookSettings's CalcStackSize of corresponding workbook.
			/// </summary>

			 virtual Aspose::Cells::System::Int32 GetCalcStackSize()=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// -1 for this property means the calculation will use WorkbookSettings's CalcStackSize of corresponding workbook.
			/// </summary>
			 virtual void SetCalcStackSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Specifies the strategy for processing precision of calcuation.
			/// </summary>
			 virtual Aspose::Cells::CalculationPrecisionStrategy GetPrecisionStrategy()=0;
			/// <summary>
			/// Specifies the strategy for processing precision of calcuation.
			/// </summary>
			 virtual void SetPrecisionStrategy(Aspose::Cells::CalculationPrecisionStrategy value)=0;
			/// <summary>
			/// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
			/// </summary>
			 virtual bool GetRecursive()=0;
			/// <summary>
			/// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
			/// </summary>
			 virtual void SetRecursive(bool value)=0;

	};
}
}
