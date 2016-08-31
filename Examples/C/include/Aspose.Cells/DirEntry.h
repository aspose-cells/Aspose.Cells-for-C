#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
//#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/IO/BinaryWriter.h"
//#include "System/InvalidOperationException.h"
#include "System/IO/BinaryReader.h"
#include "System/Guid.h"
//#include "System/UInt16.h"
#include "DirEntryColor.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "DirEntryType.h"
#include "System/Array1D.h"
#define STATIC_DIRENTRY() 


namespace Aspose {
namespace Ss {
	class DirEntry : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 NameBufLength;
			 static const Aspose::Cells::System::Int32 ClsidLength;
	public:

			 DirEntry();
			 DirEntry(intrusive_ptr<Aspose::Cells::System::String> name , bool isRoot , intrusive_ptr<Aspose::Cells::System::Guid> clsid);
			 DirEntry(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Ss::DirEntryType entryType , Aspose::Cells::System::Int64 size);
			 DirEntry(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Ss::DirEntryType EntryType;
			Aspose::Ss::DirEntryColor EntryColor;
			Aspose::Cells::System::UInt32 LeftSib;
			Aspose::Cells::System::UInt32 RightSib;
			Aspose::Cells::System::UInt32 Child;
			intrusive_ptr<Aspose::Cells::System::Guid> Clsid;
			Aspose::Cells::System::UInt32 UserFlags;
			Aspose::Cells::System::Int64 CreateTime;
			Aspose::Cells::System::Int64 ModifyTime;
			Aspose::Cells::System::UInt32 SectStart;
			Aspose::Cells::System::Int64 Size;
			bool IsRead;
			 static const Aspose::Cells::System::Int32 StructureSize;
			 static const Aspose::Cells::System::UInt32 NoStream;
		public:
			virtual ~DirEntry();
	};

}

}
