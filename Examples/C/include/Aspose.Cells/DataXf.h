#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_DATAXF() 

namespace Aspose {
namespace Cells {
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataAlignment;
class DataProtection;
class DataCellStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataXf : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Index;
			bool IsCellStyle;
			intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> Alignment;
			intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> Protection;
			Aspose::Cells::System::Int32 NumFmtId;
			Aspose::Cells::System::Int32 FontId;
			Aspose::Cells::System::Int32 FillId;
			Aspose::Cells::System::Int32 BorderId;
			Aspose::Cells::System::Int32 XfId;
			Aspose::Cells::System::Int32 OriginId;
			bool IsQuotePrefix;
			bool IsApplyNumberFormat;
			bool IsApplyFont;
			bool IsApplyFill;
			bool IsApplyBorder;
			bool IsApplyAlignment;
			bool IsApplyProtection;
			intrusive_ptr<Aspose::Cells::Style> StyleRef;
			intrusive_ptr<Aspose::Cells::OpenXML::DataCellStyle> cstyleInfo;
			bool IsRefered;
			 DataXf();
			bool IsEqual(intrusive_ptr<Aspose::Cells::OpenXML::DataXf> dataXf);
		public:
			virtual ~DataXf();
	};

}

}

}
