#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Single.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/String.h"
#define STATIC_CALCMATH() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcMath : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_PrecisionRanks();
	public:

			 static const Aspose::Cells::System::Int32 SignificantDigits;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> PrecisionRanks;
			static bool IsEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static bool IsEqualZero(Aspose::Cells::System::Double v);
			static Aspose::Cells::System::Double AddBySD(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double Add(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double a , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double RoundR15(Aspose::Cells::System::Double v);
			static Aspose::Cells::System::Double RoundNoneZeroR15(Aspose::Cells::System::Double v);
			 CalcMath();
		public:
			virtual ~CalcMath();
	};

}

}

}
