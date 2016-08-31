#pragma once
#include "System/Object.h"
#include "Style.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_DXFCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DxfCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class DxfCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::WorksheetCollection* m_sheets;
			 DxfCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void Collection();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddRead(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(Aspose::Cells::System::Int32 index);
			 DxfCollection();
		public:
			virtual ~DxfCollection();
	};

}

}
