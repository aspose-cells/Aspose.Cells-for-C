#pragma once
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#define STATIC_TOP10FILTER() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Top10Filter : public Aspose::Cells::System::Object
#else	class Top10Filter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_IsTop;
			bool m_IsPercent;
			Aspose::Cells::System::Int32 m_Items;
			intrusive_ptr<Aspose::Cells::System::Object> m_Criteria;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::Top10Filter> source);
			 Top10Filter();
			 Top10Filter(bool isTop , bool isPercent , Aspose::Cells::System::Int32 items);
			bool IsTop();
			void SetIsTop(bool value);
			bool IsPercent();
			void SetIsPercent(bool value);
			Aspose::Cells::System::Int32 GetItems();
			void SetItems(Aspose::Cells::System::Int32 value);
			void SetTop10Option(bool isTop , bool isPercent , Aspose::Cells::System::Int32 items);
			intrusive_ptr<Aspose::Cells::System::Object> GetCriteria();
			void SetCriteria(intrusive_ptr<Aspose::Cells::System::Object> value);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell);
		public:
			virtual ~Top10Filter();
	};

}

}
