#pragma once
#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BIN2003TO2007() 

namespace Aspose {
namespace Cells {
class ExternName;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class BinaryArray;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Bin2003To2007 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void ModifyTAttr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Parse(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 arrayPos0 , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> formula , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> array , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool methodB);
			static void ParseRefCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static void ParseRefCellArea(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static Aspose::Cells::System::Int32 ParseArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 arrayPos0 , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> array);
	public:

			static void Convert(intrusive_ptr<Aspose::Cells::ExternName> nameX);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Convert(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool methodB);
			 Bin2003To2007();
		public:
			virtual ~Bin2003To2007();
	};

}

}

}
