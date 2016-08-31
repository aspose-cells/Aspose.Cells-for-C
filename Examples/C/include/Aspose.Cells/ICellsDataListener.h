#pragma once
#include "System/Object.h"
#define STATIC_ICELLSDATALISTENER() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ICellsDataListener : public Aspose::Cells::System::Object
	{
	public:

			virtual void RegisterChain(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataListener> parent) = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataListener> GetRegisterChain() = 0;
		public:
	};

}

}

}
