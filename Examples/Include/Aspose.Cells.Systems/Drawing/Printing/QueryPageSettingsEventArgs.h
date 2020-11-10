#ifndef _SYSTEM_DRAWING_PRINTING_QUERYPAGESETTINGSEVENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_QUERYPAGESETTINGSEVENTARGS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "PrintEventArgs.h"
#include "PageSettings.h" 

using namespace Aspose::Cells::Systems; 
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class QueryPageSettingsEventArgs : public PrintEventArgs
					{
					private:
						intrusive_ptr<PageSettings>  pageSettings;
					public:
						QueryPageSettingsEventArgs(intrusive_ptr<PageSettings> pageSettings)
						{
							pageSettings = pageSettings;
						}
						intrusive_ptr<PageSettings>  GetPageSettings()
						{
							return pageSettings;
						}
					};
				}
			}
		}
	}
}
#endif
