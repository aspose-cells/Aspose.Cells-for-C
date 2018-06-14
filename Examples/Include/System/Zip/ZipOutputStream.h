#ifndef _SYSTEM_ZIP_ZIPOUTPUTSTREAM_H_
#define _SYSTEM_ZIP_ZIPOUTPUTSTREAM_H_

#include "System/Zip/SharedUtilities.h"
#include "System/Zip/CrcCalculatorStream.h"
#include "System/Zip/Zip64Option.h"
#include "System/Zip/CompressionLevel.h"
#include "System/Zip/ZipOptions.h"
#include "System/Zip/ZipEntry.h"

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ASPOSE_CELLS_API ZipOutputStream : public Stream {
			public:
				ZipOutputStream(StreamPtr stream);
				ZipOutputStream(StreamPtr stream, bool leaveOpen);
				virtual ~ZipOutputStream();

				EncryptionAlgorithm GetEncryption() { return _encryption; }
				int32_t	GetCodecBufferSize() { return m_CodecBufferSize; }
				CompressionStrategy GetStrategy() { return m_Strategy; }
				void SetStrategy(CompressionStrategy strategy) { m_Strategy = strategy; }
				CompressionLevel GetCompressionLevel() { return m_CompressionLevel; }
				void SetCompressionLevel(CompressionLevel level) { m_CompressionLevel = level; }
				CompressionMethod GetCompressionMethod() { return m_CompressionMethod; }
				void SetCompressionMethod(CompressionMethod method) { m_CompressionMethod = method; }
				Zip64Option GetEnableZip64() { return _zip64; }
				void SetEnableZip64(Zip64Option zip64) { _zip64 = zip64; }
				bool GetOutputUsedZip64() { return _anyEntriesUsedZip64 || _directoryNeededZip64; }
				EncodingPtr GetAlternateEncoding() { return _alternateEncoding; }
				EncodingPtr GetDefaultEncoding() { return Encoding::GetUTF8(); }
				ZipOption GetAlternateEncodingUsage() { return _alternateEncodingUsage; }
				int64_t GetParallelDeflateThreshold() { return _ParallelDeflateThreshold; }
				void SetParallelDeflateThreshold(int64_t value);

				ZipEntryPtr PutNextEntry(StringPtr entryName);

				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) { throw NotImplementedException(); }
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
					
				bool CanRead() { return false; }
				bool CanWrite() { return true; }
				bool CanSeek() { return false; }

				int64_t GetLength() { throw NotImplementedException(); }
				void SetLength(int64_t length) { throw NotImplementedException(); }

				int64_t GetPosition() { return _outputStream->GetPosition(); }
				void SetPosition(int64_t position) { throw NotImplementedException(); }

				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

				int64_t Seek(int64_t offset, SeekOrigin origin) { throw NotImplementedException(); }

				void Flush() { }

				void Dispose(bool disposing);
				void Finish();
				void CloseEntry() { }

			private:
				void InsureUniqueEntry(ZipEntryPtr ze1);
				void _InitiateCurrentEntry(bool finishing);
				void _FinishCurrentEntry();
				void DisposeWithoutCloseStream();

			public:
				Zip64Option			_zip64;

			private:
				CompressionLevel	m_CompressionLevel;
				CompressionMethod	m_CompressionMethod;
				CompressionStrategy m_Strategy;
				EncryptionAlgorithm	_encryption;
				ZipEntryTimestamp	_timestamp;
				StreamPtr			_outputStream;
				ZipEntryPtr			_currentEntry;
				HashtablePtr		_entriesWritten;
				int32_t				_entryCount;
				ZipOption			_alternateEncodingUsage = ZipOption_Never;
				EncodingPtr			_alternateEncoding;
				int32_t				m_CodecBufferSize;
				int64_t				_ParallelDeflateThreshold;

				bool				_leaveUnderlyingStreamOpen;
				bool				_disposed;
				bool				_exceptionPending;
				bool				_anyEntriesUsedZip64;
				bool				_directoryNeededZip64;
				intrusive_ptr<CountingStream>		_outputCounter;
				StreamPtr				_encryptor;
				StreamPtr				_deflater;
				intrusive_ptr<CrcCalculatorStream>	_entryOutputStream;
				bool				_needToWriteEntryHeader;
				bool				_DontIgnoreCase;
			};
			typedef intrusive_ptr<ZipOutputStream> ZipOutputStreamPtr;
			
		}
	}
}
#endif//_SYSTEM_ZIP_ZIPOUTPUTSTREAM_H_
