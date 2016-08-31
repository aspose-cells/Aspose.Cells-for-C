#pragma once
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_OBJECTLINKRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ObjectLinkRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ObjectLinkRecord();
			void SetEquation();
			void SetTitle(Aspose::Cells::System::Byte id);
			void SetOption(Aspose::Cells::System::Byte id , Aspose::Cells::System::Int32 seriesIndex , Aspose::Cells::System::Int32 chartPointIndex);
		public:
			virtual ~ObjectLinkRecord();
	};

}

}

}
