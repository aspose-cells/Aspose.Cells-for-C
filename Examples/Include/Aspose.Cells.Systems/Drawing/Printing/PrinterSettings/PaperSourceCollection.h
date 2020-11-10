#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PAPERSOURCECOLLECTIONN_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PAPERSOURCECOLLECTIONN_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/collections/ArrayList.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PaperSource.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class PaperSourceCollection :public Object, public IEnumerable
					{
					private:
						intrusive_ptr<ArrayList> _PaperSources;/// = NEW ArrayList();
					public:
						PaperSourceCollection(intrusive_ptr<Array1D<PaperSource *>> array);
						int GetCount();
						int Add(intrusive_ptr<PaperSource> paperSource);
						intrusive_ptr<PaperSource> GetValue(int i);
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