#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_ARRAYRECORD() 

namespace Aspose {
namespace Cells {
class ArrayFormula;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ArrayRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ArrayRecord();
			void SetArrayFormula(intrusive_ptr<Aspose::Cells::ArrayFormula> arrayFormula);
		public:
			virtual ~ArrayRecord();
	};

}

}

}
