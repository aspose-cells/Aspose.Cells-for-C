#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#define STATIC_SMARTTAGTYPE() 


namespace Aspose {
namespace Cells {
namespace Markup {
	class SmartTagType : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Uri;
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
	public:

			 SmartTagType(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name);
			 SmartTagType(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> url);
			intrusive_ptr<Aspose::Cells::System::String> GetUri();
			void SetUri(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> URL;
			 SmartTagType();
		public:
			virtual ~SmartTagType();
	};

}

}

}
