#ifndef _SYSTEM_TEXT_DECODERNLS_H_
#define _SYSTEM_TEXT_DECODERNLS_H_

#include "System/Text/Decoder.h"
#include "System/Text/Encoding.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API DecoderNLS : public Decoder
				{
				public:
					DecoderNLS(Encoding* encoding);
					virtual ~DecoderNLS();

					virtual void Reset();
					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count);
					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count, bool flush);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count, bool flush);

					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int32_t byteIndex, int32_t byteCount, intrusive_ptr<CString> chars, int32_t charIndex);
					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int32_t byteIndex, int32_t byteCount, intrusive_ptr<CString> chars, int32_t charIndex, bool flush);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount, bool flush);

					virtual void Convert(intrusive_ptr<BString> bytes, int32_t byteIndex, int32_t byteCount, intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, bool flush, int32_t& bytesUsed, int32_t& charsUsed, bool& completed);
					virtual void Convert(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount, bool flush, int32_t& bytesUsed, int32_t& charsUsed, bool& completed);

					void ClearMustFlush() { m_mustFlush = false; }

				protected:
					Encoding*	m_encoding;
					bool		m_mustFlush;
					bool		m_throwOnOverflow;
					int32_t		m_bytesUsed;

				};
				typedef intrusive_ptr<DecoderNLS> DecoderNLSPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_DECODERNLS_H_
