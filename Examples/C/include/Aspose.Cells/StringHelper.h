#pragma once
//#include "System/Single.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Byte.h"
//#include "System/Drawing/FontStyle.h"
#include "System/IO/BinaryReader.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_STRINGHELPER() 

namespace Aspose {
namespace Cells {
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace Helper {
#ifdef WIN32

	class ASPOSE_CELLS_API StringHelper : public Aspose::Cells::System::Object
#else	class StringHelper : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<bool>> CheckRegString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs);
	public:

			static bool IsEmpty(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> Split(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Char ch);
			static Aspose::Cells::System::Int32 MatchStar(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> lookupValue , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> str2 , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 j);
			static Aspose::Cells::System::Int32 Match(intrusive_ptr<Aspose::Cells::System::String> lookupValue , intrusive_ptr<Aspose::Cells::System::String> str2 , bool ignoreCase);
			static bool IsEqual(intrusive_ptr<Aspose::Cells::System::String> lookupValue , intrusive_ptr<Aspose::Cells::System::String> str2 , bool ignoreCase);
			static intrusive_ptr<Aspose::Cells::System::String> Reverse(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::Font> cellFont);
			static Aspose::Cells::System::Int32 GetFontHeight(intrusive_ptr<Aspose::Cells::Font> cellFont);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int32 count , bool IsUnicode);
			static intrusive_ptr<Aspose::Cells::System::Object> ProcessAsRegString(intrusive_ptr<Aspose::Cells::System::String> value , bool ignoreCase , bool constrainHeadTail);
			 StringHelper();
		public:
			virtual ~StringHelper();
	};

}

}

}
