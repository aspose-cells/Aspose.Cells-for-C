#pragma once
#include "System/Object.h"
#include "CustomWorkbookView.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#define STATIC_CUSTOMWORKBOOKVIEWCOLLECTION() 


namespace Aspose {
namespace Cells {
	class CustomWorkbookViewCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CustomWorkbookView> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::CustomWorkbookView> cView);
			 CustomWorkbookViewCollection();
		public:
			virtual ~CustomWorkbookViewCollection();
	};

}

}
