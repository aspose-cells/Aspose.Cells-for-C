#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PALETTEHELPER() 

namespace Aspose {
namespace Cells {
class Workbook;
class Font;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class PaletteHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GatherUniqueColors(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static void GatherColors(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static void GatherDxfColors(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static void GatherColors(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static void AddColor(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			 PaletteHelper();
		public:
			virtual ~PaletteHelper();
	};

}

}
