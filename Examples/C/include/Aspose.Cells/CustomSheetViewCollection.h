#pragma once
#include "System/Object.h"
#include "CustomSheetView.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_CUSTOMSHEETVIEWCOLLECTION() 


namespace Aspose {
namespace Cells {
	class CustomSheetViewCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			intrusive_ptr<Aspose::Cells::CustomSheetView> GetIndexObject(Aspose::Cells::System::Int32 index);
			 CustomSheetViewCollection();
		public:
			virtual ~CustomSheetViewCollection();
	};

}

}
