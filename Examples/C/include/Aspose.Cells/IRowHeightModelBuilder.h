#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#define STATIC_IROWHEIGHTMODELBUILDER() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IRowHeightModelBuilder : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Double GetPixelPerTwips() = 0;
			virtual void SetPixelPerTwips(Aspose::Cells::System::Double value) = 0;
			virtual Aspose::Cells::System::Int32 ToModelUnit(Aspose::Cells::System::Int32 rawHeight) = 0;
			virtual Aspose::Cells::System::Int32 ToModelUnitByPixel(Aspose::Cells::System::Int32 pixel) = 0;
			virtual Aspose::Cells::System::Int32 ToTwips(Aspose::Cells::System::Int32 modelUnit) = 0;
			virtual Aspose::Cells::System::Double ToPoint(Aspose::Cells::System::Int32 modelUnit) = 0;
			virtual Aspose::Cells::System::Double ToInch(Aspose::Cells::System::Int32 modelUnit) = 0;
			virtual Aspose::Cells::System::Int32 ToPixel(Aspose::Cells::System::Int32 modelUnit) = 0;
		public:
	};

}

}

}
