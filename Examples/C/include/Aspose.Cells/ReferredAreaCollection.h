#pragma once
#include "System/Object.h"
#include "ReferredArea.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_REFERREDAREACOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ReferredAreaCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ReferredAreaCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			bool m_Check;
	public:

			 ReferredAreaCollection(bool check);
			 ReferredAreaCollection();
			void AddInternal(intrusive_ptr<Aspose::Cells::ReferredArea> area);
			void Add(intrusive_ptr<Aspose::Cells::ReferredArea> area);
			intrusive_ptr<Aspose::Cells::ReferredArea> GetIndexObject(Aspose::Cells::System::Int32 index);
		public:
			virtual ~ReferredAreaCollection();
	};

}

}
