#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#define STATIC_REFSTRING() 


namespace Aspose {
namespace Cells {
	class RefString : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 RefString();
			 RefString(intrusive_ptr<Aspose::Cells::System::String> value , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::String> Value;
			Aspose::Cells::System::Int32 Count;
			Aspose::Cells::System::Int32 Index;
			 virtual bool IsString();
			 virtual bool IsRichText();
			 virtual bool IsPhoneticText();
		public:
			virtual ~RefString();
	};

}

}
