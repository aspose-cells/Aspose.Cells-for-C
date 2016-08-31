#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
//#include "System/Math.h"
#include "System/Int32.h"
//#include "System/Collections/CollectionBase.h"
#include "ColorType.h"
#define STATIC_CELLSCOLOR() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Workbook;
class ThemeColor;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellsColor : public Aspose::Cells::System::Object
#else	class CellsColor : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Workbook* m_workbook;
			intrusive_ptr<Aspose::Cells::InternalColor> InternalColor;
			 CellsColor(intrusive_ptr<Aspose::Cells::Workbook> book);
			 CellsColor(intrusive_ptr<Aspose::Cells::Workbook> book , intrusive_ptr<Aspose::Cells::InternalColor> color);
			bool IsShapeColor();
			void SetIsShapeColor(bool value);
			Aspose::Cells::ColorType GetType();
			intrusive_ptr<Aspose::Cells::ThemeColor> GetThemeColor();
			void SetThemeColor(intrusive_ptr<Aspose::Cells::ThemeColor> value);
			Aspose::Cells::System::Int32 GetColorIndex();
			void SetColorIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetInnnerColorIndex();
			void SetInnnerColorIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetArgb();
			void SetArgb(Aspose::Cells::System::Int32 value);
			void Copy(intrusive_ptr<Aspose::Cells::CellsColor> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOptions);
			Aspose::Cells::System::Int32 GetAlpha();
			void SetAlpha(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetTransparency();
			void SetTransparency(Aspose::Cells::System::Double value);
			void SetTintOfShapeColor(Aspose::Cells::System::Double tint);
			void SetShapeTint(Aspose::Cells::System::Double value);
			 CellsColor();
		public:
			virtual ~CellsColor();
	};

}

}
