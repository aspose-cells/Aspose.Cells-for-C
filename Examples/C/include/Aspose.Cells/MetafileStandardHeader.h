#pragma once
#include "System/IO/BinaryReader.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_METAFILESTANDARDHEADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MetafileStandardHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 mFileType;
			Aspose::Cells::System::UInt16 mHeaderSize;
			Aspose::Cells::System::UInt16 mVersion;
			Aspose::Cells::System::UInt32 mFileSize;
			Aspose::Cells::System::UInt16 mObjectCount;
			Aspose::Cells::System::UInt32 mMaxRecordSize;
			Aspose::Cells::System::UInt16 mParameterCount;
	public:

			 MetafileStandardHeader();
			void Read(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			Aspose::Cells::System::Int32 GetObjectCount();
		public:
			virtual ~MetafileStandardHeader();
	};

}

}

}

}
