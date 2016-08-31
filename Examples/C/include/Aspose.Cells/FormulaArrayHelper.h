#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#include "System/Array.h"
#define STATIC_FORMULAARRAYHELPER() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaArrayHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void AdjustArray(intrusive_ptr<Aspose::Cells::System::Array>& array1 , intrusive_ptr<Aspose::Cells::System::Array>& array2);
			static intrusive_ptr<Aspose::Cells::System::Array> FillArray(intrusive_ptr<Aspose::Cells::System::Array> array , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
	public:

			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> CloneArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array1);
			static void SetArray(intrusive_ptr<Aspose::Cells::System::Object>& object1 , intrusive_ptr<Aspose::Cells::System::Object>& object2);
			 FormulaArrayHelper();
		public:
			virtual ~FormulaArrayHelper();
	};

}

}

}
