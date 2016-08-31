#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
#include "System/Int64.h"
//#include "System/Int32.h"
#define STATIC_VENTURELICENSER() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API VentureLicenser : public Aspose::Cells::System::Object
#else	class VentureLicenser : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj);
			VentureLicenser(
				Aspose::Cells::System::Int64 value1 = 0x158AC192158AC192L,
				Aspose::Cells::System::Int64 value2 = 0x3FB4D0243FB4D024L,
				Aspose::Cells::System::Int64 value3 = 0x2F4379D82F4379D8L,
				Aspose::Cells::System::Int64 value4 = 0x5E71AC8F5E71AC8FL);

			Aspose::Cells::System::Int64 Value1;
			Aspose::Cells::System::Int64 Value2;
			Aspose::Cells::System::Int64 Value3;
			Aspose::Cells::System::Int64 Value4;
			//VentureLicenser();
		public:
			virtual ~VentureLicenser();
	};

}

}
