#ifndef _SYSTEM_DRAWING_PRINTING_PAPERSOURCE_H_
#define _SYSTEM_DRAWING_PRINTING_PAPERSOURCE_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/ArgumentException.h"
#include "System/Drawing/Printing/PaperSourceKind.h"
using namespace Aspose::Cells::System;
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PaperSource : public Object
					{
					private:
						PaperSourceKind kind;
						StringPtr source_name;
						bool is_default;
					public:
						PaperSource();
						PaperSource(StringPtr sourceName, PaperSourceKind kind);
						PaperSource(StringPtr sourceName, PaperSourceKind kind, bool isDefault);
						PaperSourceKind GetKind();
						StringPtr GetSourceName();
					};
				}
			}
		}
	}
}
#endif