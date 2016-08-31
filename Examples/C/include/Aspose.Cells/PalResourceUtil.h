#ifndef _PAL_RESOURCEUTIL_H_
#define _PAL_RESOURCEUTIL_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalResourceUtil : public Object
	{
	private:

			void Init_Vars();
	public:

		static StreamPtr GetFontZipStream();
		static intrusive_ptr<Array1D<Byte>> GetSharedUser();
		static intrusive_ptr<Array1D<Byte>> GetTheme2007();
		static intrusive_ptr<Array1D<Byte>> GetOleData();
		static intrusive_ptr<Array1D<Byte>> GetPdfHatchData();
		static intrusive_ptr<Array1D<Byte>> GetPdfDestOutputProfile();
		static intrusive_ptr<Array1D<Byte>> GetXmlCharType();
		static StreamPtr GetIconImagesZipStream();
		static StreamPtr GetGeo1TtfStream();
		static StreamPtr GetNoImageStream();
		static intrusive_ptr<Array1D<Byte>> GetNoImageBytes();
		static StreamPtr GetResourceStream(String fileName);
		static StreamPtr GetResourceStream(UInt16 id);
			PalResourceUtil();
		~PalResourceUtil();
	};

}

}

}

}
#endif //_PAL_RESOURCEUTIL_H_