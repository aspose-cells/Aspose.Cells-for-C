#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Char.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_MATHFUNCTIONS() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class MathFunctions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double SERIESSUM(Aspose::Cells::System::Double x , Aspose::Cells::System::Double n , Aspose::Cells::System::Double m , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> coefficients);
			static Aspose::Cells::System::Double SUMX2MY2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double SUMX2PY2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double SUMXMY2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double SUMSQ(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> a);
			static intrusive_ptr<Aspose::Cells::System::Object> ToRoman(Aspose::Cells::System::Int32 n , Aspose::Cells::System::Int32 form);
			static Aspose::Cells::System::Double MULTINOMIAL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> a);
			static Aspose::Cells::System::Double EVEN(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double ODD(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double LCM(Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double LCM(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values);
			static Aspose::Cells::System::Double GCD(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values);
			static Aspose::Cells::System::Double GCD(Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double FactDouble(Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double FACT(Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::Object> COMBIN(Aspose::Cells::System::Double number , Aspose::Cells::System::Double number_chosen);
			 MathFunctions();
		public:
			virtual ~MathFunctions();
	};

}

}

}
