#pragma once
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/String.h"
#define STATIC_FIELDREPLACER() 

namespace Aspose {
namespace Cells {
class ReplaceOptions;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class FieldReplacer : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* excelSheets;
			intrusive_ptr<Aspose::Cells::ReplaceOptions> m_ReplaceOption;
	public:

			 FieldReplacer(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 FieldReplacer(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::ReplaceOptions> replaceOption);
			Aspose::Cells::System::Int32 Replace(bool boolValue , intrusive_ptr<Aspose::Cells::System::Object> newValue);
			Aspose::Cells::System::Int32 Replace(Aspose::Cells::System::Int32 intValue , intrusive_ptr<Aspose::Cells::System::Object> newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::String> newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Int32 newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Double newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> newValues , bool isVertical);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> newValues , bool isVertical);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> newValues , bool isVertical);
			 FieldReplacer();
		public:
			virtual ~FieldReplacer();
	};

}

}
