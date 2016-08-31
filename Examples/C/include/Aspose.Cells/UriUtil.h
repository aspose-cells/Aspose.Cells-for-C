#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Char.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_URIUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class UriUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 UriUtil();
			static bool IsDriveLetter(Aspose::Cells::System::Char c);
			static bool IsCharThatNeedsEscaping(Aspose::Cells::System::Char ch);
			static bool IsHrefThatNeedsEscaping(intrusive_ptr<Aspose::Cells::System::String> href);
			static bool IsEscapedCharString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Char UnescapeCharString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> EscapeChar(Aspose::Cells::System::Char ch);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> gHexUpperChars;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_gHexUpperChars();
			 static const intrusive_ptr<Aspose::Cells::System::String> gCharsThatAreEscapedInUri;
			 static const intrusive_ptr<Aspose::Cells::System::String> gCharsNotValidInEscapedUri;
	public:

			static bool IsHrefWithScheme(intrusive_ptr<Aspose::Cells::System::String> href);
			static bool IsFilePath(intrusive_ptr<Aspose::Cells::System::String> href);
			static bool IsAbsoluteLocalFilePath(intrusive_ptr<Aspose::Cells::System::String> href);
			static bool IsUncPath(intrusive_ptr<Aspose::Cells::System::String> href);
			static intrusive_ptr<Aspose::Cells::System::String> CombineHref(intrusive_ptr<Aspose::Cells::System::String> basePart , intrusive_ptr<Aspose::Cells::System::String> relativePart);
			static bool IsSubAddressOnly(intrusive_ptr<Aspose::Cells::System::String> href);
			static intrusive_ptr<Aspose::Cells::System::String> EscapeHref(intrusive_ptr<Aspose::Cells::System::String> href);
			static intrusive_ptr<Aspose::Cells::System::String> EscapeHrefAnyway(intrusive_ptr<Aspose::Cells::System::String> href);
			static intrusive_ptr<Aspose::Cells::System::String> UnescapeHref(intrusive_ptr<Aspose::Cells::System::String> href);
		public:
			virtual ~UriUtil();
	};

}

}

}

}
