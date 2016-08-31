#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_XLSBFRTHEADER() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingValue;
class FormatConditionCollection;
class FormatCondition;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
class XlsbFRTRef;
class XlsbFRTSqref;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbFRTHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::OpenXLSB::DataInfo::XlsbFRTRef*>> rgRefs;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::OpenXLSB::DataInfo::XlsbFRTSqref*>> rgSqrefs;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Byte>> Formulas;
			intrusive_ptr<Aspose::Cells::System::String> RId;
			 XlsbFRTHeader();
			 XlsbFRTHeader(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs);
			 XlsbFRTHeader(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			 XlsbFRTHeader(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> fc);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSqrefAreas();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRgRefAreas();
			Aspose::Cells::System::Byte GetOptions();
			Aspose::Cells::System::Int32 Read(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			Aspose::Cells::System::Int32 GetRecordSize();
			Aspose::Cells::System::Int32 Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
		public:
			virtual ~XlsbFRTHeader();
	};

}

}

}

}
