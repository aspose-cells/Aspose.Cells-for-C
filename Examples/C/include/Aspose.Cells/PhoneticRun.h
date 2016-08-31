#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_PHONETICRUN() 


namespace Aspose {
namespace Cells {
	class PhoneticRun : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 StartIndex;
			Aspose::Cells::System::Int32 Length;
			intrusive_ptr<Aspose::Cells::System::String> Value;
			 PhoneticRun();
		public:
			virtual ~PhoneticRun();
	};

}

}
