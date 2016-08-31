#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/String.h"
#define STATIC_CUSTOMPROPERTY() 


namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomProperty : public Aspose::Cells::System::Object
#else	class CustomProperty : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_name;
			intrusive_ptr<Aspose::Cells::System::Object> m_value;
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			void SetStringValue(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::String> value);
			void Copy(intrusive_ptr<Aspose::Cells::Properties::CustomProperty> source);
			 CustomProperty();
		public:
			virtual ~CustomProperty();
	};

}

}

}
