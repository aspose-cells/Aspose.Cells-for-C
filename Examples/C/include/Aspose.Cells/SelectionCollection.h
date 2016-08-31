#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SELECTIONCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Selection;
}
}

namespace Aspose {
namespace Cells {
	class SelectionCollection : public Aspose::Cells::System::Collections::ArrayList
	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_sheet;
	public:

			 SelectionCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::Selection> GetPaneById(Aspose::Cells::System::Int32 paneId);
			Aspose::Cells::System::Byte GetActivePanId();
			void SetActivePanId(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetActiveSelectedRange();
			void SelectRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool removeOthers);
			intrusive_ptr<Aspose::Cells::System::String> GetAcitveCell();
			void SetAcitveCell(intrusive_ptr<Aspose::Cells::System::String> value);
			 SelectionCollection();
		public:
			virtual ~SelectionCollection();
	};

}

}
