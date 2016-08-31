#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_SMARTSUBTOTALINFO() 


namespace Aspose {
namespace Cells {
	class SmartSubtotalInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Label;
			Aspose::Cells::System::Int32 Position;
			bool RangeBorder;
			 SmartSubtotalInfo();
		public:
			virtual ~SmartSubtotalInfo();
	};

}

}
