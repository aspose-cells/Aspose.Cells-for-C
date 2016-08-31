#pragma once
#include "System/Object.h"
//#include "System/Boxing.h"
#include "DataKeepType.h"
#include "System/Collections/Hashtable.h"
#define STATIC_DATAKEEP() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeep : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Store;
			void Add(Aspose::Cells::OpenXML::DataKeepType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::OpenXML::DataKeepType type);
			 DataKeep();
		public:
			virtual ~DataKeep();
	};

}

}

}
