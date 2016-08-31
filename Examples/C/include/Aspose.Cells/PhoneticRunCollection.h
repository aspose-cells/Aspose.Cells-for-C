#pragma once
#include "System/Object.h"
#include "PhoneticRun.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#define STATIC_PHONETICRUNCOLLECTION() 


namespace Aspose {
namespace Cells {
	class PhoneticRunCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			void Add(intrusive_ptr<Aspose::Cells::PhoneticRun> run);
			intrusive_ptr<Aspose::Cells::PhoneticRun> GetIndexObject(Aspose::Cells::System::Int32 index);
			 PhoneticRunCollection();
		public:
			virtual ~PhoneticRunCollection();
	};

}

}
