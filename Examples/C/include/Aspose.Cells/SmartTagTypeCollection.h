#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#include "SmartTagType.h"
#define STATIC_SMARTTAGTYPECOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Markup {
	class SmartTagTypeCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Markup::SmartTagType> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> url);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTagTypeCollection> source);
			Aspose::Cells::System::Int32 IndexOf(intrusive_ptr<Aspose::Cells::Markup::SmartTagType> type);
			 SmartTagTypeCollection();
		public:
			virtual ~SmartTagTypeCollection();
	};

}

}

}
