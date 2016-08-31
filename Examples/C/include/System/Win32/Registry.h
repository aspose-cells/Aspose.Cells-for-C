#ifndef _SYSTEM_WIN32_REGISTRY_H_
#define _SYSTEM_WIN32_REGISTRY_H_

#include "System/Object.h"
#include "System/Win32/RegistryKey.h"

using namespace Aspose::Cells::System;



namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Win32 {
				class ASPOSE_CELLS_API Registry : public Object
				{
				private:

				protected:

				public:
					static intrusive_ptr<RegistryKey> LocalMachine;
				};
			}
		}
	}
}
#endif//_SYSTEM_WIN32_REGISTRY_H_