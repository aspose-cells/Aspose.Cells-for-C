#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "ErrorCheckOption.h"
#define STATIC_ERRORCHECKOPTIONCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ErrorCheckOptionCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ErrorCheckOptionCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Worksheet* Sheet;
			 ErrorCheckOptionCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::ErrorCheckOption> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add();
			 ErrorCheckOptionCollection();
		public:
			virtual ~ErrorCheckOptionCollection();
	};

}

}
