#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "OperatorType.h"
#include "System/Array1D.h"
#define STATIC_CFRECORD() 

namespace Aspose {
namespace Cells {
class FormatConditionInfo;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class CFRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CFRecord();
			void SetCondition(intrusive_ptr<Aspose::Cells::FormatConditionInfo> info);
			static Aspose::Cells::System::Byte OperatorTypeToValue(Aspose::Cells::OperatorType opr);
		public:
			virtual ~CFRecord();
	};

}

}

}
