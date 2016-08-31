#pragma once
#include "System/Object.h"
#include "TableStyleElementType.h"
#include "System/Int32.h"
#define STATIC_TABLESTYLEELEMENT() 

namespace Aspose {
namespace Cells {
class Style;
class WorksheetCollection;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleElementCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API TableStyleElement : public Aspose::Cells::System::Object
#else	class TableStyleElement : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> m_TableStyleElements;
			Aspose::Cells::System::Int32 m_Size;
			Aspose::Cells::Tables::TableStyleElementType m_Type;
			intrusive_ptr<Aspose::Cells::Style> m_Style;
	public:

			 TableStyleElement(intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> parent , Aspose::Cells::Tables::TableStyleElementType type);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			Aspose::Cells::System::Int32 GetSize();
			void SetSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::Tables::TableStyleElementType GetType();
			intrusive_ptr<Aspose::Cells::Style> GetElementStyle();
			void SetElementStyle(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetReadStyle();
			void SetReadStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 DxfId;
			 TableStyleElement();
		public:
			virtual ~TableStyleElement();
	};

}

}

}
