#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_SIMPLECOUNTER() 


namespace Aspose {
namespace Cells {
	class SimpleCounter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Count;
			 SimpleCounter();
		public:
			virtual ~SimpleCounter();
	};

}

}
