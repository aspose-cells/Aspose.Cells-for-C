#pragma once
#include "System/Collections/ICollection.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/StringHelperPal.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
#include "System/Array1D.h"
#define STATIC_SMARTMARKERUTIL() 

namespace Aspose {
namespace Cells {
class ICellsDataTable;
}
}

namespace Aspose {
namespace Cells {
	class SmartMarkerUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsNull(intrusive_ptr<Aspose::Cells::System::Object> data);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitMarker(intrusive_ptr<Aspose::Cells::System::String> marker);
			static Aspose::Cells::System::Int32 HasField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> columns , intrusive_ptr<Aspose::Cells::System::String> filedName);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertName(intrusive_ptr<Aspose::Cells::System::String> tableName);
			static Aspose::Cells::System::Int32 ConvertPictureSmartUnit(intrusive_ptr<Aspose::Cells::System::String> width , Aspose::Cells::System::Int32 dpi);
			static intrusive_ptr<Aspose::Cells::ICellsDataTable> ConvertListToSmartSource(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> list);
			static intrusive_ptr<Aspose::Cells::System::String> ProcessDynamicFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			static intrusive_ptr<Aspose::Cells::System::String> ProcessSubtotalFormula(intrusive_ptr<Aspose::Cells::System::String> formula , bool isVertical , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			 SmartMarkerUtil();
		public:
			virtual ~SmartMarkerUtil();
	};

}

}
