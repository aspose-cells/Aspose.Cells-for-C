#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Int64.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing::Imaging;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing {
namespace Imaging {
	class ASPOSE_CELLS_API EncoderParameter : public Object, public IDisposable
	{
		void Dispose()
		{
			throw Exception("EncoderParameter.Dispose NotSupport");
		}

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
}
#endif
