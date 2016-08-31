#pragma once
#include "LineSpaceSizeType.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_SPACESIZE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class SpaceSize : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Drawing::Texts::LineSpaceSizeType Type;
			Aspose::Cells::System::Int32 Size;
			void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::SpaceSize> source);
			 SpaceSize();
		public:
			virtual ~SpaceSize();
	};

}

}

}

}
