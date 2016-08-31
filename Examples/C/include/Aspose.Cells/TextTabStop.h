#pragma once
#include "System/Double.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "TextTabAlignmentType.h"
#define STATIC_TEXTTABSTOP() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API TextTabStop : public Aspose::Cells::System::Object
#else	class TextTabStop : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 TextTabStop(Aspose::Cells::Drawing::Texts::TextTabAlignmentType tabAlignment , Aspose::Cells::System::Int32 tabPosition);
			Aspose::Cells::Drawing::Texts::TextTabAlignmentType _TabAlignment;
			Aspose::Cells::Drawing::Texts::TextTabAlignmentType GetTabAlignment();
			void SetTabAlignment(Aspose::Cells::Drawing::Texts::TextTabAlignmentType value);
			Aspose::Cells::System::Int32 _TabPositionEmu;
			Aspose::Cells::System::Double GetTabPosition();
			void SetTabPosition(Aspose::Cells::System::Double value);
			 TextTabStop();
		public:
			virtual ~TextTabStop();
	};

}

}

}

}
