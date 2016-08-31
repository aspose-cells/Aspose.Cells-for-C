#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "IRowHeightModelBuilder.h"
#include "System/Double.h"
#define STATIC_ROWHEIGHTMODELBUILDERPIXELBASED() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowHeightModelBuilderPixelBased : public Aspose::Cells::CellsSs::IRowHeightModelBuilder
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _pixelPerTwips;
			Aspose::Cells::System::Double _pixelPerPoint;
			Aspose::Cells::System::Double _pixelPerInch;
	public:

			 RowHeightModelBuilderPixelBased(Aspose::Cells::System::Double pixelPerTwips);
			Aspose::Cells::System::Double GetPixelPerTwips();
			void SetPixelPerTwips(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 ToModelUnit(Aspose::Cells::System::Int32 rawHeight);
			Aspose::Cells::System::Int32 ToModelUnitByPixel(Aspose::Cells::System::Int32 pixel);
			Aspose::Cells::System::Int32 ToTwips(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Double ToPoint(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Double ToInch(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Int32 ToPixel(Aspose::Cells::System::Int32 modelUnit);
			 RowHeightModelBuilderPixelBased();
		public:
			virtual ~RowHeightModelBuilderPixelBased();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
