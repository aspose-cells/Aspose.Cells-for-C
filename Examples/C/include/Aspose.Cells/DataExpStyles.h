#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_DATAEXPSTYLES() 

namespace Aspose {
namespace Cells {
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpStyles : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::OpenXML::DataExpWhole* expWhole;
			Aspose::Cells::System::Int16 GetFillId(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int16 GetBorderId(intrusive_ptr<Aspose::Cells::Style> style);
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FillList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> BorderList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CellStyleXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CellXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CellStyleList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CellXfsIdxMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CellStyleXfsIdxMap;
			static intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> GetDataExpStyles(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> dataExpWhole);
			void AddBuiltinFills();
			void AddBuiltinBorders();
			void AddXFStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 index);
			void AddNamedStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 xfIdx);
			 DataExpStyles();
		public:
			virtual ~DataExpStyles();
	};

}

}

}
