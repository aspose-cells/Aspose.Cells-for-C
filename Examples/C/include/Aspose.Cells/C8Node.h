#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#define STATIC_C8NODE() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class C8Node : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 C8Node(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> c8);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> C8;
			bool UnCalculate;
			 C8Node();
		public:
			virtual ~C8Node();
	};

}

}

}
