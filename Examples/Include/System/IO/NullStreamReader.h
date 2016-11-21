#ifndef _SYSTEM_IO_NULLSTREAMREADER_H_
#define _SYSTEM_IO_NULLSTREAMREADER_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IO/StreamReader.h"
#include "System/IO/Stream.h"
#include "System/Text/Encoding.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Text;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API NullStreamReader : public StreamReader
				{
				public:
					virtual ~NullStreamReader() {};
					StreamPtr GetBaseStream()
					{
						return Stream::Null;
					}
					EncodingPtr GetCurrentEncoding()
					{
						return Encoding::GetUnicode();
					}
					NullStreamReader()
					{
						StreamReader::Init(Stream::Null);
					}
					int Peek()
					{
						return -1;
					}
					int Read()
					{
						return -1;
					}
					int Read(intrusive_ptr<CString> buffer, int index, int count)
					{
						return 0;
					}
					StringPtr ReadLine()
					{
						return NULL;
					}
					StringPtr ReadToEnd()
					{
						return String::Empty;
					}
					int ReadBuffer()
					{
						return 0;
					}
				protected:
					void Dispose(bool disposing)
					{
					}
				};

			}
		}
	}
}
#endif//_SYSTEM_IO_NULLSTREAMREADER_H_