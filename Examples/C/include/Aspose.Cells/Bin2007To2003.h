#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_BIN2007TO2003() 

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
	class Bin2007To2003 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool IsValidArea(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 endRowIndex , Aspose::Cells::System::Int32 endColumnIndex);
			static void CheckSkips(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 reduceSize , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> formula);
			Aspose::Cells::System::Int32 Parse(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> formula , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> skipList);
			void Check07Fun(Aspose::Cells::System::Int32 funcIndex);
			static void ParseArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 arrayPos0 , Aspose::Cells::System::Int32 arrayLength , intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> array);
	public:

			 Bin2007To2003();
			bool Unsupported07Fun;
			void Convert(intrusive_ptr<Aspose::Cells::ExternName> nameX);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Convert(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0);
		public:
			virtual ~Bin2007To2003();
	};

}

}

}
