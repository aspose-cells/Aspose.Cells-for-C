#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_ALRUNSRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ALRunsRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ALRunsRecord();
			Aspose::Cells::System::Int32 SetTextFormatting(Aspose::Cells::System::Int32 textLength , Aspose::Cells::System::Int32 fontIndex , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> textCharsList);
		public:
			virtual ~ALRunsRecord();
	};

}

}

}
