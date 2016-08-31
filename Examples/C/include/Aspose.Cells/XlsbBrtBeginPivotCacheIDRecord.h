#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPIVOTCACHEIDRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPivotCacheIDRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPivotCacheIDRecord(Aspose::Cells::System::Int32 cacheId , intrusive_ptr<Aspose::Cells::System::String> rId);
			 XlsbBrtBeginPivotCacheIDRecord();
		public:
			virtual ~XlsbBrtBeginPivotCacheIDRecord();
	};

}

}

}

}
