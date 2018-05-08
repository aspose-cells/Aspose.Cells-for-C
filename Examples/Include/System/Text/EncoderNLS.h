#ifndef _SYSTEM_TEXT_ENCODERNLS_H_
#define _SYSTEM_TEXT_ENCODERNLS_H_

#include "System/Text/Encoder.h"
#include "System/Text/Encoding.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API EncoderNLS : public Encoder
				{
				public:
					EncoderNLS(Encoding* encoding);
					virtual ~EncoderNLS();

					virtual void Reset();
					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count, bool flush);
					virtual int32_t GetByteCount(Char* chars, int32_t count, bool flush);

					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex, bool flush);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, bool flush);

					virtual void Convert(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
					virtual void Convert(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);

					void ClearMustFlush() { m_mustFlush = false; }

				protected:
					Encoding*	m_encoding;
					bool		m_mustFlush;
					bool		m_throwOnOverflow;
					int32_t		m_charsUsed;

				};
				typedef intrusive_ptr<EncoderNLS> EncoderNLSPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_ENCODERNLS_H_
