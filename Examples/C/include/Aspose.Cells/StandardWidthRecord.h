#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Double.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_STANDARDWIDTHRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class StandardWidthRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 StandardWidthRecord(Aspose::Cells::System::Double width , Aspose::Cells::System::Int32 constValue);
			 StandardWidthRecord();
		public:
			virtual ~StandardWidthRecord();
	};

}

}

}
