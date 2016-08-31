#pragma once
#include "System/Object.h"
#include "SaveOptions.h"
#include "System/Int32.h"
#include "SaveFormat.h"
#define STATIC_XLSSAVEOPTIONS() 

namespace Aspose {
namespace Cells {
class LightCellsDataProvider;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API XlsSaveOptions : public Aspose::Cells::SaveOptions
#else	class XlsSaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
	public:

			 XlsSaveOptions();
			 XlsSaveOptions(Aspose::Cells::SaveFormat format);
			 XlsSaveOptions(intrusive_ptr<Aspose::Cells::SaveOptions> options);
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> GetLightCellsDataProvider();
			void SetLightCellsDataProvider(intrusive_ptr<Aspose::Cells::LightCellsDataProvider> value);
			bool IsXlt;
			bool IsTemplate();
			void SetIsTemplate(bool value);
			 virtual Aspose::Cells::System::Int32 GetThresholdForStyleCleanup();
		public:
			virtual ~XlsSaveOptions();
	};

}

}
