#pragma once
//#include "System/Collections/CollectionBase.h"
//#include "System/Boxing.h"
#include "System/UInt32.h"
#include "ColorParamType.h"
//#include "System/Math.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
#include "System/Object.h"
#include "ColorType.h"
//#include "System/Collections/SortedList.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_INTERNALCOLOR() 

namespace Aspose {
namespace Cells {
class CompareOptions;
class CopyOptions;
class WorksheetCollection;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace StyleObject {
class ColorParamCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataTheme;
}
}
}

namespace Aspose {
namespace Cells {
	class InternalColor : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool m_isNoFill;
			Aspose::Cells::System::UInt32 m_Color;
			Aspose::Cells::System::Byte m_option;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetDisplayColor(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::DataTheme> theme);
	public:

			 InternalColor(bool isShape);
			 InternalColor(bool isShape , Aspose::Cells::ColorType colorType , Aspose::Cells::System::Int32 colorValue);
			Aspose::Cells::System::Int32 GetColorPaletteIndex(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 defaultIndex , bool match , bool& found);
			bool IsNoFill();
			void SetIsNoFill(bool value);
			bool GetAuto();
			void SetAuto(bool value);
			Aspose::Cells::ColorType GetColorType();
			bool IsShapeColor();
			void SetIsShapeColor(bool value);
			Aspose::Cells::System::Int32 GetColorValue();
			Aspose::Cells::System::Int32 GetDisplayBGR(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetDisplayColor(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			Aspose::Cells::System::Int32 GetDisplayRGB(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void ClearParams();
			void SetColor(Aspose::Cells::ColorType colorType , Aspose::Cells::System::Int32 colorValue);
			static Aspose::Cells::System::Int32 TintToAlpha(Aspose::Cells::System::Int32 lum , Aspose::Cells::System::Double tint);
			bool IsEqual(intrusive_ptr<Aspose::Cells::InternalColor> color);
			bool IsEqual(intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::Workbook> currentWorkbook , intrusive_ptr<Aspose::Cells::Workbook> workbook2);
			bool IsEqualParams(intrusive_ptr<Aspose::Cells::InternalColor> c);
			bool IsEqual(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , intrusive_ptr<Aspose::Cells::System::Drawing::Color> defaultColor , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			bool IsNotEqual(intrusive_ptr<Aspose::Cells::InternalColor> color);
			bool IsNotEqual(intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::Workbook> currentWorkbook , intrusive_ptr<Aspose::Cells::Workbook> workbook2);
			Aspose::Cells::System::Double GetTint();
			void SetTint(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetShapeTint();
			void SetShapeTint(Aspose::Cells::System::Double tint);
			static Aspose::Cells::System::Double GetTransparency(intrusive_ptr<Aspose::Cells::InternalColor> c);
			static intrusive_ptr<Aspose::Cells::InternalColor> SetTransparency(intrusive_ptr<Aspose::Cells::InternalColor> c , Aspose::Cells::System::Double tran);
			static Aspose::Cells::System::Int32 GetAlpha(intrusive_ptr<Aspose::Cells::InternalColor> c);
			static intrusive_ptr<Aspose::Cells::InternalColor> SetAlpha(intrusive_ptr<Aspose::Cells::InternalColor> c , Aspose::Cells::System::Int32 alpha);
			Aspose::Cells::System::Int32 GetReadAlpha();
			void SetReadAlpha(Aspose::Cells::System::Int32 value);
			bool ContainsAttr(Aspose::Cells::StyleObject::ColorParamType type);
			intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> m_Params;
			intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> GetInternalParams();
			intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> GetParams();
			void Copy(intrusive_ptr<Aspose::Cells::InternalColor> source , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> currentSheets);
			void Copy(intrusive_ptr<Aspose::Cells::InternalColor> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InnerCopy(intrusive_ptr<Aspose::Cells::InternalColor> source);
			void InnerCopy(intrusive_ptr<Aspose::Cells::InternalColor> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			static bool IsSame(intrusive_ptr<Aspose::Cells::InternalColor> a , intrusive_ptr<Aspose::Cells::InternalColor> b , intrusive_ptr<Aspose::Cells::CompareOptions> options);
			bool IsSame(intrusive_ptr<Aspose::Cells::InternalColor> source);
			 InternalColor();
		public:
			virtual ~InternalColor();
	};

}

}
