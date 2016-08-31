#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "PhoneticAlignmentType.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
#include "PhoneticType.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Text/Encoding.h"
#define STATIC_PHONETICSETTINGS() 

namespace Aspose {
namespace Cells {
class PhoneticRunCollection;
}
}

namespace Aspose {
namespace Cells {
	class PhoneticSettings : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Byte Option;
			Aspose::Cells::System::Int32 FontId;
			intrusive_ptr<Aspose::Cells::PhoneticRunCollection> PhoneticRuns;
			Aspose::Cells::PhoneticAlignmentType GetAlignment();
			void SetAlignment(Aspose::Cells::PhoneticAlignmentType value);
			Aspose::Cells::PhoneticType GetPhoneticType();
			void SetPhoneticType(Aspose::Cells::PhoneticType value);
			 PhoneticSettings();
			void Load(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 cellValueLength);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> To(Aspose::Cells::System::Int32 cellValueLength);
		public:
			virtual ~PhoneticSettings();
	};

}

}
