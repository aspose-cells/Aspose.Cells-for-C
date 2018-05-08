#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PRTERRESCOLLE_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_PRTERRESCOLLE_H_

#include "System/Object.h"
#include "System/Collections/IEnumerable.h"
#include "System/Exception.h"
#include "System/Array1D.h"
#include "System/collections/ArrayList.h"
#include "System/Drawing/Printing/PrinterResolution.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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