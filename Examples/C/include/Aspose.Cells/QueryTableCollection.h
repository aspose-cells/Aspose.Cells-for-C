#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "QueryTable.h"
#include "System/Int32.h"
#define STATIC_QUERYTABLECOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API QueryTableCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class QueryTableCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 QueryTableCollection();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::QueryTable> table);
			intrusive_ptr<Aspose::Cells::QueryTable> GetIndexObject(Aspose::Cells::System::Int32 index);
		public:
			virtual ~QueryTableCollection();
	};

}

}
