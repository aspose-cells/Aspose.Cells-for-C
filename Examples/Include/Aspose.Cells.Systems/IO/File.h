#ifndef _SYSTEM_IO_FILE_H_
#define _SYSTEM_IO_FILE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/IO/FileStream.h"
#include "Aspose.Cells.Systems/IO/FileOptions.h"
#include "Aspose.Cells.Systems/IO/FileMode.h"
#include "Aspose.Cells.Systems/IO/FileAccess.h"
#include "Aspose.Cells.Systems/IO/FileShare.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/IO/StreamWriter.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems
		{
			namespace IO
			{
				class ASPOSE_CELLS_API File : public Object
				{
				private:
					const int GetFileExInfoStandard = 0;
				public:
					static Aspose::Cells::Systems::IO::FileStreamPtr Create(StringPtr path);
					static Aspose::Cells::Systems::IO::FileStreamPtr Create(StringPtr path, Int32 bufferSize);
					static Aspose::Cells::Systems::IO::FileStreamPtr Create(StringPtr path, Int32 bufferSize, FileOptions options);
					static void Delete(StringPtr path);
					static bool Exists(StringPtr path);
					static void Copy(StringPtr sourceFileName, StringPtr destFileName);
					static void Copy(StringPtr sourceFileName, StringPtr destFileName, bool overwrite);
					static Aspose::Cells::Systems::IO::FileStreamPtr Open(StringPtr path, FileMode mode);
					static Aspose::Cells::Systems::IO::FileStreamPtr Open(StringPtr path, FileMode mode, FileAccess access);
					static Aspose::Cells::Systems::IO::FileStreamPtr Open(StringPtr path, FileMode mode, FileAccess access, FileShare share);
					static Aspose::Cells::Systems::IO::FileStreamPtr OpenRead(StringPtr path);
					static StringPtr ReadAllText(StringPtr path);
					static intrusive_ptr<Array1D<Byte>> ReadAllBytes(StringPtr path);
					static intrusive_ptr<StreamWriter> CreateText(StringPtr path);

				private:
					static void InternalDelete(StringPtr path, bool checkHost);
					static bool InternalExistsHelper(StringPtr path, bool checkHost);
					static StringPtr InternalReadAllText(StringPtr path, Aspose::Cells::Systems::Text::EncodingPtr encoding, bool checkHost);
					static intrusive_ptr<Array1D<Byte>> InternalReadAllBytes(StringPtr path, bool checkHost);
					static StringPtr InternalCopy(StringPtr sourceFileName, StringPtr destFileName, bool overwrite, bool checkHost);
				};
			}
		}
	}
}
#endif//_SYSTEM_IO_FILE_H_
