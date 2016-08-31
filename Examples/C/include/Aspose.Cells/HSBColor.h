#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#define STATIC_HSBCOLOR() 


namespace Aspose {
namespace Cells {
namespace StyleObject {
	class HSBColor : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double hue;
			Aspose::Cells::System::Double saturation;
			Aspose::Cells::System::Double brightness;
	public:

			static intrusive_ptr<Aspose::Cells::StyleObject::HSBColor> Empty;
			 HSBColor();
			 HSBColor(Aspose::Cells::System::Double h , Aspose::Cells::System::Double s , Aspose::Cells::System::Double b);
			Aspose::Cells::System::Double GetHue();
			void SetHue(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetSaturation();
			void SetSaturation(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetBrightness();
			void SetBrightness(Aspose::Cells::System::Double value);
			 virtual Aspose::Cells::System::Int32 GetHashCode();
		public:
			virtual ~HSBColor();
	};

}

}

}
