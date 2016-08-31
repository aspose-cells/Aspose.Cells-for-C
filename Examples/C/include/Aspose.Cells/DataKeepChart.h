#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#define STATIC_DATAKEEPCHART() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataFont;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepChart : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _ExtLst;
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ThemeOverride;
			intrusive_ptr<Aspose::Cells::System::String> UserShapesRid;
			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::System::String> OriginUserShapesDrawingEntryName;
			intrusive_ptr<Aspose::Cells::System::String> MC_AlternateContent;
			intrusive_ptr<Aspose::Cells::System::String> PivotFmts;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetInternalExtLst();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetExtLst();
			intrusive_ptr<Aspose::Cells::OpenXML::DataFont> ChartFontInfo;
			 DataKeepChart();
		public:
			virtual ~DataKeepChart();
	};

}

}

}
