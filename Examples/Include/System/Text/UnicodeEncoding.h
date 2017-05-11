#ifndef _SYSTEM_TEXT_UNICODEENCODING_H_
#define _SYSTEM_TEXT_UNICODEENCODING_H_

#include "System/Text/Encoding.h"
#include "System/Text/DecoderNLS.h"
#include "System/Text/EncoderNLS.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API UnicodeEncoding : public Encoding
				{
				public:
					UnicodeEncoding();
					UnicodeEncoding(bool bigEndian, bool byteOrderMark);
					virtual ~UnicodeEncoding();

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
					class UnicodeDecoder : public DecoderNLS {
					public:
						UnicodeDecoder(UnicodeEncoding* encoding) : DecoderNLS(encoding), _lastByte(-1), _lastChar(0) {}

						void Reset() {
							_lastByte = -1;
							_lastChar = '\0';
						}

					public:
						int32_t		_lastByte;
						Char		_lastChar;
					};

				private:
					bool				_bigEndian;
					bool				_byteOrderMark;
					intrusive_ptr<UnicodeDecoder>		_decoder;
					intrusive_ptr<Encoder>				_encoder;

					static intrusive_ptr<BString>		LittleEndianPreamble;
					static intrusive_ptr<BString>		BigEndianPreamble;
				};
				typedef intrusive_ptr<UnicodeEncoding> UnicodeEncodingPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_UNICODEENCODING_H_