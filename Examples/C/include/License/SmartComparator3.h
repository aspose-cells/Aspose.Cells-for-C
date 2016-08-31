#pragma once
//#include "System/Int64.h"
#include "System/Array1D.h"
//#include "System/IO/MemoryStream.h"
//#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_SMARTCOMPARATOR3() 

namespace Aspose {
namespace License {
namespace Hackers {
class SmartComparator2;
}
}
}

namespace Aspose {
namespace License {
namespace Hackers {
	class SmartComparator3 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 SmartComparator3(intrusive_ptr<Aspose::License::Hackers::SmartComparator2> comparator2);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> PerformComparison2(Aspose::Cells::System::UInt32 dummyParam1 , Aspose::Cells::System::UInt32 dummyParam2);
			intrusive_ptr<Aspose::License::Hackers::SmartComparator2> GetComparator2();
			void SetComparator2(intrusive_ptr<Aspose::License::Hackers::SmartComparator2> value);
			intrusive_ptr<Aspose::License::Hackers::SmartComparator2> mComparator2;
			 SmartComparator3();
		public:
			virtual ~SmartComparator3();
	};

}

}

}
