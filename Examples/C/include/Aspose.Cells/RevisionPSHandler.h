#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_REVISIONPSHANDLER() 

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FormulaParse;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellData;
class RevisionDefinedName;
}
}
}
namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxRevisionBinToString;
class XlsxRevisionTree2Bin;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionPSHandler : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxRevisionBinToString> BinToString;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxRevisionTree2Bin> TreeToBin;
			intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaParse> formulaParse;
			bool ToBinary;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> TabIdMaps;
	public:

			 RevisionPSHandler(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , bool ToBinary);
			void Process(intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> data);
			void Process(Aspose::Cells::System::Int32 tabId , intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> data);
			 RevisionPSHandler();
		public:
			virtual ~RevisionPSHandler();
	};

}

}

}
