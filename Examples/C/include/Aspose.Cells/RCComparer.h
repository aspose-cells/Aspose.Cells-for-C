#pragma once
#include "System/Object.h"
#include "System/Collections/IComparer.h"
#include "System/Int32.h"
#define STATIC_RCCOMPARER() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
	class RCComparer : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> x , intrusive_ptr<Aspose::Cells::System::Object> y);
			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::CellArea> x , intrusive_ptr<Aspose::Cells::CellArea> y);
			 RCComparer();
		public:
			virtual ~RCComparer();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
