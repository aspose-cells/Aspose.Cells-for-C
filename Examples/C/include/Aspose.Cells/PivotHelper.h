#pragma once
#include "ConsolidationFunction.h"
#include "System/UInt16.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/DateTime.h"
#include "PivotTableAutoFormatType.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/Math.h"
//#include "System/TypeCode.h"
#define STATIC_PIVOTHELPER() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::ConsolidationFunction GetSxliFunction(Aspose::Cells::System::Int32 type , Aspose::Cells::ConsolidationFunction function);
			static intrusive_ptr<Aspose::Cells::System::String> GetSxliFunctionName(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2);
			static Aspose::Cells::System::Int32 PivotTableFormatTypeToValue(Aspose::Cells::Pivot::PivotTableAutoFormatType type);
			static Aspose::Cells::Pivot::PivotTableAutoFormatType PivotTableFormatValueToType(Aspose::Cells::System::UInt16 type);
			 PivotHelper();
		public:
			virtual ~PivotHelper();
	};

}

}

}
