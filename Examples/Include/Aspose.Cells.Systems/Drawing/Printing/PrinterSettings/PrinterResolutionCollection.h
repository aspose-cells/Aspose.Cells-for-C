#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PRTERRESCOLLE_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PRTERRESCOLLE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/collections/ArrayList.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrinterResolution.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class PrinterResolutionCollection :public Object, public IEnumerable
					{
					private:
						intrusive_ptr<ArrayList> _PrinterResolutions;/// = NEW ArrayList();
					public:
						PrinterResolutionCollection(intrusive_ptr<Array1D<PrinterResolution *>> array);

						int GetCount();
						int Add(intrusive_ptr<PrinterResolution> paperSource);
						intrusive_ptr<PrinterResolution> GetValue(int i);
						intrusive_ptr<IEnumerator> GetEnumerator();
						void Clear();
						void add_ref() {
							++ref_count_;
						}
						int release_ref() {
							return --ref_count_;
						}
					};
				}
			}
		}
	}
}
#endif