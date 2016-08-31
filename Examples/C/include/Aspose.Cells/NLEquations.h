#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_NLEQUATIONS() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class NLEquations : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double Func(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			 virtual void Func(Aspose::Cells::System::Double x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			 virtual Aspose::Cells::System::Double Func(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			 virtual void FuncMJ(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> p);
	public:

			 NLEquations();
			Aspose::Cells::System::Int32 GetRootBisect(Aspose::Cells::System::Int32 nNumRoots , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double xStart , Aspose::Cells::System::Double xEnd , Aspose::Cells::System::Double dblStep , Aspose::Cells::System::Double eps);
			bool GetRootNewton(Aspose::Cells::System::Double& x , Aspose::Cells::System::Int32 nMaxIt , Aspose::Cells::System::Double eps);
			bool GetRootFisherWang(Aspose::Cells::System::Double& x , Aspose::Cells::System::Double y , Aspose::Cells::System::Double start , Aspose::Cells::System::Double end);
			bool GetRootAitken(Aspose::Cells::System::Double& x , Aspose::Cells::System::Int32 nMaxIt , Aspose::Cells::System::Double eps);
			bool GetRootPq(Aspose::Cells::System::Double& x , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double RootChord(Aspose::Cells::System::Double x , Aspose::Cells::System::Double x0 , Aspose::Cells::System::Double x1 , Aspose::Cells::System::Int32 nMaxIt , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Int32 GetRootBisect_wq(Aspose::Cells::System::Int32 nNumRoots , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double xStart , Aspose::Cells::System::Double xEnd , Aspose::Cells::System::Double dblStep , Aspose::Cells::System::Double eps);
			bool GetRoot_WangQI(Aspose::Cells::System::Int32 nNumRoots , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double xStart , Aspose::Cells::System::Double xEnd , Aspose::Cells::System::Double dblStep , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double result;
		public:
			virtual ~NLEquations();
	};

}

}

}
