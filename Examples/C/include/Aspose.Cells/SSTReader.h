#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Exception.h"
//#include "System/Text/Encoding.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SSTREADER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class SSTReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 SSTReader();
			static void ReadStringData(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> stringDataList , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
		public:
			virtual ~SSTReader();
	};

}

}

}
