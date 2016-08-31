#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "SaveFormat.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_GLOBALEXPDATA() 

namespace Aspose {
namespace Cells {
class XfCollection;
class Workbook;
class StringPool;
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
	class GlobalExpData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::XfCollection> OrigStylePool;
			intrusive_ptr<Aspose::Cells::StringPool> OrigStringPool;
			void UpdateXFs(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> xfMap);
			void GatherUsedSST(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sstUsed);
			void UpdateSST(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sstMap);
	public:

			Aspose::Cells::System::Int32 MAX_ROW_INDEX;
			Aspose::Cells::System::Int16 MAX_COL_INDEX;
			Aspose::Cells::System::Int32 MAX_STYLE_COUNT;
			Aspose::Cells::System::Int32 SheetCount;
			Aspose::Cells::SaveFormat _SaveFormat;
			Aspose::Cells::Workbook* Workbook;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> SheetsThickTop;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> SheetsThickBottom;
			 GlobalExpData(intrusive_ptr<Aspose::Cells::Workbook> wb , Aspose::Cells::SaveFormat saveFormat);
			void CleanUp();
			 GlobalExpData();
		public:
			virtual ~GlobalExpData();
	};

}

}

}
