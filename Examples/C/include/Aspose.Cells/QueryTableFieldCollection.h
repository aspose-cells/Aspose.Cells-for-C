#pragma once
#include "QueryTableField.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_QUERYTABLEFIELDCOLLECTION() 


namespace Aspose {
namespace Cells {
	class QueryTableFieldCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::QueryTableField> field);
			intrusive_ptr<Aspose::Cells::QueryTableField> GetIndexObject(Aspose::Cells::System::Int32 index);
			 QueryTableFieldCollection();
		public:
			virtual ~QueryTableFieldCollection();
	};

}

}
