#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "CustomProperty.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CUSTOMPROPERTYCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class CustomPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 CustomPropertyCollection();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Properties::CustomProperty> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Properties::CustomProperty> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			void Copy(intrusive_ptr<Aspose::Cells::Properties::CustomPropertyCollection> source);
		public:
			virtual ~CustomPropertyCollection();
	};

}

}

}
