#pragma once
//#include "System/MidpointRounding.h"
//#include "System/Decimal.h"
//#include "System/Single.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_PALDOUBLE() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalDouble : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalDouble();
	public:

			static Aspose::Cells::System::Int32 GetHashCode(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Double Round(Aspose::Cells::System::Double dv , Aspose::Cells::System::Int32 digits);
			static Aspose::Cells::System::Double RoundUpDown(Aspose::Cells::System::Double dv , Aspose::Cells::System::Int32 digits , bool up);
			static Aspose::Cells::System::Double RoundUp(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 precision);
			static Aspose::Cells::System::Double ParseDouble(intrusive_ptr<Aspose::Cells::System::String> val);
		public:
			virtual ~PalDouble();
	};

}

}

}

}
