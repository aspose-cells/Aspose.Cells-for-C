#pragma once
#include "System/IO/Stream.h"
//#include "System/Int64.h"
//#include "System/InvalidOperationException.h"
#include "System/Guid.h"
//#include "System/IO/File.h"
#include "System/UInt32.h"
//#include "System/StringHelperPal.h"
//#include "System/Math.h"
#include "System/IO/MemoryStream.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Diagnostics/Debug.h"
//#include "System/Text/Encoding.h"
//#include "System/Collections/SortedList.h"
//#include "System/IO/BinaryWriter.h"
#include "System/Byte.h"
#include "System/String.h"
//#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
#define STATIC_FILESYSTEM() 

namespace Aspose {
namespace Ss {
class DirEntryCollection;
class MemoryStorage;
class Header;
class DirEntry;
class Fat;
class SectCollection;
}
}

namespace Aspose {
namespace Ss {
#ifdef WIN32

	class ASPOSE_CELLS_API FileSystem : public Aspose::Cells::System::Object
#else	class FileSystem : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			void Load(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void CheckZeroFat();
			void WriteStorage(intrusive_ptr<Aspose::Ss::MemoryStorage> storage , intrusive_ptr<Aspose::Ss::DirEntry> storageEntry);
			Aspose::Cells::System::UInt32 WriteStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream , bool isForceFat , Aspose::Cells::System::Int32& sectorCount);
			Aspose::Cells::System::UInt32 WriteStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream , bool isForceFat);
			void ReadDirectory();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ReadStream(Aspose::Cells::System::UInt32 sectStart , Aspose::Cells::System::Int32 streamLength , Aspose::Cells::System::Int32 lengthToRead , bool isForceFat);
			void ReadData();
			void ReadData(intrusive_ptr<Aspose::Ss::DirEntry> dirEntry , intrusive_ptr<Aspose::Ss::MemoryStorage> parent);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> mFileSystemStream;
			intrusive_ptr<Aspose::Ss::Header> mHeader;
			intrusive_ptr<Aspose::Ss::Fat> mFat;
			intrusive_ptr<Aspose::Ss::SectCollection> mMiniFat;
			intrusive_ptr<Aspose::Ss::DirEntryCollection> mDirEntries;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mMiniStream;
			intrusive_ptr<Aspose::Ss::MemoryStorage> mRoot;
	public:

			static bool IsStructuredStorage(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static bool IsStructuredStorage(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 bytesRead);
			 FileSystem(intrusive_ptr<Aspose::Ss::MemoryStorage> root);
			 FileSystem(intrusive_ptr<Aspose::Cells::System::Guid> clsid);
			 FileSystem(intrusive_ptr<Aspose::Cells::System::String> fileName);
			 FileSystem(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void Save(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ReadOneSectorFromStreamInRootStorage(intrusive_ptr<Aspose::Cells::System::String> streamName);
			bool ContainsInRootStorage(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Ss::MemoryStorage> GetRoot();
			intrusive_ptr<Aspose::Ss::Fat> GetFat();
			 FileSystem();
		public:
			virtual ~FileSystem();
	};

}

}
