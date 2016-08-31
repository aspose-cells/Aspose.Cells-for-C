#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_ASPOSEBITCONVERTER() 


namespace Aspose {
namespace Cells {
	class AsposeBitConverter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBytes(Aspose::Cells::System::Int32 value);
			static void Reverse(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array);
			 AsposeBitConverter();
		public:
			virtual ~AsposeBitConverter();
	};

}

}
