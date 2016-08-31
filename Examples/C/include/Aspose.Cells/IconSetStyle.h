#pragma once
//#include "System/Exception.h"
#include "IconSetType.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
#include "IConditionFormatStyle.h"
#define STATIC_ICONSETSTYLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
class IconSet;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace StyleObject {
	class IconSetStyle : public Aspose::Cells::StyleObject::IConditionFormatStyle
	{
	protected:

			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> cacheIconResource;
			 virtual void InitCellValue();
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Style> m_CellStyle;
			static intrusive_ptr<Aspose::Cells::System::Object> lockObj;
	public:

			intrusive_ptr<Aspose::Cells::IconSet> IconSet;
			 IconSetStyle(intrusive_ptr<Aspose::Cells::IconSet> icon , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
			static intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zIconResource;
			Aspose::Cells::IconSetType GetIconSetType(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 CalculateIcon();
			 virtual bool IsShowValue();
			static Aspose::Cells::System::Int32 GetIconsCount(Aspose::Cells::IconSetType type);
			 IconSetStyle();
		public:
			virtual ~IconSetStyle();
	};

}

}

}
