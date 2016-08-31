#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/Int32.h"
#define STATIC_TEXTPROPSSTREAM() 


namespace Aspose {
namespace Cells {
namespace Record {
	class TextPropsStream : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 TextPropsStream();
			void Set(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> chain);
		public:
			virtual ~TextPropsStream();
	};

}

}

}
