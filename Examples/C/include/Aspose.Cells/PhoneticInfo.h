#pragma once
#include "System/Object.h"
#include "PhoneticType.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "PhoneticAlignmentType.h"
#include "System/Int32.h"
#define STATIC_PHONETICINFO() 


namespace Aspose {
namespace Cells {
	class PhoneticInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 PhoneticInfo();
			Aspose::Cells::System::Byte Option;
			Aspose::Cells::System::Int32 FontId;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Sqref;
			Aspose::Cells::PhoneticAlignmentType GetAlignment();
			void SetAlignment(Aspose::Cells::PhoneticAlignmentType value);
			Aspose::Cells::PhoneticType GetPhoneticType();
			void SetPhoneticType(Aspose::Cells::PhoneticType value);
		public:
			virtual ~PhoneticInfo();
	};

}

}
