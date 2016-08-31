#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/IO/BinaryWriter.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/IO/Stream.h"
#define STATIC_BIGENDIANBINARYWRITER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class BigEndianBinaryWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 BigEndianBinaryWriter();
			intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> mWriter;
	public:

			 BigEndianBinaryWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> GetBaseStream();
			void WriteInt32(Aspose::Cells::System::Int32 value);
			void WriteUInt32(Aspose::Cells::System::UInt32 value);
			void WriteInt16(Aspose::Cells::System::Int32 value);
			void WriteUInt16(Aspose::Cells::System::UInt16 value);
			void WriteByte(Aspose::Cells::System::Byte value);
			void WriteBytes(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			void Flush();
		public:
			virtual ~BigEndianBinaryWriter();
	};

}

}

}

}
