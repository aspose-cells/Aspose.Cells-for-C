#pragma once
#include "System/Object.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_COLLECTIONUTIL() 

namespace Aspose {
namespace Cells {
namespace Collections {
class IIndexedCollection;
class IIndexedList;
}
}
}

namespace Aspose {
namespace Cells {
namespace Collections {
	class CollectionUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::Collections::IIndexedCollection> collection , Aspose::Cells::System::Int32 searchedIndex , Aspose::Cells::System::Int32 rawPos);
			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::Collections::IIndexedCollection> collection , Aspose::Cells::System::Int32 searchedIndex , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::Collections::IIndexedList> list , Aspose::Cells::System::Int32 searchedIndex , Aspose::Cells::System::Int32 rawPos);
			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::Collections::IIndexedList> list , Aspose::Cells::System::Int32 searchedIndex , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 CollectionUtil();
		public:
			virtual ~CollectionUtil();
	};

}

}

}
