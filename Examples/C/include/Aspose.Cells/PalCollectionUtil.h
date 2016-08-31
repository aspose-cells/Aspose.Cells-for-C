#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Collections/ICollection.h"
//#include "System/Array.h"
#include "System/Double.h"
#include "System/Collections/ArrayList.h"
//#include "System/Type.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/Collections/Specialized/CollectionsUtil.h"
#define STATIC_PALCOLLECTIONUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalCollectionUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> NewArrayList(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> values);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> ToDoubleArray(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static intrusive_ptr<Aspose::Cells::System::Object> GetSyncRoot(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> c);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CreateCaseInsensitiveHashtable();
			 PalCollectionUtil();
		public:
			virtual ~PalCollectionUtil();
	};

}

}

}

}
