#ifndef _SYSTEM_GLOBALIZATION_REGIONINFO_H_
#define _SYSTEM_GLOBALIZATION_REGIONINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Globalization {
				class ASPOSE_CELLS_API RegionInfo : public Object
				{
				public:
					virtual ~RegionInfo();
					static intrusive_ptr<RegionInfo> GetCurrentRegion();
					StringPtr GetThreeLetterISORegionName();

				private:
					RegionInfo(CultureInfoPtr cultureInfo);
					CultureInfoPtr _cultureInfo;
				};
				typedef intrusive_ptr<RegionInfo> RegionInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_REGIONINFO_H_