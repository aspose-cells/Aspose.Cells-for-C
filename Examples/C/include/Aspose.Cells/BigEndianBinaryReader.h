#pragma once
#include "System/IO/BinaryReader.h"
#include "System/Int16.h"
#include "System/Char.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/IO/Stream.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_BIGENDIANBINARYREADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class BigEndianBinaryReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 BigEndianBinaryReader();
			intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> mReader;
	public:

			 BigEndianBinaryReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> GetBaseStream();
			Aspose::Cells::System::Int32 ReadInt32();
			Aspose::Cells::System::UInt32 ReadUInt32();
			Aspose::Cells::System::Int16 ReadInt16();
			Aspose::Cells::System::UInt16 ReadUInt16();
			Aspose::Cells::System::Byte ReadByte();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadBytes(Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> ReadByteChars(Aspose::Cells::System::Int32 count);
		public:
			virtual ~BigEndianBinaryReader();
	};

}

}

}

}
