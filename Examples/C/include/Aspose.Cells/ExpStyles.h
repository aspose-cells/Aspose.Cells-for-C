#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Drawing/Color.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_EXPSTYLES() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Font;
class Style;
class Workbook;
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
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataAlignment;
class DataXf;
class DataExpStyles;
class DataFill;
class DataProtection;
class DataBorderLine;
class DataExpFonts;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpStyles : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			Aspose::Cells::OpenXML::DataExpStyles* _sStrct;
			void WriteRootAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteTableStyles(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOneTableStyle(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteIndexedColors(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteColors(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx);
			void WriteNumberFormats(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteFonts(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteFills(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteOneFill(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataFill> fill);
			void WriteGradientFill(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataFill> fill);
			void WriteBorders(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteCellStyles(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteCellStyleXfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteXfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			static void WriteColor(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::System::String> elmName , bool isInDxf);
			void WriteBorderLine(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> borderLine , intrusive_ptr<Aspose::Cells::System::String> elmName);
			void WriteXf(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataXf> xf);
			void WriteDxfAlignment(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> align , intrusive_ptr<Aspose::Cells::Style> style);
			void WriteAlignment(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> align , bool isDxf);
			void WriteProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> protect , bool isDxf);
			void WriteDxfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteElmWithAttrVal(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> elmName , intrusive_ptr<Aspose::Cells::System::String> val);
			void WriteOneFillForCndFmt(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataFill> fill);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataExpFonts> _fontsInfo;
			 ExpStyles(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> expStylesData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteFontSubElms(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> fontNameElmName);
			static void WriteColor(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::System::String> elmName);
			static void WriteFontSubElmsForCndFmt(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> fontNameElmName);
			void WriteOneDxfs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::String> prefix);
			void WriteOneDxfChildren(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Style> style);
			 ExpStyles();
		public:
			virtual ~ExpStyles();
	};

}

}

}
