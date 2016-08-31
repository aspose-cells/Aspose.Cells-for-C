#pragma once
#include "SmartTagProperty.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_SMARTTAGPROPERTYCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTagPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class SmartTagPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Markup::SmartTagProperty> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagProperty> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTagPropertyCollection> source);
			 SmartTagPropertyCollection();
		public:
			virtual ~SmartTagPropertyCollection();
	};

}

}

}
