#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#define STATIC_CELLFORMATTEDINFO() 

namespace Aspose {
namespace Cells {
class FormattedInfo;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class CellDisplayStyleParams;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatOptions;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellFormattedInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Cells> mCells;
			Aspose::Cells::System::Int32 mRow;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mPlainData;
			intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> mStyleParams;
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> mFmtOpts;
			intrusive_ptr<Aspose::Cells::FormattedInfo> mResultInfo;
			intrusive_ptr<Aspose::Cells::System::String> mResultString;
	public:

			 CellFormattedInfo(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::CellsSs::CellData> plainData , intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> ps);
			intrusive_ptr<Aspose::Cells::FormattedInfo> GetResultInfo();
			intrusive_ptr<Aspose::Cells::System::String> GetResultString();
			 CellFormattedInfo();
		public:
			virtual ~CellFormattedInfo();
	};

}

}

}

}
