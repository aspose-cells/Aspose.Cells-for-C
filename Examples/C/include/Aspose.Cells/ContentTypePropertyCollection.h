#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "ContentTypeProperty.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CONTENTTYPEPROPERTYCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API ContentTypePropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ContentTypePropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> DefaultNameSpace;
			Aspose::Cells::System::Int32 MaxIndex;
			 ContentTypePropertyCollection();
			void Copy(intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> source);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::String> type);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> property);
			intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
		public:
			virtual ~ContentTypePropertyCollection();
	};

}

}

}
