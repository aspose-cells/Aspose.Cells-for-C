#pragma once
#include "System/Int64.h"
#include "System/IO/BinaryWriter.h"
#include "System/UInt32.h"
#include "System/Int32.h"
//#include "System/IO/Stream.h"
#include "System/Object.h"
#define STATIC_SECTOR() 


namespace Aspose {
namespace Ss {
	class Sector : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int64 SectorToOffset(Aspose::Cells::System::UInt32 sect , bool isNormalSector);
			static Aspose::Cells::System::UInt32 OffsetToSector(Aspose::Cells::System::Int64 offset , bool isNormalSector);
			static void PadFreeSect(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			 static const Aspose::Cells::System::Int32 SectorSize;
			 static const Aspose::Cells::System::Int32 MiniSectorSize;
			 static const Aspose::Cells::System::Int32 EntrySize;
			 static const Aspose::Cells::System::Int32 FatEntriesInSector;
			 static const Aspose::Cells::System::Int32 DifatEntriesInSector;
			 Sector();
		public:
			virtual ~Sector();
	};

}

}
