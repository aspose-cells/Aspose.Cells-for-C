#pragma once
//#include "System/StringHelperPal.h"
//#include "System/InvalidOperationException.h"
#include "System/IO/Stream.h"
#include "System/Object.h"
//#include "System/Reflection/Assembly.h"
#include "System/String.h"
//#include "System/ArgumentNullException.h"
#define STATIC_LICENSE() 


namespace Aspose {
namespace Cells {
#ifdef WIN32
	class ASPOSE_CELLS_API License : public Aspose::Cells::System::Object
#else	
	class License : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 License();
			void SetLicense(intrusive_ptr<Aspose::Cells::System::String> licenseName);
			void SetLicense(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
		public:
			virtual ~License();
	};

}

}
