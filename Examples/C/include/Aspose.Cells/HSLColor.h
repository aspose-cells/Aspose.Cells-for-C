#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#define STATIC_HSLCOLOR() 


namespace Aspose {
namespace Cells {
namespace StyleObject {
	class HSLColor : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double hue;
			Aspose::Cells::System::Double saturation;
			Aspose::Cells::System::Double luminance;
	public:

			static intrusive_ptr<Aspose::Cells::StyleObject::HSLColor> Empty;
			 HSLColor();
			 HSLColor(Aspose::Cells::System::Double h , Aspose::Cells::System::Double s , Aspose::Cells::System::Double l);
			 HSLColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			Aspose::Cells::System::Double GetHue();
			void SetHue(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetSaturation();
			void SetSaturation(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetLuminance();
			void SetLuminance(Aspose::Cells::System::Double value);
			 virtual Aspose::Cells::System::Int32 GetHashCode();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
		public:
			virtual ~HSLColor();
	};

}

}

}
