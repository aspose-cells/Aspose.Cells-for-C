#pragma once
#include "FilterColumn.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_FILTERCOLUMNCOLLECTION() 

namespace Aspose {
namespace Cells {
class AutoFilter;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FilterColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class FilterColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::AutoFilter* m_AutoFilter;
	public:

			intrusive_ptr<Aspose::Cells::AutoFilter> GetAutoFilter();
			 FilterColumnCollection(intrusive_ptr<Aspose::Cells::AutoFilter> m_AutoFilter);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::FilterColumn> GetByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::FilterColumn> GetIndexObject(Aspose::Cells::System::Int32 fieldIndex);
			intrusive_ptr<Aspose::Cells::FilterColumn> GetByFieldIndex(Aspose::Cells::System::Int32 fieldIndex);
			Aspose::Cells::System::Int32 AddRead(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
			void Copy(intrusive_ptr<Aspose::Cells::FilterColumnCollection> source);
			 FilterColumnCollection();
		public:
			virtual ~FilterColumnCollection();
	};

}

}
