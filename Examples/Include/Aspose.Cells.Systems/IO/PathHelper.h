#ifndef _SYSTEM_IO_PATHHELPER_H_
#define _SYSTEM_IO_PATHHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/Text/StringBuilder.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Text;

namespace Aspose {
	namespace Cells {
		namespace Systems
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
