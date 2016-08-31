#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_DATACELLGRADIENTFILL() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataCellGradientFill : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Double Left;
			Aspose::Cells::System::Double Right;
			Aspose::Cells::System::Double Top;
			Aspose::Cells::System::Double Bottom;
			intrusive_ptr<Aspose::Cells::System::String> Type;
			Aspose::Cells::System::Int32 Degree;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Positions;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::InternalColor*>> Colors;
			static bool IsEquals(intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> obj1 , intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> obj2);
			static void ToStyleGradientFill(intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> gradientFill , intrusive_ptr<Aspose::Cells::Style> style);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> ToGradientFill(intrusive_ptr<Aspose::Cells::Style> style);
			 DataCellGradientFill();
		public:
			virtual ~DataCellGradientFill();
	};

}

}

}
