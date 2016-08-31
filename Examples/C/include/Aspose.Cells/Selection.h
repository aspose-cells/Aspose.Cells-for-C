#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_SELECTION() 


namespace Aspose {
namespace Cells {
	class Selection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_paneId;
			Aspose::Cells::System::Int32 m_activeRow;
			Aspose::Cells::System::Int16 m_activeColumn;
			Aspose::Cells::System::Int16 m_activeIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_ranges;
	public:

			 Selection(Aspose::Cells::System::Int32 paneId);
			void SelectRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool removeOthers);
			void SetActiveCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Byte GetPaneId();
			void SetPaneId(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetAreas();
			void SetAreas(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			Aspose::Cells::System::Int32 GetActiveRow();
			void SetActiveRow(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetActiveColumn();
			void SetActiveColumn(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetActiveCell();
			Aspose::Cells::System::Int32 GetActiveIndex();
			void SetActiveIndex(Aspose::Cells::System::Int32 value);
			void Copy(intrusive_ptr<Aspose::Cells::Selection> source);
			 Selection();
		public:
			virtual ~Selection();
	};

}

}
