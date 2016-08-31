#pragma once
//#include "System/CharHelper.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/Int32.h"
//#include "System/Guid.h"
#include "System/IDisposable.h"
#define STATIC_XLSEXPDATA() 

namespace Aspose {
namespace Cells {
class XlsSaveOptions;
class Workbook;
class SaveOptions;
class LightCellsExpData;
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
class XlsDataWorksheet;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPivotCache;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class XlsExpData : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void InitSheets();
			void InitPivotCaches();
	public:

			void Dispose();
			intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> _globalExpData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::OpenXML::DataPivotCache*>> _DataPivotCaches;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Converter::Xls::XlsDataWorksheet*>> _DataSheets;
			intrusive_ptr<Aspose::Cells::LightCellsExpData> _lightCellsExpData;
			intrusive_ptr<Aspose::Cells::System::String> _cachedFileHeader;
			intrusive_ptr<Aspose::Cells::XlsSaveOptions> _SaveOptions;
			Aspose::Cells::Workbook* Workbook;
			 XlsExpData(intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> globalExpData , intrusive_ptr<Aspose::Cells::Workbook> wb , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			 XlsExpData();
		public:
			virtual ~XlsExpData();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
