#ifndef _SYSTEM_IO_BINARYREADER_H_
#define _SYSTEM_IO_BINARYREADER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Text/Decoder.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

using namespace Aspose::Cells::Systems::Text;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace IO {

				class ASPOSE_CELLS_API BinaryReader : public Object, public IDisposable
				{
				public:
					BinaryReader(){}
					BinaryReader(Aspose::Cells::Systems::IO::StreamPtr input);
					BinaryReader(Aspose::Cells::Systems::IO::StreamPtr input, Aspose::Cells::Systems::Text::EncodingPtr encoding);
					virtual ~BinaryReader();
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					virtual void Close();
					virtual void Dispose();

					virtual int32_t PeekChar();
					virtual int32_t Read();
					virtual bool ReadBoolean();
					virtual uint8_t ReadByte();
					virtual int8_t ReadSByte();
					virtual uint16_t ReadChar();
					virtual int16_t ReadInt16();
					virtual uint16_t ReadUInt16();
					virtual int32_t ReadInt32();
					virtual uint32_t ReadUInt32();
					virtual int64_t ReadInt64();
					virtual uint64_t ReadUInt64();
					virtual float ReadSingle();
					virtual double ReadDouble();
					virtual StringPtr ReadString();
					virtual int32_t Read(intrusive_ptr<CString> buffer, int32_t index, int32_t count);
					virtual intrusive_ptr<CString> ReadChars(int32_t count);
					virtual int32_t Read(intrusive_ptr<BString> buffer, int32_t index, int32_t count);
					virtual intrusive_ptr<BString> ReadBytes(int32_t count);
					virtual Aspose::Cells::Systems::IO::StreamPtr GetBaseStream();

				protected:
					virtual void Dispose(bool disposing);
					virtual void FillBuffer(int32_t numBytes);
					int32_t Read7BitEncodedInt();

				private:
					BinaryReader(BinaryReader& stream) {}

					int32_t InternalReadChars(intrusive_ptr<CString> buffer, int32_t index, int32_t count);
					int32_t InternalReadOneChar();

				private:
					Aspose::Cells::Systems::IO::StreamPtr		m_stream;
					intrusive_ptr<BString>	m_buffer;
					int32_t		m_bufferLength;
					Aspose::Cells::Systems::Text::DecoderPtr	m_decoder;
					intrusive_ptr<BString>	m_charBytes;
					intrusive_ptr<CString>	m_singleChar;
					intrusive_ptr<CString>	m_charBuffer;
					int32_t		m_maxCharsSize;
					Aspose::Cells::Systems::Text::EncodingPtr	m_encoding;
					bool		m_2BytesPerChar;
					bool		m_isMemoryStream;

				};
				typedef intrusive_ptr<BinaryReader> BinaryReaderPtr;

			}	// namespace IO
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_IO_BINARYREADER_H_