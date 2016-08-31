#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_DATABORDER() 

namespace Aspose {
namespace Cells {
class Border;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataBorderLine;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataBorder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void SetOneBorderLine(intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> bi , intrusive_ptr<Aspose::Cells::Border> border);
	public:

			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Top;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Left;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Bottom;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Right;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Diagonal;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Horizontal;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> Vertical;
			bool IsDiagonalDown;
			bool IsDiagonalUp;
			void SetDataToStyle(intrusive_ptr<Aspose::Cells::Style> style);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> GetDataBorder(intrusive_ptr<Aspose::Cells::Style> style);
			static bool IsEquals(intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> obj1 , intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> obj2);
			 DataBorder();
		public:
			virtual ~DataBorder();
	};

}

}

}
