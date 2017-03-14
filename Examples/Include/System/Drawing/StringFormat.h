#ifndef _SYSTEM_DRAWING_STRINGFORMAT_H_
#define _SYSTEM_DRAWING_STRINGFORMAT_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Exception.h"
#include "System/Drawing/StringFormatFlags.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API StringFormat : public Object, public ICloneable, public IDisposable
	{
		ObjectPtr Clone()
		{
			throw Exception("StringFormat.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("StringFormat.Dispose NotSupport");
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
#endif
