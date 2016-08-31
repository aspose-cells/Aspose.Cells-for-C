#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/Int32.h"
#define STATIC_SHAPEPROPSSTREAMRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ShapePropsStreamRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ShapePropsStreamRecord();
			void SetShapePropsStream(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> xmlData);
		public:
			virtual ~ShapePropsStreamRecord();
	};

}

}

}
