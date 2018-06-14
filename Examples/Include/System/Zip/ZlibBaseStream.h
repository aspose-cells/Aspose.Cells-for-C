#ifndef _SYSTEM_ZIP_ZLIBBASESTREAM_H_
#define _SYSTEM_ZIP_ZLIBBASESTREAM_H_

#include "System/IO/Stream.h"
#include "System/NotImplementedException.h"
#include "System/Zip/ZipOptions.h"
#include "System/Zip/ZlibCodec.h"
#include "System/Zip/CRC32.h"
#include "System/Zip/CompressionLevel.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			enum ZlibStreamFlavor { ZlibStreamFlavor_ZLIB = 1950, ZlibStreamFlavor_DEFLATE = 1951, ZlibStreamFlavor_GZIP = 1952 };
			enum StreamMode
			{
				StreamMode_Writer,
				StreamMode_Reader,
				StreamMode_Undefined,
			};

			class ZlibBaseStream : public Stream {
			public:
				ZlibBaseStream(StreamPtr stream, CompressionMode compressionMode, CompressionLevel level,
					ZlibStreamFlavor flavor, bool leaveOpen);
				virtual ~ZlibBaseStream();

				int GetCrc32();
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
				void finish();
				void end();
				void Close();
				void Flush();
				int64_t Seek(int64_t offset, SeekOrigin origin) { throw NotImplementedException(); }
				bool CanRead() { return _stream->CanRead(); }
				bool CanWrite() { return _stream->CanWrite(); }
				bool CanSeek() { return _stream->CanSeek(); }
				int64_t GetLength() { return _stream->GetLength(); }
				void SetLength(int64_t length);
				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);

				int64_t GetPosition() { throw NotImplementedException(); }
				void SetPosition(int64_t position) { throw NotImplementedException(); }

				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

				static void CompressString(intrusive_ptr<Aspose::Cells::System::String> s, intrusive_ptr<Aspose::Cells::System::IO::Stream> compressor);
				static void CompressBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> b, intrusive_ptr<Aspose::Cells::System::IO::Stream> compressor);
				static intrusive_ptr<Aspose::Cells::System::String> UncompressString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> compressed, intrusive_ptr<Aspose::Cells::System::IO::Stream> decompressor);
				static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> UncompressBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> compressed, intrusive_ptr<Aspose::Cells::System::IO::Stream> decompressor);

			private:
				bool _GetWantCompress();
				intrusive_ptr<ZlibCodec> GetZ();
				intrusive_ptr<BString> GetWorkingBuffer();

			public:
				intrusive_ptr<ZlibCodec>			_z; // deferred init... new ZlibCodec();
				StreamMode			_streamMode;
				FlushType			_flushMode;
				ZlibStreamFlavor	_flavor;
				CompressionMode		_compressionMode;
				CompressionLevel	_level;
				bool				_leaveOpen;
				intrusive_ptr<BString>			_workingBuffer;
				int					_bufferSize;
				uint8_t				_buf1[1];
				StreamPtr				_stream;
				CompressionStrategy Strategy;
				intrusive_ptr<CRC32>				crc;
				bool				nomoreinput;
			};
			
		}
	}
}
#endif//_SYSTEM_ZIP_ZLIBBASESTREAM_H_
