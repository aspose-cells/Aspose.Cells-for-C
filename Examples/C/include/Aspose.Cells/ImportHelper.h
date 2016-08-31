#pragma once
//#include "System/TypeCode.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Type.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Array2D.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_IMPORTHELPER() 

namespace Aspose {
namespace Cells {
class ImportTableOptions;
class ICellsDataTable;
class Cells;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace Helper {
	class ImportHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool InitColumns(intrusive_ptr<Aspose::Cells::ICellsDataTable> table , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::ImportTableOptions> options);
			static Aspose::Cells::System::Int32 ImportData(intrusive_ptr<Aspose::Cells::ICellsDataTable> table , intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::ImportTableOptions> options);
			static bool IsNull(intrusive_ptr<Aspose::Cells::System::Object> v);
			static void SetCellValue(intrusive_ptr<Aspose::Cells::Cell> cellTemp , intrusive_ptr<Aspose::Cells::System::Object> value , bool isNullValue , intrusive_ptr<Aspose::Cells::System::Object> defaultValue , intrusive_ptr<Aspose::Cells::ImportTableOptions> options , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> numberXfs);
			 ImportHelper();
		public:
			virtual ~ImportHelper();
	};

}

}

}
