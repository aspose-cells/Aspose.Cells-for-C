#ifndef _SYSTEM_IO_BINARYWRITER_H_
#define _SYSTEM_IO_BINARYWRITER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Text/Encoder.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

using namespace Aspose::Cells::Systems::Text;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace IO {

				class ASPOSE_CELLS_API BinaryWriter : public Object, public IDisposable
				{
				public:
					BinaryWriter(Aspose::Cells::Systems::IO::StreamPtr output, Aspose::Cells::Systems::Text::EncodingPtr encoding);
					BinaryWriter(Aspose::Cells::Systems::IO::StreamPtr output);

					virtual ~BinaryWriter();
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					virtual void Close();
					virtual void Dispose();

					virtual void Flush();

					virtual int64_t Seek(int32_t offset, SeekOrigin origin);

					virtual void Write(bool value);
					virtual void Write(uint8_t value);
					virtual void Write(int8_t value);
					virtual void Write(intrusive_ptr<BString> buffer);
					virtual void Write(intrusive_ptr<BString> buffer, int32_t index, int32_t count);
					virtual void Write(intrusive_ptr<CString> chars);
					virtual void Write(intrusive_ptr<CString> chars, int32_t index, int32_t count);
					virtual void Write(double value);
					virtual void Write(short value);
					virtual void Write(uint16_t value);
					virtual void Write(int32_t value);
					virtual void Write(uint32_t value);
					virtual void Write(int64_t value);
					virtual void Write(uint64_t value);
					virtual void Write(float value);
					virtual void Write(StringPtr value);

				public:
					virtual Aspose::Cells::Systems::IO::StreamPtr GetBaseStream();

				protected:
					virtual void Dispose(bool disposing);
					void Write7BitEncodedInt(int32_t value);

				private:
					BinaryWriter(BinaryWriter& stream) {}

				private:
					Aspose::Cells::Systems::IO::StreamPtr		_stream;
					intrusive_ptr<BString>	_buffer;
					int32_t		_bufferLength;
					Aspose::Cells::Systems::Text::EncodingPtr	_encoding;
					Aspose::Cells::Systems::Text::EncoderPtr	_encoder;
					intrusive_ptr<BString>	_largeByteBuffer;
					int32_t		_largeByteBufferLength;
					int32_t		_maxChars;
				};
				typedef intrusive_ptr<BinaryWriter> BinaryWriterPtr;

			}	// namespace IO
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_IO_BINARYWRITER_H_
