#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
//#include "System/Math.h"
#define STATIC_MATHMATRIX() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class MathMatrix : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Gauss(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
	public:

			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> Linest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> Linest_false(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Trend(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , bool consts);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> MInverse(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> data);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> Transpose(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> Transpose(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> a);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> MMult(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> b);
			static Aspose::Cells::System::Double SumProduct(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> MCorrels(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> data);
			static intrusive_ptr<Aspose::Cells::System::Object> Correl(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> x , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> y);
			static Aspose::Cells::System::Double Correl(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static intrusive_ptr<Aspose::Cells::System::Object> Pearson(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double MDETERM(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
			 MathMatrix();
		public:
			virtual ~MathMatrix();
	};

}

}

}
