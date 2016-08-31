#pragma once
#include "CalculationPrecisionStrategy.h"
#include "System/Object.h"
#include "FormulaDebugOptions.h"
#include "System/Text/Encoding.h"
//#include "System/String.h"
#include "MathCalculatorNone.h"
#include "System/Int32.h"
#define STATIC_CALCULATIONOPTIONS() 

namespace Aspose {
namespace Cells {
class AbstractCalculationEngine;
class ICustomFunction;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IMathCalculator;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CalculationOptions : public Aspose::Cells::System::Object
#else	class CalculationOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			static bool OLD_ENGINE;
			bool InnerIgnoreError;
			bool GetIgnoreError();
			void SetIgnoreError(bool value);
			intrusive_ptr<Aspose::Cells::ICustomFunction> InnerCustomFunction;
			intrusive_ptr<Aspose::Cells::ICustomFunction> GetCustomFunction();
			void SetCustomFunction(intrusive_ptr<Aspose::Cells::ICustomFunction> value);
			intrusive_ptr<Aspose::Cells::AbstractCalculationEngine> InnerCustomEngine;
			intrusive_ptr<Aspose::Cells::AbstractCalculationEngine> GetCustomEngine();
			void SetCustomEngine(intrusive_ptr<Aspose::Cells::AbstractCalculationEngine> value);
			Aspose::Cells::System::Int32 InnerCalcStackSize;
			Aspose::Cells::System::Int32 GetCalcStackSize();
			void SetCalcStackSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::CalculationPrecisionStrategy InnerPrecisionStrategy;
			intrusive_ptr<Aspose::Cells::FormulaModel::IMathCalculator> InnerMathCalculator;
			Aspose::Cells::CalculationPrecisionStrategy GetPrecisionStrategy();
			void SetPrecisionStrategy(Aspose::Cells::CalculationPrecisionStrategy value);
			bool InnerCalculateTableFormulaWithChain;
			bool GetCalculateTableFormulaWithChain();
			void SetCalculateTableFormulaWithChain(bool value);
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> InnerEncoding;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetCharEncoding();
			void SetCharEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value);
			Aspose::Cells::System::Int32 InnerAreaCacheSize;
			Aspose::Cells::System::Int32 GetAreaCacheSize();
			void SetAreaCacheSize(Aspose::Cells::System::Int32 value);
			bool InnerJIT;
			bool GetEnableJIT();
			void SetEnableJIT(bool value);
			bool InnerRecursive;
			bool GetRecursive();
			void SetRecursive(bool value);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaDebugOptions> DebugOptions;
			 CalculationOptions();
		public:
			virtual ~CalculationOptions();
	};

}

}
