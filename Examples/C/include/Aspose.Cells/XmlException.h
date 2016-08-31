#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/ApplicationException.h"
#define STATIC_XMLEXCEPTION() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlException : public Aspose::Cells::System::ApplicationException
	{
	private:

			void Init_Vars();
	public:

			 XmlException(intrusive_ptr<Aspose::Cells::System::String> message);
			 XmlException();
		public:
			virtual ~XmlException();
	};

}

}

}
