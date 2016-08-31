#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Drawing/FontStyle.h"
#include "System/Single.h"
#include "System/Collections/ArrayList.h"
#define STATIC_AUTOFITTERFONTSTRING() 


namespace Aspose {
namespace Cells {
	class AutoFitterFontString : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::String* FontName;
			Aspose::Cells::System::Single Size;
			Aspose::Cells::System::Drawing::FontStyle FontStyle;
			Aspose::Cells::System::Collections::ArrayList* Arrs;
			 AutoFitterFontString();
		public:
			virtual ~AutoFitterFontString();
	};

}

}
