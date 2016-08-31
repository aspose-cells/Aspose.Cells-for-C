#pragma once
#include "ThemeColorType.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_THEMECOLOR() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ThemeColor : public Aspose::Cells::System::Object
#else	class ThemeColor : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::ThemeColorType m_colorType;
			Aspose::Cells::System::Double m_Tint;
	public:

			 ThemeColor(Aspose::Cells::ThemeColorType type , Aspose::Cells::System::Double tint);
			Aspose::Cells::ThemeColorType GetColorType();
			void SetColorType(Aspose::Cells::ThemeColorType value);
			Aspose::Cells::System::Double GetTint();
			void SetTint(Aspose::Cells::System::Double value);
			 ThemeColor();
		public:
			virtual ~ThemeColor();
	};

}

}
