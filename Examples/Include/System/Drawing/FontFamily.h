#ifndef _SYSTEM_DRAWING_FONTFAMILY_H_
#define _SYSTEM_DRAWING_FONTFAMILY_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/IDisposable.h"
#include "System/Drawing/FontStyle.h"

using namespace Aspose::Cells::System ;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing {
				class ASPOSE_CELLS_API FontFamily : public Object
				{
				private:
					StringPtr _name;

				public:
					FontFamily(StringPtr name);
					FontFamily(StringPtr name, bool createDefaultOnFail);
					StringPtr GetName();

					bool Equals(ObjectPtr obj);
					StringPtr ToString();
				};
				typedef intrusive_ptr<FontFamily> FontFamilyPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_FONTFAMILY_H_