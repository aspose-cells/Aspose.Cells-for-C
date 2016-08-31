#pragma once
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_BINCONVERT() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class BinConvert : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Convert(bool up , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool methodB);
			 BinConvert();
		public:
			virtual ~BinConvert();
	};

}

}

}
