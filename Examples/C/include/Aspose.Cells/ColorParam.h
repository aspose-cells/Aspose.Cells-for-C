#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "ColorParamType.h"
#define STATIC_COLORPARAM() 


namespace Aspose {
namespace Cells {
namespace StyleObject {
	class ColorParam : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 ColorParam(Aspose::Cells::StyleObject::ColorParamType type , Aspose::Cells::System::Int32 value);
			 ColorParam();
			Aspose::Cells::StyleObject::ColorParamType Type;
			Aspose::Cells::System::Int32 Value;
		public:
			virtual ~ColorParam();
	};

}

}

}
