#pragma once
//#include "System/Byte.h"
//#include "System/UInt64.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/UInt32.h"
//#include "System/Int16.h"
//#include "System/InvalidOperationException.h"
#include "System/IO/BinaryReader.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/NotSupportedException.h"
#include "System/IO/BinaryWriter.h"
#include "System/Array1D.h"
#define STATIC_HEADER() 


namespace Aspose {
namespace Ss {
	class Header : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 SupportedMajorVersion;
			 static const Aspose::Cells::System::Int32 ClsidLength;
	public:

			 Header();
			 Header(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			bool IsBigEnoughForFat(Aspose::Cells::System::Int64 streamLength);
			Aspose::Cells::System::Int32 GetMiniFatLength();
			Aspose::Cells::System::UInt16 MinorVersion;
			Aspose::Cells::System::UInt16 MajorVersion;
			Aspose::Cells::System::UInt16 SectorShift;
			Aspose::Cells::System::UInt16 MiniSectorShift;
			Aspose::Cells::System::Int32 CsectDir;
			Aspose::Cells::System::Int32 CsectFat;
			Aspose::Cells::System::UInt32 SectDirStart;
			Aspose::Cells::System::UInt32 MiniSectorCutoff;
			Aspose::Cells::System::UInt32 SectMiniFatStart;
			Aspose::Cells::System::Int32 CsectMiniFat;
			Aspose::Cells::System::UInt32 SectDifStart;
			Aspose::Cells::System::Int32 CsectDif;
			 static const Aspose::Cells::System::Int32 MaxDifatEntriesInHeader;
			 static const Aspose::Cells::System::Int32 DifatInHeaderOffset;
			 static const Aspose::Cells::System::Int64 Signature;
		public:
			virtual ~Header();
	};

}

}
