#ifndef _SYSTEM_DRAWING_PRINTING_PAPERSOURCE_H_
#define _SYSTEM_DRAWING_PRINTING_PAPERSOURCE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/ArgumentException.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PaperSourceKind.h"
using namespace Aspose::Cells::Systems;
namespace Aspose {
	namespace Cells {
		namespace Systems {
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