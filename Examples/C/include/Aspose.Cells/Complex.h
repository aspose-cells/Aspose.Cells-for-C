#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Single.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
#include "System/String.h"
#define STATIC_COMPLEX() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Complex : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> GetDelim(intrusive_ptr<Aspose::Cells::System::String> str);
			intrusive_ptr<Aspose::Cells::System::String> GetSuffix(intrusive_ptr<Aspose::Cells::System::String> str);
			void GetComplex(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::System::String> delim , intrusive_ptr<Aspose::Cells::System::String> suffix);
	public:

			Aspose::Cells::System::Double real;
			Aspose::Cells::System::Double imaginary;
			intrusive_ptr<Aspose::Cells::System::String> suffix;
			Aspose::Cells::System::Double GetReal();
			void SetReal(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetImaginary();
			void SetImaginary(Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::System::String> GetSuffix();
			 Complex();
			 Complex(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			 Complex(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y , intrusive_ptr<Aspose::Cells::System::String> s);
			 Complex(intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> c);
			 Complex(intrusive_ptr<Aspose::Cells::System::String> str);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Add(intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> c);
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Subtract(intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> c);
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Multiply(intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> c);
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Div(intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> c);
			Aspose::Cells::System::Double Abs();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Ln();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Sqrt();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Sin();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Cos();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Pow(Aspose::Cells::System::Double n);
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Exp();
			Aspose::Cells::System::Double Argument();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Complex> Conjugate();
		public:
			virtual ~Complex();
	};

}

}

}
