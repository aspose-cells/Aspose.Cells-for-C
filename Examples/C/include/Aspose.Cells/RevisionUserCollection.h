#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "RevisionUser.h"
#define STATIC_REVISIONUSERCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionUserCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			 RevisionUserCollection();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionUser> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Revisions::RevisionUser> u);
		public:
			virtual ~RevisionUserCollection();
	};

}

}

}
