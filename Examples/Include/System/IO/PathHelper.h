#ifndef _SYSTEM_IO_PATHHELPER_H_
#define _SYSTEM_IO_PATHHELPER_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/Text/StringBuilder.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Text;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				class ASPOSE_CELLS_API PathHelper : public Object
				{
				public:
					PathHelper(Char* charArrayPtr, int length);
					PathHelper(int capacity, int maxPath);
					virtual ~PathHelper();

					void Append(Char value);

					int GetLength();
					void SetLength(int length);

					bool TryExpandShortFileName();

					Char GetChar(int index);
					bool OrdinalStartsWith(StringPtr compareTo, bool ignoreCase);
					int GetFullPathNameInternal();
					void Fixup(int lenSavedName, int lastSlash);
					virtual StringPtr ToString();

				private:
					void NullTerminate();

				private:
					int m_capacity;
					int m_length;
					int m_maxPath;
					Char* m_arrayPtr;
					StringBuilderPtr m_sb;
					bool useStackAlloc;
				};
			}
		}
	}
}

#endif	//_SYSTEM_IO_PATHHELPER_H_
