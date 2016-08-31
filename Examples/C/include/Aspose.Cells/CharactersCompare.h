#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/IComparer.h"
#define STATIC_CHARACTERSCOMPARE() 


namespace Aspose {
namespace Cells {
namespace Record {
	class CharactersCompare : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> x , intrusive_ptr<Aspose::Cells::System::Object> y);
			 CharactersCompare();
		public:
			virtual ~CharactersCompare();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
