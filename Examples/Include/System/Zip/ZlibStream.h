#pragma once
#include "System/Byte.h"
#include "System/Zip/CompressionMode.h"
#include "ZlibBaseStream.h"
#include "System/Zip/ZipOptions.h"
#include "System/Zip/CompressionLevel.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/Object.h"
#include "System/IO/SeekOrigin.h"
//#include "System/Boxing.h"
//#include "System/ObjectDisposedException.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/NotSupportedException.h"
#include "System/Array1D.h"
#define STATIC_ZLIBSTREAM() 

namespace Aspose {
	namespace Cells {
		namespace OpenXML {
			class ZlibCodec;
		}
	}
}

namespace Aspose {
	namespace Cells {
		namespace OpenXML {
			class ZlibStream : public Aspose::Cells::System::IO::Stream
			{
			protected:

				virtual void Dispose(bool disposing);
			public:

				intrusive_ptr<Aspose::Cells::OpenXML::ZlibBaseStream> _baseStream;
				bool _disposed;
			private:

				void Init_Vars();
			public:

				ZlibStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode);
				ZlibStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, Aspose::Cells::OpenXML::CompressionLevel level);
				ZlibStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, bool leaveOpen);
				ZlibStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, Aspose::Cells::OpenXML::CompressionLevel level, bool leaveOpen);
				virtual Aspose::Cells::OpenXML::FlushType GetFlushMode();
				virtual void SetFlushMode(Aspose::Cells::OpenXML::FlushType value);
				Aspose::Cells::System::Int32 GetBufferSize();
				void SetBufferSize(Aspose::Cells::System::Int32 value);
				virtual Aspose::Cells::System::Int64 GetTotalIn();
				virtual Aspose::Cells::System::Int64 GetTotalOut();
				virtual bool CanRead();
				virtual bool CanSeek();
				virtual bool CanWrite();
				virtual void Flush();
				void Finish();
				virtual Aspose::Cells::System::Int64 GetLength();
				virtual Aspose::Cells::System::Int64 GetPosition();
				virtual void SetPosition(Aspose::Cells::System::Int64 value);
				virtual Aspose::Cells::System::Int32 Read(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer, Aspose::Cells::System::Int32 offset, Aspose::Cells::System::Int32 count);
				virtual Aspose::Cells::System::Int64 Seek(Aspose::Cells::System::Int64 offset, Aspose::Cells::System::IO::SeekOrigin origin);
				virtual void SetLength(Aspose::Cells::System::Int64 value);
				virtual void Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer, Aspose::Cells::System::Int32 offset, Aspose::Cells::System::Int32 count);
				static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CompressString(intrusive_ptr<Aspose::Cells::System::String> s);
				static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CompressBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> b);
				static intrusive_ptr<Aspose::Cells::System::String> UncompressString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> compressed);
				static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> UncompressBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> compressed);
				ZlibStream();
			public:
				virtual ~ZlibStream();
			};

		}

	}

}
