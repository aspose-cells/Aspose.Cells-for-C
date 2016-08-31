#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "DataBindingLoadMode.h"
#include "System/String.h"
#define STATIC_XMLDATABINDING() 


namespace Aspose {
namespace Cells {
	class XmlDataBinding : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 m_connectionID;
			intrusive_ptr<Aspose::Cells::System::String> m_dataBindingName;
			bool m_isFileBinding;
			intrusive_ptr<Aspose::Cells::System::String> m_FileBindingName;
			Aspose::Cells::DataBindingLoadMode m_loadMode;
			intrusive_ptr<Aspose::Cells::System::String> GetDataBindingName();
			void SetDataBindingName(intrusive_ptr<Aspose::Cells::System::String> value);
			 XmlDataBinding();
		public:
			virtual ~XmlDataBinding();
	};

}

}
