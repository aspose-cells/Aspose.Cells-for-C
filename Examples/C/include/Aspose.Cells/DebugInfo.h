#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/StringBuilder.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_DEBUGINFO() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DebugInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list;
			void AddMsg(intrusive_ptr<Aspose::Cells::System::String> s);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetMsgList();
			intrusive_ptr<Aspose::Cells::System::String> GetMsg();
			 DebugInfo();
		public:
			virtual ~DebugInfo();
	};

}

}

}
