#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
//#include "System/Guid.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/UInt16.h"
//#include "System/Math.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_EXPPIVOTTABLE() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class PivotFieldCollection;
class PivotField;
class SxRule;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpPivotTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> _pTable;
			intrusive_ptr<Aspose::Cells::System::String> _cacheId;
			void WritePivotRowHierarchiesUsage(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotColHierarchiesUsage(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotHierarchies(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDataFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePageFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteRowFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteColFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteRowItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item);
			void WriteColItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotFilters(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotArea(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			Aspose::Cells::System::Int32 GetCFPriorityCount();
			void WriteX14PivotConditionalFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotConditionalFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotTableStyleInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			Aspose::Cells::System::Int32 GetItemCounts(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void WritePivotFieldSubTotalTypeAttrs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			bool IsTableStyleHasBlankRow();
			void WritePivotFieldAttrs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , Aspose::Cells::System::Int32 idx);
			void WriteAutoSortScope(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void WritePivotFieldItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void WritePivotFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDataPivotFieldExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void WritePivotFieldExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void WriteSimpleItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> attrName , intrusive_ptr<Aspose::Cells::System::String> attrValue);
			void WriteLocation(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotTableDefinitionAttrDataOnRows(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotTableDefinitionAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			bool ContainsNotNormalDisplayFormat(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> dataFields);
			bool ContainsRepeatLabelOption(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
	public:

			 ExpPivotTable(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pTable , intrusive_ptr<Aspose::Cells::System::String> cacheId);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpPivotTable();
		public:
			virtual ~ExpPivotTable();
	};

}

}

}
