#ifndef _SYSTEM_IO_NULLSTREAMREADER_H_
#define _SYSTEM_IO_NULLSTREAMREADER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/StreamReader.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Text;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace IO {
				class ASPOSE_CELLS_API NullStreamReader : public StreamReader
				{
				public:
					virtual ~NullStreamReader() {};
					Aspose::Cells::Systems::IO::StreamPtr GetBaseStream()
					{
						return Stream::Null;
					}
					Aspose::Cells::Systems::Text::EncodingPtr GetCurrentEncoding()
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