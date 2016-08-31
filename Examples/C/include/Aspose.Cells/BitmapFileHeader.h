#pragma once
#include "System/IO/BinaryReader.h"
#include "System/IO/BinaryWriter.h"
#include "System/UInt32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_BITMAPFILEHEADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class BitmapFileHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 BitmapFileHeader();
			void Read(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			Aspose::Cells::System::UInt16 Type;
			Aspose::Cells::System::UInt32 Size;
			Aspose::Cells::System::UInt16 Reserved1;
			Aspose::Cells::System::UInt16 Reserved2;
			Aspose::Cells::System::UInt32 OffBits;
			 static const Aspose::Cells::System::Int32 StructureSize;
		public:
			virtual ~BitmapFileHeader();
	};

}

}

}

}
