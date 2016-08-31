#pragma once
#include "ConsolidationFunction.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Int16.h"
#include "PivotFieldDataDisplayFormat.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SXDI() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxDI : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::ConsolidationFunction _function;
			Aspose::Cells::Pivot::PivotFieldDataDisplayFormat _dataDisplayFormat;
			Aspose::Cells::System::Int32 _baseFieldIndex;
			Aspose::Cells::System::Int32 _baseItemIndex;
			Aspose::Cells::System::Int16 _number;
			intrusive_ptr<Aspose::Cells::System::String> m_numberFormat;
			intrusive_ptr<Aspose::Cells::System::String> _name;
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> _u_pivotField;
			bool _isDefault;
			 SxDI();
			 SxDI(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxDI> record);
			intrusive_ptr<Aspose::Cells::System::String> GetNumberFormat();
			void SetNumberFormat(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
		public:
			virtual ~SxDI();
	};

}

}

}
