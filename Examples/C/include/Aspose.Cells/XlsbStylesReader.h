#pragma once
//#include "System/Exception.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/Drawing/Color.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
//#include "System/Collections/Hashtable.h"
//#include "System/UInt16.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/Double.h"
//#include "System/String.h"
#define STATIC_XLSBSTYLESREADER() 

namespace Aspose {
namespace Cells {
class Border;
class InternalColor;
class Workbook;
class WorksheetCollection;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
class XlsbBtrBorder;
class XlsbBrtXF;
class XlsbBrtDXF;
}
}
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
namespace OpenXLSB {
class XlsbReader;
class XlsbBinaryReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataCellStyle;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbStylesReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fontList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fillList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> bordsList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cellStyleXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cellXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> namedStyles;
			Aspose::Cells::System::Int32 id;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> globalData;
			void SetDefaultWidth();
			void SetBoderLine(intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> btrBorder);
			void ReadTableStyles();
			void ReadTableStyle();
			void ReadTableStyleElement(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle);
	public:

			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			 XlsbStylesReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			void CollectionStyles();
			void SetStyle(intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBrtXF> xf , intrusive_ptr<Aspose::Cells::Style> style , bool isCellStyle);
			static intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBrtDXF> ReadDXF(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void ReadXF(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> xfList , bool isCellStyle);
			intrusive_ptr<Aspose::Cells::OpenXML::DataCellStyle> GetNamedStyle(Aspose::Cells::System::Int32 xfIdx);
			void ReadNamedStyle();
			void ReadBorders();
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> ReadBorderLine(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			void ReadFill();
			void ReadFont();
			void ReadFormat();
			void ReadPallete();
			static intrusive_ptr<Aspose::Cells::InternalColor> ReadBtrColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , bool& isNotSet);
			static void ReadPropBorder(intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::InternalColor> ReadPropColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , bool& isNotSet);
			 XlsbStylesReader();
		public:
			virtual ~XlsbStylesReader();
	};

}

}

}
