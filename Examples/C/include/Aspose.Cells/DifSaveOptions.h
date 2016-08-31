#pragma once
#include "SaveOptions.h"
#include "System/Object.h"
#define STATIC_DIFSAVEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DifSaveOptions : public Aspose::Cells::SaveOptions
#else	class DifSaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
	public:

			 DifSaveOptions();
			 DifSaveOptions(intrusive_ptr<Aspose::Cells::SaveOptions> options);
		public:
			virtual ~DifSaveOptions();
	};

}

}
