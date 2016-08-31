#pragma once
#include "BorderType.h"
#include "System/Object.h"
#include "Border.h"
#include "System/Byte.h"
#include "System/Drawing/Color.h"
#include "CellBorderType.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BORDERCOLLECTION() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Workbook;
class Style;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API BorderCollection : public Aspose::Cells::System::Object
#else	class BorderCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Style* m_Style;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Border*>> borderList;
	public:

			bool Outline;
			 BorderCollection(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetParentStyle();
			intrusive_ptr<Aspose::Cells::Border> GetHBorder();
			void SetHBorder(intrusive_ptr<Aspose::Cells::Border> value);
			intrusive_ptr<Aspose::Cells::Border> GetVBorder();
			void SetVBorder(intrusive_ptr<Aspose::Cells::Border> value);
			intrusive_ptr<Aspose::Cells::Border> getByBorderTypeIndexObject(Aspose::Cells::BorderType borderType);
			bool HasBorders();
			bool IsEqual(intrusive_ptr<Aspose::Cells::BorderCollection> borders , intrusive_ptr<Aspose::Cells::Workbook> currentWorkbook , intrusive_ptr<Aspose::Cells::Workbook> workbook2);
			void SetBordersExceptDiagonal(Aspose::Cells::CellBorderType style , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			void SetStyle(Aspose::Cells::CellBorderType style);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetDiagonalColor();
			void SetDiagonalColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetDiagonalInternalColor();
			Aspose::Cells::CellBorderType GetDiagonalStyle();
			void SetDiagonalStyle(Aspose::Cells::CellBorderType value);
			Aspose::Cells::System::Byte GetDiagonalOption();
			void Copy(intrusive_ptr<Aspose::Cells::BorderCollection> source);
			 BorderCollection();
		public:
			virtual ~BorderCollection();
	};

}

}
