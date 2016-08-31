#pragma once
#include "System/Object.h"
#include "System/Int64.h"
#define STATIC_VENTURELICENSE() 


namespace Aspose {
namespace Cells {
	class VentureLicense : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> LicenseState;
			intrusive_ptr<Aspose::Cells::System::Object> Watermark;
			Aspose::Cells::System::Int64 HashValue;
			 VentureLicense();
		public:
			virtual ~VentureLicense();
	};

}

}
