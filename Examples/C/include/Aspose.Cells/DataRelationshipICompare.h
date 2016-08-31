#pragma once
#include "System/Object.h"
#include "System/Collections/IComparer.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_DATARELATIONSHIPICOMPARE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataRelationshipICompare : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2);
			 DataRelationshipICompare();
		public:
			virtual ~DataRelationshipICompare();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
