#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "RichText.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PHONETICSTRING() 

namespace Aspose {
namespace Cells {
class PhoneticSettings;
}
}

namespace Aspose {
namespace Cells {
	class PhoneticString : public Aspose::Cells::RichText
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _Block;
			intrusive_ptr<Aspose::Cells::PhoneticSettings> _PhoneticSettings;
			intrusive_ptr<Aspose::Cells::PhoneticSettings> GetPhoneticSettings();
			Aspose::Cells::System::Int32 GetFontId();
			Aspose::Cells::System::Byte GetOption();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBiffBlock();
			 PhoneticString(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formatRuns , intrusive_ptr<Aspose::Cells::System::Object> phoneticSettings);
			 virtual bool IsString();
			 virtual bool IsRichText();
			 virtual bool IsPhoneticText();
			 PhoneticString();
		public:
			virtual ~PhoneticString();
	};

}

}
