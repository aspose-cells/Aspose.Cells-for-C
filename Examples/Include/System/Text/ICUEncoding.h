#ifndef _SYSTEM_TEXT_ICUENCODING_H_
#define _SYSTEM_TEXT_ICUENCODING_H_

#include "System/Text/Encoding.h"
#include "unicode/ucnv.h"

using namespace Aspose::Cells::System;
using namespace icu;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {
				class ASPOSE_CELLS_API ICUEncoding : public Encoding
				{
				private:
					int _codePage;
					UConverter* _converter;
				public:
					ICUEncoding(int cp);
					virtual ~ICUEncoding();

					UConverter* GetConverter();

					//not support:
					virtual DecoderPtr GetDecoder();
					virtual EncoderPtr GetEncoder();
					virtual int32_t GetMaxCharCount(int32_t byteCount);
					virtual int32_t GetMaxByteCount(int32_t charCount);
					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count);
					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int byteIndex, int byteCount, intrusive_ptr<CString> chars, int charIndex);
					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count);
					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);

					//support:
					virtual StringPtr GetString(intrusive_ptr<BString> bytes, Int32 index, Int32 count);


				};
				typedef intrusive_ptr<ICUEncoding> ICUEncodingPtr;
			}
		}
	}
}

#endif//_SYSTEM_TEXT_ICUENCODING_H_