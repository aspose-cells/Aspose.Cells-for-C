#pragma once
#include "System/Object.h"
#include "System/Collections/IComparer.h"
//#include "System/Char.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_STRINGORDINALIGNORECASECOMPARER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class StringOrdinalIgnoreCaseComparer : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 StringOrdinalIgnoreCaseComparer();
	public:

			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> a , intrusive_ptr<Aspose::Cells::System::Object> b);
			static intrusive_ptr<Aspose::Cells::System::Collections::IComparer> Default;
		public:
			virtual ~StringOrdinalIgnoreCaseComparer();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
