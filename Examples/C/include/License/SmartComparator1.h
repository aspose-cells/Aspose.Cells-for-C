#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/IO/MemoryStream.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/IO/Stream.h"
#define STATIC_SMARTCOMPARATOR1() 


namespace Aspose {
namespace License {
namespace Hackers {
	class SmartComparator1 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 SmartComparator1(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dummyParam);
			void DummyMethod1(Aspose::Cells::System::Int32 dummyParam1 , Aspose::Cells::System::Int32 dummyParam2 , bool dummyParam3);
			Aspose::Cells::System::Int32 DummyMethod2(Aspose::Cells::System::Int32 dummyParam);
			bool AddBuffer1(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> dummyParam1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer1 , Aspose::Cells::System::Int32 dummyParam2);
			bool GetDummyField1();
			void SetDummyField1(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetDummyField2();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetBuffer1Int();
			void SetBuffer1Int(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> value);
			bool mDummyField1;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mDummyField2;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mBuffer1Int;
			 SmartComparator1();
		public:
			virtual ~SmartComparator1();
	};

}

}

}
