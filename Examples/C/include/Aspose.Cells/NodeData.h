#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "XmlNodeType.h"
#include "System/String.h"
#define STATIC_NODEDATA() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class NodeData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Xml::XmlNodeType Type;
			intrusive_ptr<Aspose::Cells::System::String> Prefix;
			intrusive_ptr<Aspose::Cells::System::String> LocalName;
			intrusive_ptr<Aspose::Cells::System::String> Value;
			intrusive_ptr<Aspose::Cells::System::String> _Name;
			void Init();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsEmpty;
			 NodeData();
		public:
			virtual ~NodeData();
	};

}

}

}
