#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "TableStyleElementType.h"
#include "System/Int32.h"
#define STATIC_TABLESTYLE() 

namespace Aspose {
namespace Cells {
class Style;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleCollection;
class TableStyleElementCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API TableStyle : public Aspose::Cells::System::Object
#else	class TableStyle : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_name;
			intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> styles;
			intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> m_elements;
			bool m_ShowAsPivotTableStyle;
			bool m_ShowAsTableStyle;
	public:

			intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> GetParent();
			 TableStyle(intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> styles , intrusive_ptr<Aspose::Cells::System::String> name);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::TableStyle> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> GetTableStyleElements();
			void SetTableStyleElements(intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> elements);
			bool GetShowAsPivotTableStyle();
			void SetShowAsPivotTableStyle(bool value);
			bool GetShowAsTableStyle();
			void SetShowAsTableStyle(bool value);
			void Add(Aspose::Cells::Tables::TableStyleElementType type , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::Style> style);
			 TableStyle();
		public:
			virtual ~TableStyle();
	};

}

}

}
