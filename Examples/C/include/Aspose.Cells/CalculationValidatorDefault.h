#pragma once
//#include "System/Boxing.h"
//#include "System/String.h"
#include "System/Object.h"
#include "RawCellValueType.h"
//#include "System/Byte.h"
#include "ICalculationValidator.h"
#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_CALCULATIONVALIDATORDEFAULT() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
#ifdef WIN32

	class ASPOSE_CELLS_API CalculationValidatorDefault : public Aspose::Cells::FormulaModel::ICalculationValidator
#else	class CalculationValidatorDefault : public Aspose::Cells::FormulaModel::ICalculationValidator
#endif


	{
	protected:

			 virtual bool Fail(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			 virtual bool FailZero(Aspose::Cells::System::Double v);
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::CalculationValidatorDefault> Instance;
			bool Fail(Aspose::Cells::CellsSs::RawCellValueType tOrig , intrusive_ptr<Aspose::Cells::System::Object> vOrig , Aspose::Cells::CellsSs::RawCellValueType tNew , intrusive_ptr<Aspose::Cells::System::Object> vNew);
			static void BuildValueInfo(Aspose::Cells::CellsSs::RawCellValueType t , intrusive_ptr<Aspose::Cells::System::Object> v , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 CalculationValidatorDefault();
		public:
			virtual ~CalculationValidatorDefault();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
