#pragma once
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_XMLMAP() 

namespace Aspose {
namespace Cells {
class XmlDataBinding;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API XmlMap : public Aspose::Cells::System::Object
#else	class XmlMap : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool m_isAppend;
			bool m_isAutoFit;
			Aspose::Cells::System::Int32 m_ID;
			intrusive_ptr<Aspose::Cells::System::String> m_name;
			bool m_isPreserveFormat;
			bool m_isPreserveSortAFLayout;
			intrusive_ptr<Aspose::Cells::System::String> m_rootElement;
			intrusive_ptr<Aspose::Cells::System::String> m_schemaID;
			bool m_isShowImportExportValidationErrors;
			intrusive_ptr<Aspose::Cells::XmlDataBinding> m_dataBinding;
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			 XmlMap();
		public:
			virtual ~XmlMap();
	};

}

}
