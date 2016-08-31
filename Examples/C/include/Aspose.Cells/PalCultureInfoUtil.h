#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Globalization/CultureInfo.h"
#include "CountryCode.h"
//#include "System/Int32.h"
#define STATIC_PALCULTUREINFOUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalCultureInfoUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo(Aspose::Cells::System::Int16 code);
			static intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfoByCountryCode(Aspose::Cells::CountryCode cc);
			 PalCultureInfoUtil();
		public:
			virtual ~PalCultureInfoUtil();
	};

}

}

}

}
