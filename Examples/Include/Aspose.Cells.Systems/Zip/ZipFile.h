#ifndef _SYSTEM_ZIP_ZIPFILE_H_
#define _SYSTEM_ZIP_ZIPFILE_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Zip/ZipOptions.h"
#include "Aspose.Cells.Systems/Zip/Zip64Option.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#include "Aspose.Cells.Systems/Zip/ZipEntry.h"
#include "Aspose.Cells.Systems/Collections/ICollection.h"
#include "Aspose.Cells.Systems/Zip/CompressionLevel.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;
using namespace Aspose::Cells::Systems::Text;
using namespace Aspose::Cells::Systems::Collections;

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
				static intrusive_ptr<ZipFile>		Read(Aspose::Cells::Systems::IO::StreamPtr zipStream);
				void				Reset(bool whileSaving);
				Aspose::Cells::Systems::IO::StreamPtr			StreamForDiskNumber(uint32_t diskNumber);
				int32_t				GetCount();
				int32_t				FindEntry(StringPtr entryName, bool ignoreCase);
				ZipEntryPtr			GetEntry(StringPtr entryName);
				Aspose::Cells::Systems::IO::StreamPtr			GetInputStream(ZipEntryPtr zipEntry);
				Aspose::Cells::Systems::IO::StreamPtr           GetMemoryStream(ZipEntryPtr ze);
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
				Aspose::Cells::Systems::IO::StreamPtr				_readstream;
				ZipOption				_alternateEncodingUsage;
				Aspose::Cells::Systems::Text::EncodingPtr				_alternateEncoding;
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
				static bool WriteCentralDirectoryStructure(Aspose::Cells::Systems::IO::StreamPtr s,
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
