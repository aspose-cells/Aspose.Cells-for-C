#pragma once
#include "System/String.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_IDIGITSCALCULATOR() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class IDigitsCalculator : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append , bool negative) = 0;
			virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , Aspose::Cells::System::Char c) = 0;
			virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , intrusive_ptr<Aspose::Cells::System::String> extend) = 0;
		public:
	};

}

}

}

}
