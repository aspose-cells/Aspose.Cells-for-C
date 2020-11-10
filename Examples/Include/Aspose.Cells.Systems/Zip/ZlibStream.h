#pragma once
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Zip/CompressionMode.h"
#include "ZlibBaseStream.h"
#include "Aspose.Cells.Systems/Zip/ZipOptions.h"
#include "Aspose.Cells.Systems/Zip/CompressionLevel.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IO/SeekOrigin.h"
//#include "Aspose.Cells.Systems/Boxing.h"
//#include "Aspose.Cells.Systems/ObjectDisposedException.h"
//#include "Aspose.Cells.Systems/IO/MemoryStream.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Int64.h"
//#include "Aspose.Cells.Systems/NotSupportedException.h"
#include "Aspose.Cells.Systems/Array1D.h"
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
			class ZlibStream : public Aspose::Cells::Systems::IO::Stream
			{
			protected:

				virtual void Dispose(bool disposing);
			public:

				intrusive_ptr<Aspose::Cells::OpenXML::ZlibBaseStream> _baseStream;
				bool _disposed;
			private:

				void Init_Vars();
			public:

				ZlibStream(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode);
				ZlibStream(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, Aspose::Cells::OpenXML::CompressionLevel level);
				ZlibStream(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, bool leaveOpen);
				ZlibStream(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream, Aspose::Cells::OpenXML::CompressionMode mode, Aspose::Cells::OpenXML::CompressionLevel level, bool leaveOpen);
				virtual Aspose::Cells::OpenXML::FlushType GetFlushMode();
				virtual void SetFlushMode(Aspose::Cells::OpenXML::FlushType value);
				Aspose::Cells::Systems::Int32 GetBufferSize();
				void SetBufferSize(Aspose::Cells::Systems::Int32 value);
				virtual Aspose::Cells::Systems::Int64 GetTotalIn();
				virtual Aspose::Cells::Systems::Int64 GetTotalOut();
				virtual bool CanRead();
				virtual bool CanSeek();
				virtual bool CanWrite();
				virtual void Flush();
				void Finish();
				virtual Aspose::Cells::Systems::Int64 GetLength();
				virtual Aspose::Cells::Systems::Int64 GetPosition();
				virtual void SetPosition(Aspose::Cells::Systems::Int64 value);
				virtual Aspose::Cells::Systems::Int32 Read(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> buffer, Aspose::Cells::Systems::Int32 offset, Aspose::Cells::Systems::Int32 count);
				virtual Aspose::Cells::Systems::Int64 Seek(Aspose::Cells::Systems::Int64 offset, Aspose::Cells::Systems::IO::SeekOrigin origin);
				virtual void SetLength(Aspose::Cells::Systems::Int64 value);
				virtual void Write(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> buffer, Aspose::Cells::Systems::Int32 offset, Aspose::Cells::Systems::Int32 count);
				static intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> CompressString(intrusive_ptr<Aspose::Cells::Systems::String> s);
				static intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> CompressBuffer(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> b);
				static intrusive_ptr<Aspose::Cells::Systems::String> UncompressString(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> compressed);
				static intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> UncompressBuffer(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> compressed);
				ZlibStream();
			public:
				virtual ~ZlibStream();
			};

		}

	}

}
