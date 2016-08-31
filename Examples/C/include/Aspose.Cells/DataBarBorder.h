#pragma once
#include "DataBarBorderType.h"
#include "System/Drawing/Color.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_DATABARBORDER() 

namespace Aspose {
namespace Cells {
class DataBar;
class Workbook;
class InternalColor;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DataBarBorder : public Aspose::Cells::System::Object
#else	class DataBarBorder : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::InternalColor> _color;
			Aspose::Cells::DataBarBorderType _type;
			Aspose::Cells::Workbook* _book;
	public:

			 DataBarBorder(intrusive_ptr<Aspose::Cells::DataBar> databar);
			void Copy(intrusive_ptr<Aspose::Cells::DataBarBorder> source);
			intrusive_ptr<Aspose::Cells::InternalColor> GetColorInfo();
			void SetColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::DataBarBorderType GetType();
			void SetType(Aspose::Cells::DataBarBorderType value);
			 DataBarBorder();
		public:
			virtual ~DataBarBorder();
	};

}

}
