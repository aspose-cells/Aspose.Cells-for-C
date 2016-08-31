#pragma once
#include "System/Array2D.h"
//#include "System/Int32Helper.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_EXTERNALFORMULAHELPER() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
class ExternalSheetDataSet;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class ExternalFormulaHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> CalculateExternalName(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 nameIndex , bool is2007 , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> caches);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateExternalRange(intrusive_ptr<Aspose::Cells::FormulaTree> notation , Aspose::Cells::System::Int32 supbookIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> caches , intrusive_ptr<Aspose::Cells::System::String> nameX);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateExternalSingleCell(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateExternalNumbericArrayRange(intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> dataSet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> CalculateExternalArrayRange(intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> dataSet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			 ExternalFormulaHelper();
		public:
			virtual ~ExternalFormulaHelper();
	};

}

}

}
