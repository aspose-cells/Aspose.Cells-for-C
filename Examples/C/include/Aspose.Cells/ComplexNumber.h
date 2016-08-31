#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Single.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
#include "System/String.h"
#define STATIC_COMPLEXNUMBER() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class ComplexNumber : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> GetDelim(intrusive_ptr<Aspose::Cells::System::String> str);
			intrusive_ptr<Aspose::Cells::System::String> GetSuffix(intrusive_ptr<Aspose::Cells::System::String> str);
			void GetComplexNumber(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::System::String> delim , intrusive_ptr<Aspose::Cells::System::String> suffix);
	public:

			Aspose::Cells::System::Double real;
			Aspose::Cells::System::Double imaginary;
			intrusive_ptr<Aspose::Cells::System::String> suffix;
			Aspose::Cells::System::Double GetReal();
			void SetReal(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetImaginary();
			void SetImaginary(Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::System::String> GetSuffix();
			 ComplexNumber();
			 ComplexNumber(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			 ComplexNumber(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y , intrusive_ptr<Aspose::Cells::System::String> s);
			 ComplexNumber(intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> c);
			 ComplexNumber(intrusive_ptr<Aspose::Cells::System::String> str);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Add(intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> c);
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Subtract(intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> c);
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Multiply(intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> c);
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Div(intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> c);
			Aspose::Cells::System::Double Abs();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Ln();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Sqrt();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Sin();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Cos();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Pow(Aspose::Cells::System::Double n);
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Exp();
			Aspose::Cells::System::Double Argument();
			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> Conjugate();
		public:
			virtual ~ComplexNumber();
	};

}

}

}
