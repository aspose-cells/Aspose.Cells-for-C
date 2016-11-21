#ifndef _SYSTEM_DRAWING_COLORTRANSLATOR_H_
#define _SYSTEM_DRAWING_COLORTRANSLATOR_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#include "System/Drawing/Color.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Collections;

namespace Aspose { 
namespace Cells { 
namespace System {
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