#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_STYLERECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class StyleRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 StyleRecord();
			void SetIndex(Aspose::Cells::System::Int32 i);
			void SetStyle(Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Byte styleIndex);
			void SetStyle(Aspose::Cells::System::UInt16 xfIndex , intrusive_ptr<Aspose::Cells::System::String> styleName);
		public:
			virtual ~StyleRecord();
	};

}

}

}
