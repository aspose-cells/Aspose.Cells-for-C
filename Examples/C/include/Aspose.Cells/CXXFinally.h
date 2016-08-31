#pragma once
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/Int32.h"
#define STATIC_CXXFINALLY() 


namespace Aspose {
namespace Cells {
namespace Foundation {
namespace Porting {
	class CXXFinally : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _id;
			intrusive_ptr<Aspose::Cells::System::Object> _dispose;
	public:

			 static const Aspose::Cells::System::Int32 STREAM;
			 static const Aspose::Cells::System::Int32 BOOK_CELLS_ACCESSOR;
			 static const Aspose::Cells::System::Int32 SHEET_CELLS_ACCESSOR;
			 static const Aspose::Cells::System::Int32 ROW_HEIGHT_ACCESSOR;
			 static const Aspose::Cells::System::Int32 COLUMN_STYLE_ACCESSOR;
			 static const Aspose::Cells::System::Int32 COLUMN_WIDTH_ACCESSOR;
			 static const Aspose::Cells::System::Int32 COLUMN_ALL_ACCESSOR;
			 static const Aspose::Cells::System::Int32 SHEET_ALL_ACCESSOR;
			 static const Aspose::Cells::System::Int32 SHARED_FORMULA_RESULT;
			 static const Aspose::Cells::System::Int32 FORMULA_RELINFO_WITH_ACCESSOR;
			 static const Aspose::Cells::System::Int32 OOXML_ORIGIN_FILE;
			 CXXFinally(Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::Object> resource);
			 CXXFinally();
		public:
			virtual ~CXXFinally();
	};

}

}

}

}
