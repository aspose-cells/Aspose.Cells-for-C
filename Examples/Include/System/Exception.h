#ifndef _SYSTEM_EXCEPTION_H_
#define _SYSTEM_EXCEPTION_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_EXCEPTION_H_
