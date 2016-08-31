#pragma once
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Convert.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_ENGINEER() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Engineer : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> COMPLEX(Aspose::Cells::System::Double real , Aspose::Cells::System::Double i , intrusive_ptr<Aspose::Cells::System::String> suffix);
			static intrusive_ptr<Aspose::Cells::System::Object> COMPLEX(Aspose::Cells::System::Double real , Aspose::Cells::System::Double i);
			static Aspose::Cells::System::Double UnitToInch(intrusive_ptr<Aspose::Cells::System::String> unit);
			static intrusive_ptr<Aspose::Cells::System::Object> CONVERT(Aspose::Cells::System::Double number , intrusive_ptr<Aspose::Cells::System::String> from_unit , intrusive_ptr<Aspose::Cells::System::String> to_unit);
			static Aspose::Cells::System::Double UnitToMLiter(intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double UnitToHour(intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double ConvertTemperatureToC(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double ConvertTemperatureFromC(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> unit);
			static intrusive_ptr<Aspose::Cells::System::Object> IMSUM(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMSUB(intrusive_ptr<Aspose::Cells::System::String> inumber1 , intrusive_ptr<Aspose::Cells::System::String> inumber2);
			static intrusive_ptr<Aspose::Cells::System::Object> IMREAL(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMAGINARY(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMPRODUCT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMDIV(intrusive_ptr<Aspose::Cells::System::String> inumber1 , intrusive_ptr<Aspose::Cells::System::String> inumber2);
			static intrusive_ptr<Aspose::Cells::System::Object> IMABS(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMLN(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMLOG2(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMLOG10(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMSQRT(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMSIN(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMCOS(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMPOWER(intrusive_ptr<Aspose::Cells::System::String> inumber , Aspose::Cells::System::Double number);
			static intrusive_ptr<Aspose::Cells::System::Object> IMEXP(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMARGUMENT(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IMCONJUGATE(intrusive_ptr<Aspose::Cells::System::String> inumber);
			static intrusive_ptr<Aspose::Cells::System::Object> DELTA(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static intrusive_ptr<Aspose::Cells::System::Object> DELTA(Aspose::Cells::System::Double x);
			static intrusive_ptr<Aspose::Cells::System::Object> GESTEP(Aspose::Cells::System::Double number , Aspose::Cells::System::Double step);
			static intrusive_ptr<Aspose::Cells::System::Object> GESTEP(Aspose::Cells::System::Double number);
			static intrusive_ptr<Aspose::Cells::System::Object> BIN2DEC(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> BIN2OCT(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> BIN2OCT(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> BIN2HEX(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> BIN2HEX(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2BIN(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2BIN(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2OCT(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2OCT(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2HEX(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> DEC2HEX(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2BIN(intrusive_ptr<Aspose::Cells::System::String> number);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2BIN(intrusive_ptr<Aspose::Cells::System::String> number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2DEC(intrusive_ptr<Aspose::Cells::System::String> number);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2DEC(intrusive_ptr<Aspose::Cells::System::String> number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2OCT(intrusive_ptr<Aspose::Cells::System::String> number);
			static intrusive_ptr<Aspose::Cells::System::Object> HEX2OCT(intrusive_ptr<Aspose::Cells::System::String> number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> OCT2BIN(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> OCT2BIN(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> OCT2DEC(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> OCT2HEX(Aspose::Cells::System::Int64 number);
			static intrusive_ptr<Aspose::Cells::System::Object> OCT2HEX(Aspose::Cells::System::Int64 number , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::Object> ERF(Aspose::Cells::System::Double lower , Aspose::Cells::System::Double upper);
			static intrusive_ptr<Aspose::Cells::System::Object> ERF(Aspose::Cells::System::Double x);
			static intrusive_ptr<Aspose::Cells::System::Object> ERFC(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double CalERF(Aspose::Cells::System::Double x);
			static intrusive_ptr<Aspose::Cells::System::Object> BESSELJ(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Besselj(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::Object> BESSELY(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Bessely(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::Object> BESSELI(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Besseli(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::Object> BESSELK(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Besselk(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertString(intrusive_ptr<Aspose::Cells::System::String> s , Aspose::Cells::System::Int32 fromBase , Aspose::Cells::System::Int32 toBase , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertString(intrusive_ptr<Aspose::Cells::System::String> s , Aspose::Cells::System::Int32 fromBase , Aspose::Cells::System::Int32 toBase);
			 Engineer();
		public:
			virtual ~Engineer();
	};

}

}

}
