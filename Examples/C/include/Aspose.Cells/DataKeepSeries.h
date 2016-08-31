#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAKEEPSERIES() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepSeries : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _ExtLst;
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetInternalExtLst();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetExtLst();
			 DataKeepSeries();
		public:
			virtual ~DataKeepSeries();
	};

}

}

}
