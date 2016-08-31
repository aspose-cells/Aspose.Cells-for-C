#pragma once
#include "System/UInt16.h"
//#include "System/Boxing.h"
#include "BIFFRecord.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
//#include "System/Drawing/Color.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_XFRECORD() 

namespace Aspose {
namespace Cells {
class InternalColor;
class XFExternsionPropertyCollection;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class XFRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void SetBorderColor(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> properties);
			void SetBorderStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void SetHorizontalAlignment(intrusive_ptr<Aspose::Cells::Style> style);
			void SetVerticalAlignment(intrusive_ptr<Aspose::Cells::Style> style);
	public:

			 XFRecord();
			void Reset();
			void SetFontIndex(Aspose::Cells::System::UInt16 fontIndex);
			Aspose::Cells::System::Int32 GetForegroundColorIndex(intrusive_ptr<Aspose::Cells::Style> style , bool& found);
			Aspose::Cells::System::Int32 GetBackgroundColorIndex(intrusive_ptr<Aspose::Cells::Style> style , bool& found);
			Aspose::Cells::System::Int32 GetBorderColorIndex(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::InternalColor> color , bool& found);
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> SetStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 xfIndex);
			void SetXFData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
		public:
			virtual ~XFRecord();
	};

}

}

}
