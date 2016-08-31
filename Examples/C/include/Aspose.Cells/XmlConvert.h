#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_XMLCONVERT() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlConvert : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::Int32 i);
			static bool IsHexChar(Aspose::Cells::System::Char ch);
			static Aspose::Cells::System::Int32 ToHex(Aspose::Cells::System::Char ch);
			static intrusive_ptr<Aspose::Cells::System::String> EncodeCharacter(Aspose::Cells::System::Char ch , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> isHex , bool isAttr);
			static Aspose::Cells::System::Int32 DecodeISOCharacters(intrusive_ptr<Aspose::Cells::System::String> code);
			static intrusive_ptr<Aspose::Cells::System::String> EncodeName(intrusive_ptr<Aspose::Cells::System::String> name);
			 XmlConvert();
		public:
			virtual ~XmlConvert();
	};

}

}

}
