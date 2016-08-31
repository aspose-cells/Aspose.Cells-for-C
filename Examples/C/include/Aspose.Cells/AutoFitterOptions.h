#pragma once
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_AUTOFITTEROPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API AutoFitterOptions : public Aspose::Cells::System::Object
#else	class AutoFitterOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_AutoFitMergedCells;
			bool m_onlyAuto;
			bool m_IgnoreHidden;
			Aspose::Cells::System::Double m_MaxRowHeight;
	public:

			bool GetAutoFitMergedCells();
			void SetAutoFitMergedCells(bool value);
			bool GetOnlyAuto();
			void SetOnlyAuto(bool value);
			bool GetIgnoreHidden();
			void SetIgnoreHidden(bool value);
			Aspose::Cells::System::Double GetMaxRowHeight();
			void SetMaxRowHeight(Aspose::Cells::System::Double value);
			bool IsWholeRow;
			bool InReadingXml;
			 AutoFitterOptions();
		public:
			virtual ~AutoFitterOptions();
	};

}

}
