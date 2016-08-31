#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_URLHELPER() 


namespace Aspose {
namespace Cells {
namespace Helper {
	class UrlHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsHRef(intrusive_ptr<Aspose::Cells::System::String> picPath);
			static intrusive_ptr<Aspose::Cells::System::String> ToRelTarget(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> FromRelTarget(intrusive_ptr<Aspose::Cells::System::String> target);
			static intrusive_ptr<Aspose::Cells::System::String> UrlEncode(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> UrlDecode(intrusive_ptr<Aspose::Cells::System::String> str);
			 UrlHelper();
		public:
			virtual ~UrlHelper();
	};

}

}

}
