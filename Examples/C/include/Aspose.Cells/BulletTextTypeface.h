#pragma once
#include "System/Object.h"
#include "TextTypefaceType.h"
#include "TextTypeface.h"
#define STATIC_BULLETTEXTTYPEFACE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class BulletTextTypeface : public Aspose::Cells::Drawing::Texts::TextTypeface
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::TextTypefaceType GetType();
			 BulletTextTypeface();
		public:
			virtual ~BulletTextTypeface();
	};

}

}

}

}
