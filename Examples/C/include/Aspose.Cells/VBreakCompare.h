#pragma once
#include "System/Object.h"
#include "System/Collections/IComparer.h"
#include "System/Int32.h"
#define STATIC_VBREAKCOMPARE() 


namespace Aspose {
namespace Cells {
namespace Record {
	class VBreakCompare : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> a , intrusive_ptr<Aspose::Cells::System::Object> b);
			 VBreakCompare();
		public:
			virtual ~VBreakCompare();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
