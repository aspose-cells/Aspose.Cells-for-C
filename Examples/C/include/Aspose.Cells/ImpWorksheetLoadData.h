#pragma once
//#include "System/Int32Helper.h"
//#include "System/UInt16.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_IMPWORKSHEETLOADDATA() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Row;
class Cell;
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
class ImpSharedStrings;
class DataImpWorksheet;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWorksheetLoadData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			Aspose::Cells::Worksheet* _worksheet;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impWorksheetData;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _sharedFormulaMap;
			bool _loadFormula;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> _stringPool;
			void ReadSheetData(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			Aspose::Cells::System::Int32 ReadRow(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 prvRowIdx);
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> _impsst;
			Aspose::Cells::System::Int32 ReadCell(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Row> rowInfo , Aspose::Cells::System::Int32 rowIdx , Aspose::Cells::System::Int32 lastColIdx);
			void SetCellValue(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::String> valRead , intrusive_ptr<Aspose::Cells::System::String> dataType);
			void ReadCols(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneCol(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
			static void GetShareFormulaRange(intrusive_ptr<Aspose::Cells::System::String> szFormulaRange , Aspose::Cells::System::Int32& rownum , Aspose::Cells::System::Int32& colnum);
	public:

			 ImpWorksheetLoadData(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> impWorksheetData , bool loadFormula);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> GetImpSSTRef();
			void SetImpSSTRef(intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> value);
			 ImpWorksheetLoadData();
		public:
			virtual ~ImpWorksheetLoadData();
	};

}

}

}
