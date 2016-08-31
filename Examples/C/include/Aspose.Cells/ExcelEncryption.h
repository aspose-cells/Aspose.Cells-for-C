#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_EXCELENCRYPTION() 


namespace Aspose {
namespace Cells {
	class ExcelEncryption : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Rotate(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> inputBytes);
	public:

			 ExcelEncryption();
			static Aspose::Cells::System::Int32 Encrypt(intrusive_ptr<Aspose::Cells::System::String> password);
		public:
			virtual ~ExcelEncryption();
	};

}

}
