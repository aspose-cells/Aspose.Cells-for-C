#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_XMLCOLUMNPROPERTY() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API XmlColumnProperty : public Aspose::Cells::System::Object
#else	class XmlColumnProperty : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 m_mapID;
			intrusive_ptr<Aspose::Cells::System::String> m_path;
			intrusive_ptr<Aspose::Cells::System::String> m_dataType;
			 XmlColumnProperty();
		public:
			virtual ~XmlColumnProperty();
	};

}

}
