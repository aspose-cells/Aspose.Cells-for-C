#ifndef _SYSTEM_WIN32_REGISTRYKEY_H_
#define _SYSTEM_WIN32_REGISTRYKEY_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"

#ifdef WIN32
#include <windows.h>
#pragma comment (lib, "Advapi32.lib")
#endif

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Win32 {
				class ASPOSE_CELLS_API RegistryKey : public Object, public IDisposable
				{
					private:
						HKEY _BaseKeyName;
						HKEY _SubKey;
						int _KeyType;

						intrusive_ptr<Array1D<String*>> QueryKey(HKEY hKey);
					public:
						RegistryKey(HKEY baseKey);
						RegistryKey(HKEY baseKey, HKEY subKey);
						virtual ~RegistryKey();
					public:
						intrusive_ptr<RegistryKey> OpenSubKey(StringPtr name, bool writable);
						intrusive_ptr<Array1D<String*>> GetValueNames();
						ObjectPtr GetValue(StringPtr key);
						void Dispose();
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

				};
			}
		}
	}
}
#endif//_SYSTEM_WIN32_REGISTRYKEY_H_