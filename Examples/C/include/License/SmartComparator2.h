#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_SMARTCOMPARATOR2() 

namespace Aspose {
namespace License {
namespace Hackers {
class SmartComparator1;
}
}
}

namespace Aspose {
namespace License {
namespace Hackers {
	class SmartComparator2 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void DummyMethod3();
	public:

			 SmartComparator2(intrusive_ptr<Aspose::License::Hackers::SmartComparator1> dummyParam1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer2 , bool dummyParam2 , bool dummyParam3);
			bool DummyMethod1(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dummyParam1);
			bool DummyMethod2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dummyParam1 , intrusive_ptr<Aspose::Cells::System::String> dummyParam2);
			intrusive_ptr<Aspose::License::Hackers::SmartComparator1> AddComparator1(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dummyParam1 , intrusive_ptr<Aspose::License::Hackers::SmartComparator1> comparator1);
			void PerformComparison1(bool dummyParam1);
			void PassControlToComparator3(intrusive_ptr<Aspose::Cells::System::String> dummyParam1 , bool isDummy);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetBuffer2Stream();
			Aspose::Cells::System::Byte GetDummyProperty1();
			Aspose::Cells::System::Byte GetDummyProperty2();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetDummyField5();
			intrusive_ptr<Aspose::License::Hackers::SmartComparator1> GetDummyField6();
			intrusive_ptr<Aspose::License::Hackers::SmartComparator1> GetComparator1();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mBuffer2Stream;
			Aspose::Cells::System::Byte mDummyField1;
			Aspose::Cells::System::Byte mDummyField2;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mDummyField3;
			Aspose::Cells::System::Int32 mDummyField4;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mDummyField5;
			intrusive_ptr<Aspose::License::Hackers::SmartComparator1> mDummyField6;
			intrusive_ptr<Aspose::License::Hackers::SmartComparator1> mComparator1;
			 SmartComparator2();
		public:
			virtual ~SmartComparator2();
	};

}

}

}
