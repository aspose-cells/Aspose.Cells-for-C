#ifndef _SYSTEM_IO_FILE_H_
#define _SYSTEM_IO_FILE_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/IO/FileStream.h"
#include "System/IO/FileOptions.h"
#include "System/IO/FileMode.h"
#include "System/IO/FileAccess.h"
#include "System/IO/FileShare.h"
#include "System/Text/Encoding.h"
#include "System/IO/StreamWriter.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				class ASPOSE_CELLS_API File : public Object
				{
				private:
					const int GetFileExInfoStandard = 0;
				public:
					static FileStreamPtr Create(StringPtr path);
					static FileStreamPtr Create(StringPtr path, Int32 bufferSize);
					static FileStreamPtr Create(StringPtr path, Int32 bufferSize, FileOptions options);
					static void Delete(StringPtr path);
					static bool Exists(StringPtr path);
					static void Copy(StringPtr sourceFileName, StringPtr destFileName);
					static void Copy(StringPtr sourceFileName, StringPtr destFileName, bool overwrite);
					static FileStreamPtr Open(StringPtr path, FileMode mode);
					static FileStreamPtr Open(StringPtr path, FileMode mode, FileAccess access);
					static FileStreamPtr Open(StringPtr path, FileMode mode, FileAccess access, FileShare share);
					static FileStreamPtr OpenRead(StringPtr path);
					static StringPtr ReadAllText(StringPtr path);
					static intrusive_ptr<Array1D<Byte>> ReadAllBytes(StringPtr path);
					static intrusive_ptr<StreamWriter> CreateText(StringPtr path);

				private:
					static void InternalDelete(StringPtr path, bool checkHost);
					static bool InternalExistsHelper(StringPtr path, bool checkHost);
					static StringPtr InternalReadAllText(StringPtr path, Aspose::Cells::System::Text::EncodingPtr encoding, bool checkHost);
					static intrusive_ptr<Array1D<Byte>> InternalReadAllBytes(StringPtr path, bool checkHost);
					static StringPtr InternalCopy(StringPtr sourceFileName, StringPtr destFileName, bool overwrite, bool checkHost);
				};
			}
		}
	}
}
#endif//_SYSTEM_IO_FILE_H_
