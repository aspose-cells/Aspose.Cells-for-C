#pragma once
//#include "System/Text/StringBuilder.h"
#include "System/UInt32.h"
//#include "System/StringHelperPal.h"
#include "TotalsCalculation.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_LISTCOLUMN() 

namespace Aspose {
namespace Cells {
class FilterColumn;
class XmlColumnProperty;
class XFExternsionPropertyCollection;
class CopyOptions;
class WorksheetCollection;
class Range;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListColumnCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API ListColumn : public Aspose::Cells::System::Object
#else	class ListColumn : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> m_listColumns;
			intrusive_ptr<Aspose::Cells::System::String> m_name;
			intrusive_ptr<Aspose::Cells::System::String> m_Caption;
			Aspose::Cells::Tables::TotalsCalculation m_AggregateType;
			intrusive_ptr<Aspose::Cells::System::String> GetInternalTotalFormula(Aspose::Cells::Tables::TotalsCalculation totalsCalculation);
			Aspose::Cells::System::Int32 FunctionNum(Aspose::Cells::Tables::TotalsCalculation totalsCalculation);
			intrusive_ptr<Aspose::Cells::System::String> m_uniqueName;
			intrusive_ptr<Aspose::Cells::System::String> m_totalsRowLabel;
			Aspose::Cells::System::Int32 m_queryTableFieldId;
	public:

			intrusive_ptr<Aspose::Cells::XmlColumnProperty> property;
			Aspose::Cells::System::Int32 repeatCount;
			intrusive_ptr<Aspose::Cells::FilterColumn> GetInnerFilter();
			bool HasFilter();
			 ListColumn(intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> listColumns , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 index);
			 ListColumn(intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> listColumns);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::ListColumn> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> name);
			void SetInternalCaption(intrusive_ptr<Aspose::Cells::System::String> caption);
			Aspose::Cells::System::Int32 GetIndex();
			Aspose::Cells::System::Int32 GetColumnIndex();
			Aspose::Cells::Tables::TotalsCalculation GetTotalsCalculation();
			void SetTotalsCalculation(Aspose::Cells::Tables::TotalsCalculation value);
			void SetInternalTotalsCalculation(Aspose::Cells::Tables::TotalsCalculation totalsCalculationType);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			intrusive_ptr<Aspose::Cells::Range> GetRange();
			intrusive_ptr<Aspose::Cells::System::String> m_TotalsRowFormula;
			bool m_IsArrayTotalsRowFormula;
			void SetInternalTotalsRowFormula(intrusive_ptr<Aspose::Cells::System::String> formula , bool isArray);
			bool IsArrayTotalsRowFormula();
			intrusive_ptr<Aspose::Cells::System::String> GetCustomTotalsRowFormula();
			intrusive_ptr<Aspose::Cells::System::String> m_CalculatedColumnFormula;
			bool m_IsArrayCaculatedColumnFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryCalculatedColumnFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryTotalFormula;
			void SetInernalCalculatedColumnFormula(intrusive_ptr<Aspose::Cells::System::String> formula , bool isArray);
			bool IsArrayCaculatedColumnFormula();
			intrusive_ptr<Aspose::Cells::System::String> GetCalcuatedColumnFormula2007();
			void ParseFormulas();
			Aspose::Cells::System::Int32 XMLDataType;
			intrusive_ptr<Aspose::Cells::System::String> KeepedXML;
			intrusive_ptr<Aspose::Cells::System::String> KeepedExternalList;
			intrusive_ptr<Aspose::Cells::System::String> GetUniqueName();
			void SetUniqueName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTotalsRowLabel();
			void SetTotalsRowLabel(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> DxfIds;
			intrusive_ptr<Aspose::Cells::Style> m_dataStyle;
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> GatherXFEx(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetDataStyle();
			intrusive_ptr<Aspose::Cells::Style> m_totalRowStyle;
			intrusive_ptr<Aspose::Cells::Style> GetTotalRowStyle();
			Aspose::Cells::System::Int32 DataType;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::UInt32 ColFlags;
			Aspose::Cells::System::Int32 GetQueryTableFieldId();
			void SetQueryTableFieldId(Aspose::Cells::System::Int32 value);
			 ListColumn();
		public:
			virtual ~ListColumn();
	};

}

}

}
