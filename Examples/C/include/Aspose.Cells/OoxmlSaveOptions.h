#pragma once
#include "System/Object.h"
#include "SaveOptions.h"
#include "SaveFormat.h"
#define STATIC_OOXMLSAVEOPTIONS() 

namespace Aspose {
namespace Cells {
class LightCellsDataProvider;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API OoxmlSaveOptions : public Aspose::Cells::SaveOptions
#else	class OoxmlSaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
			bool m_CalcuateZoom;
	public:

			 OoxmlSaveOptions();
			 OoxmlSaveOptions(Aspose::Cells::SaveFormat saveFormat);
			 OoxmlSaveOptions(Aspose::Cells::SaveFormat saveFormat , intrusive_ptr<Aspose::Cells::SaveOptions> options);
			 OoxmlSaveOptions(intrusive_ptr<Aspose::Cells::SaveOptions> options);
			bool GetExportCellName();
			void SetExportCellName(bool value);
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> GetLightCellsDataProvider();
			void SetLightCellsDataProvider(intrusive_ptr<Aspose::Cells::LightCellsDataProvider> value);
			bool GetUpdateZoom();
			void SetUpdateZoom(bool value);
		public:
			virtual ~OoxmlSaveOptions();
	};

}

}
