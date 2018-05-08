#ifndef _SYSTEM_IO_PATH_H_
#define _SYSTEM_IO_PATH_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				class ASPOSE_CELLS_API Path : public Object
				{
				public:
					static const Char DirectorySeparatorChar = '\\';
					static const Char AltDirectorySeparatorChar = '/';
					static const Char VolumeSeparatorChar = ':';
					static const int MaxPath = 260;
					static const int MaxDirectoryLength = 255;
					static StringPtr Prefix;
					static Char TrimEndChars[];

				public:
					static StringPtr Combine(StringPtr path1, StringPtr path2);
					static StringPtr GetDirectoryName(StringPtr path);
					static StringPtr GetExtension(StringPtr path);
					static StringPtr GetFileName(StringPtr path);
					static StringPtr GetFileNameWithoutExtension(StringPtr path);
					static StringPtr GetFullPath(StringPtr path);
					static StringPtr GetTmpPath();
					static StringPtr GetPathRoot(StringPtr path);
					static bool IsPathRooted(StringPtr path);
					static bool IsDirectorySeparator(Char c);
					static int GetRootLength(StringPtr path);

					static void CheckSearchPattern(StringPtr searchPattern);
					static StringPtr GetFullPathInternal(StringPtr path);
					static StringPtr InternalCombine(StringPtr path1, StringPtr path2);

				private:
					static void CheckInvalidPathChars(StringPtr path, bool checkAdditional);
					static void CheckInvalidPathChars(StringPtr path);
					static StringPtr CombineNoChecks(StringPtr path1, StringPtr path2);
					static StringPtr NormalizePath(StringPtr path, bool fullCheck);
					static StringPtr NormalizePath(StringPtr path, bool fullCheck, int maxPathLength);
					static StringPtr NormalizePath(StringPtr path, bool fullCheck, int maxPathLength, bool expandShortPaths);
					static StringPtr RemoveLongPathPrefix(StringPtr path);
					static bool HasIllegalCharacters(StringPtr path, bool checkAdditional);
				};
			}
		}
	}
}

#endif	//_SYSTEM_IO_PATH_H_
