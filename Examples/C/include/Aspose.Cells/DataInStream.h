#pragma once
#include "System/Object.h"
//#include "System/IO/Stream.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/IO/SeekOrigin.h"
#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Exception.h"
#include "System/Array1D.h"
#define STATIC_DATAINSTREAM() 


namespace Aspose {
namespace Cells {
namespace RW {
	class DataInStream : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool isEnd;
	public:

			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> dataStream;
			bool IsEnd();
			 DataInStream(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> dataStream);
			Aspose::Cells::System::Int32 ReadData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
			Aspose::Cells::System::Int32 ReadInt();
			Aspose::Cells::System::UInt32 ReadUInt();
			Aspose::Cells::System::Double ReadDouble();
			Aspose::Cells::System::Byte ReadByte();
			Aspose::Cells::System::UInt16 ReadUShort(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
			void Seek(Aspose::Cells::System::Int32 position);
			void SeekFromCurrent(Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int64 GetPosition();
			 DataInStream();
		public:
			virtual ~DataInStream();
	};

}

}

}
