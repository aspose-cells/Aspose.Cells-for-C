#ifndef _SYSTEM_TEXT_PENDINGINFO_H_
#define _SYSTEM_TEXT_PENDINGINFO_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class PendingInfo : public Object
				{
				public:
					PendingInfo();
					virtual ~PendingInfo();

					int pendingNum;
					uint8_t* p_pendingStr;

					void AddPendingFlag(uint8_t info);
					void ResetPendingFlag();

				private:
					static const int MaxPendingLen = 10;


				};
			}
		}
	}
}

#endif//_SYSTEM_TEXT_PENDINGINFO_H_