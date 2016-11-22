#ifndef _SYSTEM_GLOBALIZATION_REGIONINFO_H_
#define _SYSTEM_GLOBALIZATION_REGIONINFO_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
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