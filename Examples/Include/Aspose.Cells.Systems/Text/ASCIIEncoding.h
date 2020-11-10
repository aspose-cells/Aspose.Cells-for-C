#ifndef _SYSTEM_TEXT_ASCIIENCODING_H_
#define _SYSTEM_TEXT_ASCIIENCODING_H_

#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Text/DecoderNLS.h"
#include "Aspose.Cells.Systems/Text/EncoderNLS.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Text {

				class ASPOSE_CELLS_API ASCIIEncoding : public Encoding
				{
				public:
					ASCIIEncoding();
					virtual ~ASCIIEncoding();

					virtual bool IsSingleByte() { return true; }

					virtual Aspose::Cells::Systems::Text::DecoderPtr GetDecoder();
					virtual Aspose::Cells::Systems::Text::EncoderPtr GetEncoder();
					virtual int32_t GetMaxCharCount(int32_t byteCount);
					virtual int32_t GetMaxByteCount(int32_t charCount);

					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count, DecoderNLSPtr baseDecoder);

					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int byteIndex, int byteCount, intrusive_ptr<CString> chars, int charIndex);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount, DecoderNLSPtr baseDecoder);

					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count);
					virtual int32_t GetByteCount(StringPtr s);
					virtual int32_t GetByteCount(Char* chars, int32_t count);
					virtual int32_t GetByteCount(Char* chars, int32_t count, EncoderNLSPtr encoder);

					virtual int32_t GetBytes(StringPtr s, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);
					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, EncoderNLSPtr encoder);

				private:
					Aspose::Cells::Systems::Text::DecoderPtr			_decoder;
					Aspose::Cells::Systems::Text::EncoderPtr			_encoder;
				};
				typedef intrusive_ptr<ASCIIEncoding> ASCIIEncodingPtr;

			}	// namespace Text
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_TEXT_ASCIIENCODING_H_
