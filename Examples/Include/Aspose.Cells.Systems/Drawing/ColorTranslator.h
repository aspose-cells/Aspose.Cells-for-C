#ifndef _SYSTEM_DRAWING_COLORTRANSLATOR_H_
#define _SYSTEM_DRAWING_COLORTRANSLATOR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;

namespace Aspose { 
namespace Cells { 
namespace Systems {
namespace Drawing {
	class ASPOSE_CELLS_API ColorTranslator : public Object
	{
		private:
			static HashtablePtr htmlSysColorTable;

			ColorTranslator();
			void InitVars();
			static void InitializeHtmlSysColorTable();
		public:
			static ColorPtr FromHtml(StringPtr htmlColor);

	};
}
}
}
}
#endif//_SYSTEM_DRAWING_COLORTRANSLATOR_H_