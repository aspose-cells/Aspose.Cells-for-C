#pragma once
#include "System/Object.h"
#include "XFExtensionType.h"
#define STATIC_XFEXTENSION() 


namespace Aspose {
namespace Cells {
	class XFExtension : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::XFExtensionType Type;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			 XFExtension();
		public:
			virtual ~XFExtension();
	};

}

}
