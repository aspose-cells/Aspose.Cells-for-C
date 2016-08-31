#pragma once
#include "BorderType.h"
#include "System/Object.h"
//#include "System/UInt32.h"
#include "CellBorderType.h"
//#include "System/Double.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
#define STATIC_BORDER() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Workbook;
class BorderCollection;
class ThemeColor;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Border : public Aspose::Cells::System::Object
#else	class Border : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::BorderCollection* borders;
			void ModifyFlag();
			Aspose::Cells::BorderType borderType;
			Aspose::Cells::CellBorderType lineStyle;
	public:

			 Border(intrusive_ptr<Aspose::Cells::BorderCollection> borders);
			 Border(intrusive_ptr<Aspose::Cells::BorderCollection> borders , Aspose::Cells::BorderType type);
			intrusive_ptr<Aspose::Cells::InternalColor> InternalColor;
			intrusive_ptr<Aspose::Cells::ThemeColor> GetThemeColor();
			void SetThemeColor(intrusive_ptr<Aspose::Cells::ThemeColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetArgbColor();
			void SetArgbColor(Aspose::Cells::System::Int32 value);
			Aspose::Cells::BorderType GetBorderOption();
			void SetBorderOption(Aspose::Cells::BorderType value);
			Aspose::Cells::CellBorderType GetLineStyle();
			void SetLineStyle(Aspose::Cells::CellBorderType value);
			void SetInternalLineStyle(Aspose::Cells::CellBorderType lineStyle);
			void Copy(intrusive_ptr<Aspose::Cells::Border> source);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::Workbook> currentWorkbook , intrusive_ptr<Aspose::Cells::Workbook> workbook2);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Border> border);
			 Border();
		public:
			virtual ~Border();
	};

}

}
