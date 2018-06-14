#ifndef _SYSTEM_TEXT_ENCODER_H_
#define _SYSTEM_TEXT_ENCODER_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API Encoder : public Object
				{
				public:
					virtual ~Encoder();

					virtual void Reset();
					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count, bool flush) = 0;
					virtual int32_t GetByteCount(Char* chars, int32_t count, bool flush);

					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex, bool flush) = 0;
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, bool flush);

					virtual void Convert(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
					virtual void Convert(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);

				protected:
					Encoder();
				};

				typedef intrusive_ptr<Encoder> EncoderPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_ENCODER_H_