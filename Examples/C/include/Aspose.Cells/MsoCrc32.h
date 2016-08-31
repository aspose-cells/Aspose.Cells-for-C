#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/UInt32.h"
//#include "System/Int32.h"
#define STATIC_MSOCRC32() 


namespace Aspose {
namespace Cells {
	class MsoCrc32 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> Cache;
			Aspose::Cells::System::UInt32 crcValue;
			Aspose::Cells::System::UInt32 GetValue();
			 MsoCrc32();
			void InitCrcCache();
			void Update(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
		public:
			virtual ~MsoCrc32();
	};

}

}
