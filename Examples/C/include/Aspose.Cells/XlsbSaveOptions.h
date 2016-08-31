#pragma once
#include "SaveOptions.h"
#include "SaveFormat.h"
#include "System/Object.h"
#define STATIC_XLSBSAVEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API XlsbSaveOptions : public Aspose::Cells::SaveOptions
#else	class XlsbSaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
	public:

			 XlsbSaveOptions();
			 XlsbSaveOptions(Aspose::Cells::SaveFormat saveFormat);
			 XlsbSaveOptions(intrusive_ptr<Aspose::Cells::SaveOptions> options);
		public:
			virtual ~XlsbSaveOptions();
	};

}

}
