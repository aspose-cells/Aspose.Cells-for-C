#ifndef _SYSTEM_TEXT_UTF8ENCODING_H_
#define _SYSTEM_TEXT_UTF8ENCODING_H_

#include "System/Text/Encoding.h"
#include "System/Text/DecoderNLS.h"
#include "System/Text/EncoderNLS.h"
#include "System/Text/PendingInfo.h"
#include "unicode/ucnv.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API UTF8Encoding : public Encoding
				{
				public:
					UTF8Encoding();
					UTF8Encoding(bool encoderShouldEmitUTF8Identifier);
					UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes);
					virtual ~UTF8Encoding();

					virtual DecoderPtr GetDecoder();
					virtual EncoderPtr GetEncoder();
					virtual int32_t GetMaxCharCount(int32_t byteCount);
					virtual int32_t GetMaxByteCount(int32_t charCount);

					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count, intrusive_ptr<DecoderNLS> baseDecoder);

					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int byteIndex, int byteCount, intrusive_ptr<CString> chars, int charIndex);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount, intrusive_ptr<DecoderNLS> baseDecoder);

					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count);
					virtual int32_t GetByteCount(StringPtr s);
					virtual int32_t GetByteCount(Char* chars, int32_t count);
					virtual int32_t GetByteCount(Char* chars, int32_t count, intrusive_ptr<EncoderNLS> encoder);

					virtual int32_t GetBytes(StringPtr s, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);
					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, intrusive_ptr<EncoderNLS> encoder);

					virtual intrusive_ptr<BString> GetPreamble();

				private:
					class UTF8Encoder : public EncoderNLS
					{
					public:
						int32_t _surrogateChar;
						UTF8Encoder(UTF8Encoding* encoding) : EncoderNLS(encoding), _surrogateChar(0) {}
						void Reset() {
							_surrogateChar = 0;
						}
					};
					
					class UTF8Decoder : public DecoderNLS
					{
					public:
						int _bits;
						UTF8Decoder(UTF8Encoding* encoding) : DecoderNLS(encoding), _bits(0) {}
						void Reset() {
							_bits = 0;
						}
					};

					private:
						bool _emitUTF8Identifier;
						bool _isThrowException;
						intrusive_ptr<UTF8Decoder>		_decoder;
						intrusive_ptr<UTF8Encoder>		_encoder;
						const int UTF8_CODEPAGE = 65001;
						const int FinalByte = 536870912;
						const int SupplimentarySeq = 268435456;
						const int ThreeByteSeq = 134217728;

						static intrusive_ptr<BString>		Preamble;

						intrusive_ptr<PendingInfo> _pendingInfo;
				};
				typedef intrusive_ptr<UTF8Encoding> UTF8EncodingPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_UTF8ENCODING_H_