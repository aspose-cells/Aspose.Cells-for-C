#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_CATLABRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class CatLabRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CatLabRecord();
			void SetOffset(Aspose::Cells::System::Int32 offset , bool isAutoTickLabelSpacing);
		public:
			virtual ~CatLabRecord();
	};

}

}

}
