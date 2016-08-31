#pragma once
#include "System/Object.h"
#include "TextTypefaceType.h"
#include "TextTypeface.h"
#define STATIC_COMPLEXSCRIPTTEXTTYPEFACE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class ComplexScriptTextTypeface : public Aspose::Cells::Drawing::Texts::TextTypeface
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::TextTypefaceType GetType();
			 ComplexScriptTextTypeface();
		public:
			virtual ~ComplexScriptTextTypeface();
	};

}

}

}

}
