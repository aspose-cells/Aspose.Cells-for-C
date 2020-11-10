#ifndef _SYSTEM_IO_STREAMREADER_H_
#define _SYSTEM_IO_STREAMREADER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/Text/Decoder.h"
#include "Aspose.Cells.Systems/IO/TextReader.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

using namespace Aspose::Cells::Systems::Text;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace IO {
				class ASPOSE_CELLS_API StreamReader : public TextReader
				{
					private:
						static const int DefaultBufferSize;
						static const intrusive_ptr<StreamReader> Null;

					public:
						StreamReader();
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream);
						StreamReader(StringPtr path);
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream, bool detectEncodingFromByteOrderMarks);
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding);
						StreamReader(StringPtr path, bool detectEncodingFromByteOrderMarks);
						StreamReader(StringPtr path, Aspose::Cells::Systems::Text::EncodingPtr encoding);
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
						StreamReader(StringPtr path, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, Int32 bufferSize);
						StreamReader(StringPtr path, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, Int32 bufferSize);
						StreamReader(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
						StreamReader(StringPtr path, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost);
						virtual ~StreamReader() {}

					public:
						void Init(Aspose::Cells::Systems::IO::StreamPtr stream);
						virtual Aspose::Cells::Systems::IO::StreamPtr GetBaseStream();
						void Close();
						Int32 Peek();
						virtual int ReadBuffer();
						Int32 Read();
						Int32 Read(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						StringPtr ReadLine();				
						StringPtr ReadToEnd();

					protected:
						void Dispose(bool disposing);

					private:
						Aspose::Cells::Systems::IO::StreamPtr stream;
						Aspose::Cells::Systems::Text::EncodingPtr encoding;
						Aspose::Cells::Systems::Text::DecoderPtr decoder;
						intrusive_ptr<BString> byteBuffer;
						intrusive_ptr<CString> charBuffer;
						intrusive_ptr<BString> _preamble;
						int charPos;
						int charLen;
						int byteLen;
						int bytePos;
						int _maxCharsPerBuffer;
						bool _detectEncoding;
						bool _checkPreamble;
						bool _isBlocked;
						bool _closable;
						static const int DefaultFileStreamBufferSize = 4096;
						static const int MinBufferSize = 128;

						void Init(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
						bool IsPreamble();
						void CompressBuffer(int n);
						void DetectEncoding();
						int ReadBuffer(intrusive_ptr<CString> userBuffer, int userOffset, int desiredChars, bool& readToUserBuffer);
						void InitVars();
				};
				typedef intrusive_ptr<StreamReader> StreamReaderPtr;

			}
		}
	}
}
#endif//_SYSTEM_IO_STREAMREADER_H_