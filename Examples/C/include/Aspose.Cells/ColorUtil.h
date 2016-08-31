#pragma once
//#include "System/MidpointRounding.h"
#include "System/Array1D.h"
//#include "System/Math.h"
//#include "System/Byte.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#include "System/Object.h"
#define STATIC_COLORUTIL() 

namespace Aspose {
namespace Cells {
namespace StyleObject {
class HSBColor;
class HSLColor;
}
}
}

namespace Aspose {
namespace Cells {
namespace StyleObject {
	class ColorUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertTint(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double tint);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertShade(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double shade);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> CellColorTint(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double tint);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertAlpha(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double alpha);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertAlphaMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double alpha);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertAlphaOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double alpha);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertRed(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double red);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertRedMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double red);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertRedOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double red);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertGreen(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double green);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertGreenMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double green);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertGreenOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double green);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertBlue(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double blue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertBlueMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double blue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertBlueOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double blue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertComp(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertInv(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static Aspose::Cells::System::Double SRGBtoSCRGB(Aspose::Cells::System::Int32 srgbValue);
			static Aspose::Cells::System::Int32 SCRGBtoSRGB(Aspose::Cells::System::Double scrgbValue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertHue(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double hue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertHueMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double hue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertHueOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double hue);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertSat(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double saturation);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertSatMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double saturation);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertSatOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double saturation);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertLum(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double luminance);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertLumMod(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double luminance);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertLumOff(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double luminance);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertGamma(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertInvGamma(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertGray(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::StyleObject::HSBColor> RGBtoHSB(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::StyleObject::HSLColor> RGBtoHSL(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> HSLtoRGB(intrusive_ptr<Aspose::Cells::StyleObject::HSLColor> hslColor);
			 ColorUtil();
		public:
			virtual ~ColorUtil();
	};

}

}

}
