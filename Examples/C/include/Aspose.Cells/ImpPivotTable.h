#pragma once
//#include "System/Exception.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/ApplicationException.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_IMPPIVOTTABLE() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class SxRule;
class PivotFormatConditionCollection;
class SxFormat;
class PivotFormatCondition;
class PivotField;
}
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
namespace OpenXML {
class DataImpWorksheet;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpPivotTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impWorksheetData;
			intrusive_ptr<Aspose::Cells::System::String> _target;
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable;
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> _field;
			void ReadRowHierarchiesUsage(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadColHierarchiesUsage(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotHierarchies(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotTableDefinition(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotTableLocation(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadRowFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadRowItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item , Aspose::Cells::System::Int32 repeat);
			void ReadColItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadColItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item);
			void ReadColFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPageFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPageField(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadDataFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadDataField(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotTableStyleInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotField(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadExt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadAutoSortScope(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadPivotArea(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadReferences(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadReference(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadPivotArea(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> pfc);
			void ReadReferences(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			void ReadPivotArea(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxFormat> sxFormat);
			void ReadReference(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			void ReadPivotItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadPivotItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadPivotFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotFormat(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotFilters(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotFilter(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotConditionalFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotConditionalFormat(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pfcs);
			void ReadPivotAreas(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> pivotFormatCondition);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpPivotTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> impWorksheetData , intrusive_ptr<Aspose::Cells::System::String> target);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpPivotTable();
		public:
			virtual ~ImpPivotTable();
	};

}

}

}
