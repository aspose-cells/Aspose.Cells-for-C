#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "DateTimeGroupingType.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_MULTIPLEFILTERCOLLECTION() 

namespace Aspose {
namespace Cells {
class Cell;
class DateTimeGroupItem;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API MultipleFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class MultipleFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			bool m_MatchBlank;
	public:

			void RemoveDateFilter(Aspose::Cells::DateTimeGroupingType type , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			void RemoveFilter(intrusive_ptr<Aspose::Cells::System::String> filter);
			void Copy(intrusive_ptr<Aspose::Cells::MultipleFilterCollection> source);
			bool GetMatchBlank();
			void SetMatchBlank(bool value);
			intrusive_ptr<Aspose::Cells::System::String> CalendarType;
			intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::System::String> filter);
			void Add(intrusive_ptr<Aspose::Cells::DateTimeGroupItem> filter);
			void Add(Aspose::Cells::DateTimeGroupingType type , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day);
			void Add(Aspose::Cells::DateTimeGroupingType type , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::System::Object> o);
			 MultipleFilterCollection();
		public:
			virtual ~MultipleFilterCollection();
	};

}

}
