#pragma once
#include "System/IO/BinaryReader.h"
#include "System/IO/BinaryWriter.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_BITMAPINFOHEADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class BitmapInfoHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 BitmapInfoHeader();
			void Read(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			Aspose::Cells::System::Int32 GetColorTableSize();
			Aspose::Cells::System::UInt32 Size;
			Aspose::Cells::System::Int32 Width;
			Aspose::Cells::System::Int32 Height;
			Aspose::Cells::System::UInt16 Planes;
			Aspose::Cells::System::UInt16 BitCount;
			Aspose::Cells::System::UInt32 Compression;
			Aspose::Cells::System::UInt32 SizeImage;
			Aspose::Cells::System::Int32 XPelsPerMeter;
			Aspose::Cells::System::Int32 YPelsPerMeter;
			Aspose::Cells::System::UInt32 ClrUsed;
			Aspose::Cells::System::UInt32 ClrImportant;
			 static const Aspose::Cells::System::Int32 StructureSize;
		public:
			virtual ~BitmapInfoHeader();
	};

}

}

}

}
