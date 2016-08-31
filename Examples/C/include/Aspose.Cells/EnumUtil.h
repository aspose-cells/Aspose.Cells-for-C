#pragma once
#include "ConsolidationFunction.h"
#include "BorderType.h"
#include "System/Object.h"
#include "GradientPresetType.h"
#include "TextureType.h"
#include "System/String.h"
#include "System/Drawing/FontStyle.h"
#include "BackgroundType.h"
#include "IconSetType.h"
#include "CellBorderType.h"
#include "CellValueType.h"
#include "System/Int32.h"
#include "System/Drawing/Imaging/ImageFlags.h"
#include "MsoDrawingType.h"
#include "System/Array1D.h"
#define STATIC_ENUMUTIL() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
	class EnumUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetBorderLineStyleStr(Aspose::Cells::CellBorderType val);
			static intrusive_ptr<Aspose::Cells::System::String> GetPatternStyleStr(Aspose::Cells::BackgroundType val);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Drawing::GradientPresetType>> GetGradientPresetTypeValues();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Drawing::TextureType>> GetTextureTypeValues();
			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::IconSetType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringImageFlags(Aspose::Cells::System::Drawing::Imaging::ImageFlags type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringMsoDrawingType(Aspose::Cells::Drawing::MsoDrawingType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringBorderType(Aspose::Cells::BorderType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringCellBorderType(Aspose::Cells::CellBorderType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringBackgroundType(Aspose::Cells::BackgroundType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToStringFontStyle(Aspose::Cells::System::Drawing::FontStyle type);
			static intrusive_ptr<Aspose::Cells::System::String> ToCellValueType(Aspose::Cells::CellValueType type);
			static Aspose::Cells::System::Int32 GetSutotalFunctionId(Aspose::Cells::ConsolidationFunction functionType);
			static intrusive_ptr<Aspose::Cells::System::String> GetConsolidationFunctionName(Aspose::Cells::ConsolidationFunction functionType);
			static intrusive_ptr<Aspose::Cells::System::String> GetTotalName(Aspose::Cells::ConsolidationFunction functionType , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 EnumUtil();
		public:
			virtual ~EnumUtil();
	};

}

}
