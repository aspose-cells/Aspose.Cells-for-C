#pragma once
#include "System/String.h"
#include "System/Byte.h"
#include "System/Drawing/Color.h"
#include "System/Object.h"
#define STATIC_PALCOLORUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalColorUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetTransparent();
			static intrusive_ptr<Aspose::Cells::System::String> GetName(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static bool IsEmpty(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static bool IsKnownColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static Aspose::Cells::System::Byte GetR(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static Aspose::Cells::System::Byte GetG(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static Aspose::Cells::System::Byte GetB(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static Aspose::Cells::System::Byte GetA(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c);
			static bool IsEqual(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color> c2);
			 PalColorUtil();
		public:
			virtual ~PalColorUtil();
	};

}

}

}

}
