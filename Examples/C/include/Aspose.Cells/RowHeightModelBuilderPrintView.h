#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "IRowHeightModelBuilder.h"
#define STATIC_ROWHEIGHTMODELBUILDERPRINTVIEW() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowHeightModelBuilderPrintView : public Aspose::Cells::CellsSs::IRowHeightModelBuilder
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> PrintViewHeight;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Static_Array_Init_PrintViewHeight();
			Aspose::Cells::System::Double _pixelPerUnit;
	public:

			 RowHeightModelBuilderPrintView(Aspose::Cells::System::Double pixelPerTwips);
			Aspose::Cells::System::Double GetPixelPerTwips();
			void SetPixelPerTwips(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 ToModelUnit(Aspose::Cells::System::Int32 rawHeight);
			Aspose::Cells::System::Int32 ToModelUnitByPixel(Aspose::Cells::System::Int32 pixel);
			Aspose::Cells::System::Int32 ToTwips(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Double ToPoint(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Double ToInch(Aspose::Cells::System::Int32 modelUnit);
			Aspose::Cells::System::Int32 ToPixel(Aspose::Cells::System::Int32 modelUnit);
			static bool NeedPrintViewUnit(Aspose::Cells::System::Int32 rawHeight);
			 RowHeightModelBuilderPrintView();
		public:
			virtual ~RowHeightModelBuilderPrintView();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
