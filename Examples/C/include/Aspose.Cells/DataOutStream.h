#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
//#include "System/BitConverter.h"
#include "System/Char.h"
//#include "System/IO/SeekOrigin.h"
#include "System/Int16.h"
#include "System/UInt32.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_DATAOUTSTREAM() 


namespace Aspose {
namespace Cells {
namespace RW {
	class DataOutStream : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::System::IO::Stream> dataStream;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
	public:

			 DataOutStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> dataStream);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> GetBaseStream();
			void WriteData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 length);
			void WriteData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length);
			void WriteData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
			void WriteByte(Aspose::Cells::System::Byte byteData);
			void WriteChar(Aspose::Cells::System::Char charData);
			void WriteUInt(Aspose::Cells::System::UInt32 intData);
			void WriteInt(Aspose::Cells::System::Int32 intData);
			void WriteUShort(Aspose::Cells::System::UInt16 shortData);
			void WriteShort(Aspose::Cells::System::Int16 shortData);
			void WriteShort(Aspose::Cells::System::Int32 shortData);
			void WriteDouble(Aspose::Cells::System::Double doubleData);
			Aspose::Cells::System::Int64 GetCurStreamPos();
			void Seek(Aspose::Cells::System::Int64 position);
			void Flush();
			 DataOutStream();
		public:
			virtual ~DataOutStream();
	};

}

}

}
