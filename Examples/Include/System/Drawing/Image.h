#ifndef _SYSTEM_DRAWING_IMAGE_H_
#define _SYSTEM_DRAWING_IMAGE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Single.h"
#include "System/Exception.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Imaging/ImageFormat.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::IO;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing { 
	class ASPOSE_CELLS_API Image : public Object, public ICloneable, public IDisposable 
	{
	private:

	public:
		ObjectPtr Clone()
		{
			throw Exception("Image.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("Image.Dispose NotSupport");
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
