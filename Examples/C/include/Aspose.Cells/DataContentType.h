#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#define STATIC_DATACONTENTTYPE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataContentType : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool IsDefault;
			intrusive_ptr<Aspose::Cells::System::String> Extension;
			intrusive_ptr<Aspose::Cells::System::String> PartName;
			intrusive_ptr<Aspose::Cells::System::String> ContentType;
			 DataContentType();
			 DataContentType(bool isDefault , intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType , intrusive_ptr<Aspose::Cells::System::String> extension);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
		public:
			virtual ~DataContentType();
	};

}

}

}
