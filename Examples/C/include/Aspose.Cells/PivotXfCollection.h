#pragma once
#include "System/Object.h"
#include "Style.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTXFCOLLECTION() 

namespace Aspose {
namespace Cells {
class Font;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotXfCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
			bool BordersIsEqual(intrusive_ptr<Aspose::Cells::Style> s1 , intrusive_ptr<Aspose::Cells::Style> s2);
			bool FontIsEqual(intrusive_ptr<Aspose::Cells::Font> f1 , intrusive_ptr<Aspose::Cells::Font> f2);
	public:

			Aspose::Cells::WorksheetCollection* m_sheets;
			 PivotXfCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Style> value);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddRead(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			 PivotXfCollection();
		public:
			virtual ~PivotXfCollection();
	};

}

}

}
