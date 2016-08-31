#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CODEPAGE()  Static_CodePage()


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class CodePage : public Aspose::Cells::System::Object
	{
	protected:

			static void Static_CodePage();
	private:

			void Init_Vars();
			 CodePage();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gCharSetMap;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf7Bom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf7Bom();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf8Bom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf8Bom();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf16LeBom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf16LeBom();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf16BeBom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf16BeBom();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf32LeBom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf32LeBom();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> gUtf32BeBom;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_gUtf32BeBom();
	public:

			 static const Aspose::Cells::System::Int32 SymbolCharSet;
			 static const Aspose::Cells::System::Int32 DosLatinUSCodePage;
			 static const Aspose::Cells::System::Int32 DosLatin1CodePage;
			 static const Aspose::Cells::System::Int32 CodePageUtf16;
			 static const Aspose::Cells::System::Int32 CodePageUtf16BE;
			 static const Aspose::Cells::System::Int32 WindowsLatin1CodePage;
			 static const Aspose::Cells::System::Int32 MacintoshRomanCodePage;
			 static const Aspose::Cells::System::Int32 CodePageUtf32;
			 static const Aspose::Cells::System::Int32 CodePageUtf32BE;
			 static const Aspose::Cells::System::Int32 CodePageUtf7;
			 static const Aspose::Cells::System::Int32 CodePageUtf8;
			static Aspose::Cells::System::Int32 CharSetToCodePage(Aspose::Cells::System::Int32 charSet , Aspose::Cells::System::Int32 defaultCodePage);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetUtf7Bom();
			 static  bool StaticConstructIsFirst;
			static  bool AutoInit_Static_CodePage();
			static  bool StaticConstruct_CodePage_Falg;
		public:
			virtual ~CodePage();
	};

}

}

}

}
