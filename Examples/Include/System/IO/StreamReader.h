#ifndef _SYSTEM_IO_STREAMREADER_H_
#define _SYSTEM_IO_STREAMREADER_H_

#include "System/Object.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Text/Encoding.h"
#include "System/Text/Decoder.h"
#include "System/IO/TextReader.h"
#include "System/IO/Stream.h"
#include "System/TypeDefBString.h"

using namespace Aspose::Cells::System::Text;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API StreamReader : public TextReader
				{
					private:
						static const int DefaultBufferSize;
						static const intrusive_ptr<StreamReader> Null;

					public:
						StreamReader();
						StreamReader(StreamPtr stream);
						StreamReader(StringPtr path);
						StreamReader(StreamPtr stream, bool detectEncodingFromByteOrderMarks);
						StreamReader(StreamPtr stream, EncodingPtr encoding);
						StreamReader(StringPtr path, bool detectEncodingFromByteOrderMarks);
						StreamReader(StringPtr path, EncodingPtr encoding);
						StreamReader(StreamPtr stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
						StreamReader(StringPtr path, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks);
						StreamReader(StreamPtr stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, Int32 bufferSize);
						StreamReader(StringPtr path, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, Int32 bufferSize);
						StreamReader(StreamPtr stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
						StreamReader(StringPtr path, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost);
						virtual ~StreamReader() {}

					public:
						void Init(StreamPtr stream);
						virtual StreamPtr GetBaseStream();
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
						StreamPtr stream;
						EncodingPtr encoding;
						DecoderPtr decoder;
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

						void Init(StreamPtr stream, EncodingPtr encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
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