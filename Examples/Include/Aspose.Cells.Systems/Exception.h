#ifndef _SYSTEM_EXCEPTION_H_
#define _SYSTEM_EXCEPTION_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API Exception : public Object
			{
			public:
				Exception();
				Exception(const char* message);
				Exception(StringPtr message);
				Exception(StringPtr message, intrusive_ptr<Exception> innerException);
				virtual ~Exception();

				virtual StringPtr GetMessageExp();
				virtual StringPtr ToString();
				virtual StringPtr GetStackTrace();
				void SetErrorCode(int hr);
				int GetHResult();

			protected:
				StringPtr _message;
				int _HResult;
				void SetHResult(int value);

			private:
				intrusive_ptr<Exception> _innerException;
				void Init();

			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_EXCEPTION_H_
