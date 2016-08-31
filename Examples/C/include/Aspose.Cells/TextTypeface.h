#pragma once
#include "System/Object.h"
#include "TextTypefaceType.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_TEXTTYPEFACE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class TextTypeface : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Cells::System::Byte PitchFamily;
			Aspose::Cells::System::Int32 Charset;
			intrusive_ptr<Aspose::Cells::System::String> Panose;
			 virtual Aspose::Cells::Drawing::Texts::TextTypefaceType GetType();
			void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> source);
			 TextTypeface();
		public:
			virtual ~TextTypeface();
	};

}

}

}

}
