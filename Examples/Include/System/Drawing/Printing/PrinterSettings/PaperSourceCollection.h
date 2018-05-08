#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PAPERSOURCECOLLECTIONN_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PAPERSOURCECOLLECTIONN_H_

#include "System/Object.h"
#include "System/Collections/IEnumerable.h"
#include "System/Exception.h"
#include "System/Array1D.h"
#include "System/collections/ArrayList.h"
#include "System/Drawing/Printing/PaperSource.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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