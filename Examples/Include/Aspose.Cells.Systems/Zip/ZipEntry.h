#ifndef _SYSTEM_ZIP_ZIPENTRY_H_
#define _SYSTEM_ZIP_ZIPENTRY_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Zip/ZipOptions.h"
#include "Aspose.Cells.Systems/Zip/CrcCalculatorStream.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "Aspose.Cells.Systems/NotSupportedException.h"
#include "Aspose.Cells.Systems/Zip/SharedUtilities.h"
#include "Aspose.Cells.Systems/Zip/CompressionLevel.h"
#include "Aspose.Cells.Systems/Zip/ZipContainer.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;
using namespace Aspose::Cells::Systems::Text;
using namespace Aspose::Cells::Systems::Collections;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ZipFile;
			class ASPOSE_CELLS_API ZipEntry : public Object
			{
			public:
				ZipEntry();
				virtual ~ZipEntry();

				static intrusive_ptr<ZipEntry> ReadDirEntry(intrusive_ptr<ZipFile> zf, HashtablePtr previouslySeen);
				static bool IsNotValidZipDirEntrySig(int32_t signature);

				void		ResetDirEntry();
				StringPtr		GetFileName();
				void		MarkAsDirectory();
				Aspose::Cells::Systems::IO::StreamPtr		GetArchiveStream();
				int32_t		ProcessExtraField(Aspose::Cells::Systems::IO::StreamPtr s, int16_t extraFieldLength);

				intrusive_ptr<CrcCalculatorStream>	OpenReader();
				intrusive_ptr<CrcCalculatorStream>	InternalOpenReader();

				int64_t		GetSize();

				static intrusive_ptr<ZipEntry> CreateForZipOutputStream(StringPtr nameInArchive);
				void SetEntryTimes(DateTimePtr created, DateTimePtr accessed, DateTimePtr modified);
				CompressionLevel GetCompressionLevel() { return _CompressionLevel; }
				void SetCompressionLevel(CompressionLevel level);
				CompressionMethod GetCompressionMethod() { return (CompressionMethod)_CompressionMethod; }
				void SetCompressionMethod(CompressionMethod value);
				EncryptionAlgorithm GetEncryption() { return _Encryption; }
				void SetEncryption(EncryptionAlgorithm value);
				Aspose::Cells::Systems::Text::EncodingPtr GetAlternateEncoding() { return m_AlternateEncoding; }
				void SetAlternateEncoding(Aspose::Cells::Systems::Text::EncodingPtr encoding) { m_AlternateEncoding = encoding; }
				ZipOption GetAlternateEncodingUsage() { return m_AlternateEncodingUsage; }
				void SetAlternateEncodingUsage(ZipOption alternateEncodingUsage) { m_AlternateEncodingUsage = alternateEncodingUsage; }
				bool GetEmitTimesInWindowsFormatWhenSaving() { return _emitNtfsTimes; }
				void SetEmitTimesInWindowsFormatWhenSaving(bool value);
				bool GetEmitTimesInUnixFormatWhenSaving() { return _emitUnixTimes; }
				void SetEmitTimesInUnixFormatWhenSaving(bool value);
				bool IsDirectory() { return _IsDirectory; }
				bool* GetOutputUsedZip64() { return _OutputUsesZip64; }
				bool GetIncludedInMostRecentSave() { return !_skippedDuringSave; }

				void StoreRelativeOffset();
				void WriteHeader(Aspose::Cells::Systems::IO::StreamPtr s, int32_t cycle);
				void WriteSecurityMetadata(Aspose::Cells::Systems::IO::StreamPtr outstream);
				void PrepOutputStream(Aspose::Cells::Systems::IO::StreamPtr s, int64_t streamLength,
					intrusive_ptr<CountingStream>* outputCounter,
					Aspose::Cells::Systems::IO::StreamPtr* encryptor,
					Aspose::Cells::Systems::IO::StreamPtr* compressor,
					intrusive_ptr<CrcCalculatorStream>* output);
				void FinishOutputStream(Aspose::Cells::Systems::IO::StreamPtr s, intrusive_ptr<CountingStream> entryCounter, Aspose::Cells::Systems::IO::StreamPtr encryptor, Aspose::Cells::Systems::IO::StreamPtr compressor, intrusive_ptr<CrcCalculatorStream> output);
				void PostProcessOutput(Aspose::Cells::Systems::IO::StreamPtr s);
				void WriteCentralDirectoryEntry(Aspose::Cells::Systems::IO::StreamPtr s);

				//add by leo.luo, 2015-11-3
				DateTimePtr GetDateTime();
				void SetDateTime(DateTimePtr val);
				DateTimePtr GetModifiedTime();
				void SetModifiedTime(DateTimePtr val);
				StringPtr GetName();

			private:
				int32_t ProcessExtraFieldWindowsTimes(intrusive_ptr<BString>  buffer, int32_t j, int16_t dataSize, int64_t posn);
				int32_t ProcessExtraFieldUnixTimes(intrusive_ptr<BString>  buffer, int32_t j, int16_t dataSize, int64_t posn);
				int32_t ProcessExtraFieldInfoZipTimes(intrusive_ptr<BString>  buffer, int32_t j, int16_t dataSize, int64_t posn);
				int32_t ProcessExtraFieldZip64(intrusive_ptr<BString>  buffer, int32_t j, int16_t dataSize, int64_t posn);
				int32_t ProcessExtraFieldPkwareStrongEncryption(intrusive_ptr<BString>  Buffer, int32_t j);
				DateTimePtr slurpDateTime(int32_t& j, int32_t& remainingData, intrusive_ptr<BString> buffer);
				int64_t slurp(int32_t& j, int32_t& remainingData, intrusive_ptr<BString> buffer, int64_t posn);
				void	ReadExtraField();

				void	ValidateCompression();
				int64_t	GetFileDataPosition();
				void	SetFdpLoh();
				Aspose::Cells::Systems::IO::StreamPtr GetExtractDecompressor(Aspose::Cells::Systems::IO::StreamPtr input);

				static intrusive_ptr<ZipEntry> Create(StringPtr nameInArchive, ZipEntrySource source, ObjectPtr arg1, ObjectPtr arg2);
				intrusive_ptr<BString> GetEncodedFileNameBytes();
				StringPtr NormalizeFileName();
				void MaybeUnsetCompressionMethodForWriting(int32_t cycle);
				void SetZip64Flags();
				intrusive_ptr<BString> ConstructExtraField(bool forCentralDirectory);
				Aspose::Cells::Systems::IO::StreamPtr MaybeApplyEncryption(Aspose::Cells::Systems::IO::StreamPtr s);
				Aspose::Cells::Systems::IO::StreamPtr MaybeApplyCompression(Aspose::Cells::Systems::IO::StreamPtr s, int64_t streamLength);

			public:
				bool				_InputUsesZip64;
				intrusive_ptr<ZipContainer>		_container;
				int16_t				_BitField;

			private:
				static StringPtr	_DirChar;
				static DateTimePtr	_unixEpoch;
				static DateTimePtr	_win32Epoch;
				static DateTimePtr	_zeroHour;
				int16_t				_CompressionMethod;
				CompressionLevel	_CompressionLevel;
				ZipEntrySource		_Source;
				Aspose::Cells::Systems::Text::EncodingPtr			m_AlternateEncoding;
				ZipOption			m_AlternateEncodingUsage;
				Aspose::Cells::Systems::Text::EncodingPtr			_actualEncoding;
				Aspose::Cells::Systems::Text::EncodingPtr			_ibm437;

				int64_t				__FileDataPosition;

				StringPtr				_FileNameInArchive;
				int16_t				_VersionMadeBy;
				int16_t				_VersionNeeded;
				int32_t				_TimeBlob;
				DateTimePtr			_LastModified;
				DateTimePtr			_Mtime;
				DateTimePtr			_Atime;
				DateTimePtr			_Ctime;
				bool				_ntfsTimesAreSet;
				bool				_emitNtfsTimes;
				bool				_emitUnixTimes;
				ZipEntryTimestamp	_timestamp;
				int32_t				_Crc32;
				int64_t				_CompressedSize;
				int64_t				_UncompressedSize;
				int16_t				_CompressionMethod_FromZipFile;
				int16_t				_filenameLength;
				int16_t				_extraFieldLength;
				int16_t				_commentLength;
				uint32_t			_diskNumber;
				int16_t				_InternalFileAttrs;
				int32_t				_ExternalFileAttrs;
				int64_t				_RelativeOffsetOfLocalHeader;
				bool				_IsText;
				StringPtr				_Comment;
				int32_t				_LengthOfHeader;
				int32_t				_LengthOfTrailer;
				EncryptionAlgorithm	_Encryption;
				EncryptionAlgorithm _Encryption_FromZipFile;
				int64_t				_CompressedFileDataSize;
				bool				_metadataChanged;
				bool				_IsDirectory;
				bool				_sourceIsEncrypted;
				intrusive_ptr<BString>			_Extra;
				int32_t				_readExtraDepth;
				uint32_t			_UnsupportedAlgorithmId;
				Aspose::Cells::Systems::IO::StreamPtr				_archiveStream;
				Aspose::Cells::Systems::IO::StreamPtr				_sourceStream;
				bool				_restreamRequiredOnSave;
				bool				_skippedDuringSave;

				int64_t				_future_ROLH;
				bool				_presumeZip64;
				bool				_TrimVolumeFromFullyQualifiedPaths;
				bool				_crcCalculated;
				bool*				_entryRequiresZip64;
				bool*				_OutputUsesZip64;
				intrusive_ptr<BString>			_EntryHeader;

			private:
				class CopyHelper {
				public:
					static StringPtr AppendCopyToFileName(StringPtr f) {
							throw NotSupportedException("overflow while creating filename");
					}
				};
			};
			typedef intrusive_ptr<ZipEntry> ZipEntryPtr;
		}
	}
}
#endif//_SYSTEM_ZIP_ZIPENTRY_H_
