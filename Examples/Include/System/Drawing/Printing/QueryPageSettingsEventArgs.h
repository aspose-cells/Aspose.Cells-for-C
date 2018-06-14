#ifndef _SYSTEM_DRAWING_PRINTING_QUERYPAGESETTINGSEVENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_QUERYPAGESETTINGSEVENTARGS_H_

#include "System/Object.h"
#include "PrintEventArgs.h"
#include "PageSettings.h" 

using namespace Aspose::Cells::System; 
namespace Aspose {
	namespace Cells {
		namespace System {
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
