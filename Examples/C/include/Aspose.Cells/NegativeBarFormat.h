#pragma once
#include "System/Drawing/Color.h"
#include "DataBarNegativeColorType.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_NEGATIVEBARFORMAT() 

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

	class ASPOSE_CELLS_API NegativeBarFormat : public Aspose::Cells::System::Object
#else	class NegativeBarFormat : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::InternalColor> _borderColor;
			Aspose::Cells::DataBarNegativeColorType _borderColorType;
			intrusive_ptr<Aspose::Cells::InternalColor> _color;
			Aspose::Cells::DataBarNegativeColorType _colorType;
			Aspose::Cells::Workbook* _book;
	public:

			 NegativeBarFormat(intrusive_ptr<Aspose::Cells::DataBar> databar);
			void Copy(intrusive_ptr<Aspose::Cells::NegativeBarFormat> source);
			intrusive_ptr<Aspose::Cells::InternalColor> GetBorderColorInfo();
			void SetBorderColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetBorderColor();
			void SetBorderColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::DataBarNegativeColorType GetBorderColorType();
			void SetBorderColorType(Aspose::Cells::DataBarNegativeColorType value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetColorInfo();
			void SetColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::DataBarNegativeColorType GetColorType();
			void SetColorType(Aspose::Cells::DataBarNegativeColorType value);
			 NegativeBarFormat();
		public:
			virtual ~NegativeBarFormat();
	};

}

}
