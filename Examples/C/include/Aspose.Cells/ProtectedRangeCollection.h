#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "ProtectedRange.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PROTECTEDRANGECOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ProtectedRangeCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ProtectedRangeCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_Sheet;
	public:

			 ProtectedRangeCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::ProtectedRange> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::ProtectedRange> range);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::CellArea> ca);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cellAreaList);
			void Copy(intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> source);
			 ProtectedRangeCollection();
		public:
			virtual ~ProtectedRangeCollection();
	};

}

}
