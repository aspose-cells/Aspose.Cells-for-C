#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "IColumnWidthModelBuilder.h"
#define STATIC_COLUMNWIDTHMODELBUILDERCHARBASED() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnWidthModelBuilderCharBased : public Aspose::Cells::CellsSs::IColumnWidthModelBuilder
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _zoom;
	public:

			 ColumnWidthModelBuilderCharBased(Aspose::Cells::System::Double zoom);
			Aspose::Cells::System::Int32 GetInnerUnitWidth(Aspose::Cells::System::Double width);
			 ColumnWidthModelBuilderCharBased();
		public:
			virtual ~ColumnWidthModelBuilderCharBased();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
