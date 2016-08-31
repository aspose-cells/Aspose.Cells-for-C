#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
//#include "System/Drawing/Color.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Globalization/NumberStyles.h"
//#include "System/Boolean.h"
//#include "System/Exception.h"
//#include "System/Convert.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#define STATIC_IMPSTYLES() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class InternalColor;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
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
class DataCellGradientFill;
class DataFont;
class DataProtection;
class DataImpWhole;
class DataXf;
class DataPatternFill;
class DataBorder;
class DataAlignment;
class DataCellStyle;
class DataDxf;
class DataFill;
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class FormatRecord;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpStyles : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* _worksheets;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _fontList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _fillList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _borderList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _cellStyleXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _cellXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _cellStyleList;
			void ReadExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadTableStyles(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneTableStyle(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadTableStyleElement(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle);
			intrusive_ptr<Aspose::Cells::Style> GetDxfStyle(intrusive_ptr<Aspose::Cells::System::String> dataDxfIdStr);
			void SetDefaultWidth();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetExistedNamedStyle();
			void Collect();
			intrusive_ptr<Aspose::Cells::Style> SetStyleData(intrusive_ptr<Aspose::Cells::OpenXML::DataXf> xf , intrusive_ptr<Aspose::Cells::Style> style , bool isCellXf);
			void SetFill(intrusive_ptr<Aspose::Cells::OpenXML::DataXf> xf , intrusive_ptr<Aspose::Cells::Style> style);
			void SetBorders(intrusive_ptr<Aspose::Cells::OpenXML::DataXf> xf , intrusive_ptr<Aspose::Cells::Style> style);
			void CollectFonts();
			static void AddFont(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::OpenXML::DataFont> fi , bool defaultFlag);
			void ReadIndexedColors(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadColors(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadNumFmts(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCellStyles(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::OpenXML::DataCellStyle> ReadOneCellStyle(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCellXfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCellStyleXfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::OpenXML::DataXf> ReadXf(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool cellStyleXf);
			void ReadBorders(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static void ReadOneBorderLine(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> bi , bool isDxf);
			void ReadFills(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> ReadGradientFill(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataPatternFill> ReadPatternFill(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadFonts(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
			void ReadDxfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpStyles(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void ReadColorPalette(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::Record::FormatRecord> ReadOneNumFmt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> ReadAlignment(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> ReadProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> ReadOneBorder(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool isDxf);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataFill> ReadOneFill(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataFont> ReadFontInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> fontNameElmName);
			static intrusive_ptr<Aspose::Cells::InternalColor> ReadColorInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataDxf> ReadOneDxf(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpStyles();
		public:
			virtual ~ImpStyles();
	};

}

}

}
