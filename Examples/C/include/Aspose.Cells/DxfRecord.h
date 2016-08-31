#pragma once
#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "ColorType.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "BorderType.h"
#define STATIC_DXFRECORD() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Border;
class Workbook;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DxfRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropBool(Aspose::Cells::System::Int32 type , bool boolValue);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropByte(Aspose::Cells::System::Int32 type , Aspose::Cells::System::Byte byteValue);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropWord(Aspose::Cells::System::Int32 type , Aspose::Cells::System::UInt16 shortValue);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropDWord(Aspose::Cells::System::Int32 type , Aspose::Cells::System::Int32 intValue);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropColor(Aspose::Cells::System::Int32 type , intrusive_ptr<Aspose::Cells::InternalColor> color , Aspose::Cells::System::Int32 colorIndex , bool isSet , intrusive_ptr<Aspose::Cells::Workbook> wb);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WritePropString(Aspose::Cells::System::Int32 type , intrusive_ptr<Aspose::Cells::System::String> stringValue);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> WriteBorder(Aspose::Cells::System::Int32 type , Aspose::Cells::BorderType borderType , intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::Style> style , bool isSet , intrusive_ptr<Aspose::Cells::Workbook> wb);
	public:

			 DxfRecord();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , bool isOutRange , intrusive_ptr<Aspose::Cells::Workbook> wb);
			void WriteColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::InternalColor> internalColor , Aspose::Cells::System::Int32 defaultIndex , intrusive_ptr<Aspose::Cells::Workbook> wb);
			Aspose::Cells::System::Byte SetColorType(Aspose::Cells::ColorType type);
		public:
			virtual ~DxfRecord();
	};

}

}

}
