#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#define STATIC_SMARTTAGPROPERTY() 


namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTagProperty : public Aspose::Cells::System::Object
#else	class SmartTagProperty : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::System::String> m_Value;
	public:

			 SmartTagProperty(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::String> value);
			 SmartTagProperty();
		public:
			virtual ~SmartTagProperty();
	};

}

}

}
