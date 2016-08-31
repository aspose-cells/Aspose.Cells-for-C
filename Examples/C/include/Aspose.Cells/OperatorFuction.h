#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#include "System/Array2D.h"
#define STATIC_OPERATORFUCTION() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class OperatorFuction : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Object> CalcuateLeftArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
			intrusive_ptr<Aspose::Cells::System::Object> CalcuateRightArray(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array2 , Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
			intrusive_ptr<Aspose::Cells::System::Object> CalcuateArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array2 , bool isSame , Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
	protected:

			intrusive_ptr<Aspose::Cells::WorkbookSettings> settings;
			intrusive_ptr<Aspose::Cells::Cell> cell;
			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	public:

			 OperatorFuction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 virtual bool IsBinaryOperator();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> Cal(intrusive_ptr<Aspose::Cells::System::Object> childResult1 , intrusive_ptr<Aspose::Cells::System::Object> childResult2);
			 OperatorFuction();
		public:
			virtual ~OperatorFuction();
	};

}

}

}
