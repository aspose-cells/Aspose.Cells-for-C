#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "DataImpObject.h"
#include "System/String.h"
#define STATIC_DATAIMPOLEOBJ() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataImpOleObj : public Aspose::Cells::OpenXML::DataImpObject
	{
	private:

			void Init_Vars();
	public:

			 DataImpOleObj(bool alternate);
			intrusive_ptr<Aspose::Cells::System::String> ProgId;
			intrusive_ptr<Aspose::Cells::System::String> Link;
			bool OleUpdate;
			bool DvAspect;
			bool AutoLoad;
			bool isLink;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula;
			 DataImpOleObj();
		public:
			virtual ~DataImpOleObj();
	};

}

}

}
