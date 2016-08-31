#pragma once
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FORMULACOPY() 

namespace Aspose {
namespace Cells {
class CopyOptions;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaTokenVisitor;
}
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
	class FormulaCopy : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
			Aspose::Cells::System::Int32 pos;
			intrusive_ptr<Aspose::Cells::CopyOptions> options;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> visitor;
			Aspose::Cells::System::Int32 added;
			intrusive_ptr<Aspose::Cells::FormulaUtility::BinaryArray> _addedArray;
			void UpdateTable(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			static Aspose::Cells::System::Int32 UpdateExtsheet(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			static void CheckSkips(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 reduceSize , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void UpdateExtName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CheckName(Aspose::Cells::System::Int32 _startPos);
			void UpdateName(Aspose::Cells::System::Int32 _startPos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> skipList);
			bool hasTable;
			Aspose::Cells::System::Int32 Check();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Update();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Copy(intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> destWorksheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
	public:

			 FormulaCopy(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Copy(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 FormulaCopy();
		public:
			virtual ~FormulaCopy();
	};

}

}

}
