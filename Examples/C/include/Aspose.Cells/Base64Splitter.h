#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Convert.h"
//#include "System/Text/StringBuilder.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/String.h"
#define STATIC_BASE64SPLITTER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class Base64Splitter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> mBase64Data;
			Aspose::Cells::System::Int32 mCurPos;
			 static const Aspose::Cells::System::Int32 LineLength;
	public:

			 Base64Splitter(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::String> GetNext();
			bool IsEof();
			static intrusive_ptr<Aspose::Cells::System::String> Convert(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::String> separator);
			 Base64Splitter();
		public:
			virtual ~Base64Splitter();
	};

}

}

}

}
