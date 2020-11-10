#ifndef _SYSTEM_DRAWING_PRINTING_PAGESIZE_H_
#define _SYSTEM_DRAWING_PRINTING_PAGESIZE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/ArgumentException.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PaperKind.h"
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PaperSize : public Object
					{
					private:
						StringPtr name;
						int width;
						int height;
						PaperKind kind;
						bool is_default;
					public:
						PaperSize();
						PaperSize(StringPtr name, int width, int height);
						PaperSize(StringPtr name, int width, int height, PaperKind kind, bool isDefault);
						int GetWidth();
						void SetWidth(int value);
						int GetHeight();
						void SetHeight(int value);
						StringPtr GetPaperName();
						void SetPaperName(StringPtr value);
						PaperKind GetKind();
						int	GetRawKind();
						void SetRawKind(int  value);
						bool IsDefault();
						void SetKind(PaperKind k);
						/*StringPtr ToString()
						{
						string ret = "[PaperSize {0} Kind={1} Height={2} Width={3}]";
						return StringHelper::Format(ret, this.PaperName, this.Kind, this.Height, this.Width);
						}*/

					};
				}
			}
		}
	}
}
#endif
