#ifndef _SYSTEM_ZIP_ZIPFILE_H_
#define _SYSTEM_ZIP_ZIPFILE_H_

#include "System/IO/Stream.h"
#include "System/Zip/ZipOptions.h"
#include "System/Zip/Zip64Option.h"
#include "System/Text/Encoding.h"
#include "System/Collections/Hashtable.h"
#include "System/Zip/ZipEntry.h"
#include "System/Collections/ICollection.h"
#include "System/Zip/CompressionLevel.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;
using namespace Aspose::Cells::System::Text;
using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ASPOSE_CELLS_API ZipFile : public IEnumerable, public IDisposable, public Object
			{
			public:
				ZipFile();
				virtual ~ZipFile();
				virtual void add_ref() {
					++ref_count_;
				}

				virtual int release_ref() {
					return --ref_count_;
				}

			public:
				static intrusive_ptr<ZipFile>		Read(StreamPtr zipStream);
				void				Reset(bool whileSaving);
				StreamPtr			StreamForDiskNumber(uint32_t diskNumber);
				int32_t				GetCount();
				int32_t				FindEntry(StringPtr entryName, bool ignoreCase);
				ZipEntryPtr			GetEntry(StringPtr entryName);
				StreamPtr			GetInputStream(ZipEntryPtr zipEntry);
				StreamPtr           GetMemoryStream(ZipEntryPtr ze);
				void				NotifyEntryChanged() { _contentsChanged = true; }
				ZipEntryPtr GetIndexObject(int i)
				{
					throw Exception("NOT Realized!");
				}

				IEnumeratorPtr		GetEnumerator();

				void Close();
				void Dispose();
				//void PrintEntriesKeys();  //a function for test

			protected:
				void Dispose(bool disposeManagedResources);

			private:
				static void ReadIntoInstance(intrusive_ptr<ZipFile> zf);
				static void Zip64SeekToCentralDirectory(intrusive_ptr<ZipFile> zf);
				static void ReadCentralDirectory(intrusive_ptr<ZipFile> zf);
				static void ReadCentralDirectoryFooter(intrusive_ptr<ZipFile> zf);
				static void ReadZipFileComment(intrusive_ptr<ZipFile> zf);

				void setComment(StringPtr comment);

			public:
				StreamPtr				_readstream;
				ZipOption				_alternateEncodingUsage;
				EncodingPtr				_alternateEncoding;
				Zip64Option				_zip64;

			private:
				bool					_contentsChanged;
					
				CompressionLevel		m_CompressionLevel;
				int64_t					_ParallelDeflateThreshold;

				bool					_emitNtfsTimes;
				bool					_emitUnixTimes;
				CompressionStrategy		_Strategy;
				CompressionMethod		_compressionMethod;
				int32_t					_BufferSize;
				int32_t					_maxBufferPairs;
				int64_t					_locEndOfCDS;
				uint32_t				_diskNumberWithCd;
				uint32_t				_OffsetOfCentralDirectory;
				int64_t					_OffsetOfCentralDirectory64;
				uint16_t				_versionMadeBy;
				uint16_t				_versionNeededToExtract;
				HashtablePtr			_entries;
				String					_Comment;
				bool					_JustSaved;
				bool					_disposed;

			};
			typedef intrusive_ptr<ZipFile> ZipFilePtr;

			class ZipOutput
			{
			public:
				static bool WriteCentralDirectoryStructure(StreamPtr s,
					intrusive_ptr<ICollection> entries,
					uint32_t numSegments,
					Zip64Option zip64,
					StringPtr comment,
					intrusive_ptr<ZipContainer> container);
				static int32_t CountEntries(intrusive_ptr<ICollection> entries);
			private:
				static intrusive_ptr<BString> GenCentralDirectoryFooter(int64_t StartOfCentralDirectory,
					int64_t EndOfCentralDirectory,
					Zip64Option zip64,
					int32_t entryCount,
					StringPtr comment,
					intrusive_ptr<ZipContainer> container);
			};
		}
	}
}
#endif//_SYSTEM_ZIP_ZIPFILE_H_
