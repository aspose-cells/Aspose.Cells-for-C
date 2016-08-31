#pragma once
#include "System/Object.h"
#include "IColumnWidthModelBuilder.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_COLUMNWIDTHMODELBUILDERPIXELBASED() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnWidthModelBuilderPixelBased : public Aspose::Cells::CellsSs::IColumnWidthModelBuilder
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* _wss;
	public:

			 ColumnWidthModelBuilderPixelBased(intrusive_ptr<Aspose::Cells::WorksheetCollection> wss);
			Aspose::Cells::System::Int32 GetInnerUnitWidth(Aspose::Cells::System::Double width);
			 ColumnWidthModelBuilderPixelBased();
		public:
			virtual ~ColumnWidthModelBuilderPixelBased();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
