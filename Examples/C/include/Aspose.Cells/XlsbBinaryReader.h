#pragma once
#include "System/Int64.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_XLSBBINARYREADER() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbBinaryReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 position;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
	public:

			 XlsbBinaryReader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			Aspose::Cells::System::Int32 ReadRecordId();
			Aspose::Cells::System::Int32 ReadRecordSize();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadBytes(Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Byte ReadByte();
			Aspose::Cells::System::Int32 GetPosition();
			void SetPosition(Aspose::Cells::System::Int32 value);
			void Seek(Aspose::Cells::System::Int64 offset);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadRecordData();
			 XlsbBinaryReader();
		public:
			virtual ~XlsbBinaryReader();
	};

}

}

}
