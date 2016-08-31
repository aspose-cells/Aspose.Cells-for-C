#pragma once
#include "InternalColor.h"
#include "BorderType.h"
#include "System/Object.h"
#include "System/String.h"
#include "CellBorderType.h"
//#include "System/Int32.h"
#define STATIC_DATABORDERLINE() 

namespace Aspose {
namespace Cells {
class Border;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataBorderLine : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Style;
			intrusive_ptr<Aspose::Cells::InternalColor> InternalColor;
			Aspose::Cells::CellBorderType LineStyle;
			static intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> GetDataBorderLine(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::BorderType type);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> GetDataBorderLine(intrusive_ptr<Aspose::Cells::Border> HVBorder);
			static bool IsEquals(intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> obj1 , intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> obj2);
			 DataBorderLine();
		public:
			virtual ~DataBorderLine();
	};

}

}

}
