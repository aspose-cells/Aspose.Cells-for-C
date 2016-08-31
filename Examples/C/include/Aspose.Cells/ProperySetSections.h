#pragma once
#include "PropertySetSection.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_PROPERYSETSECTIONS() 


namespace Aspose {
namespace Ss {
	class ProperySetSections : public Aspose::Cells::System::Collections::ArrayList
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Ss::PropertySetSection> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Ss::PropertySetSection> value);
			 ProperySetSections();
		public:
			virtual ~ProperySetSections();
	};

}

}
