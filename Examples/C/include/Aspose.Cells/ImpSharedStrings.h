#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
//#include "System/String.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_IMPSHAREDSTRINGS() 

namespace Aspose {
namespace Cells {
class PhoneticRun;
class RefString;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpSharedStrings : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::CellsSs::IStringPool* _sst;
			Aspose::Cells::System::Int32 _sstIdx;
			static intrusive_ptr<Aspose::Cells::PhoneticRun> ReadRPh(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 size);
			static void ReadR(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> text , Aspose::Cells::System::Int32 rCount , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int16>> idxArr , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpSharedStrings(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::RefString> ReadCellSi(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::RefString> ReadSi(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> fontMap);
			static bool IsPreserve(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpSharedStrings();
		public:
			virtual ~ImpSharedStrings();
	};

}

}

}
