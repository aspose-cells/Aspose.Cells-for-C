#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
#include "ExternalCellValueType.h"
#include "ErrorType.h"
#include "System/Double.h"
#include "CellValueType.h"
#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/TypeCode.h"
#define STATIC_EXTERNALCELL() 


namespace Aspose {
namespace Cells {
	class ExternalCell : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 ColumnIndex;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			Aspose::Cells::CellValueType GetType();
			Aspose::Cells::ExternalCellValueType GetExternalType();
			 ExternalCell(Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Double GetDoubleValue();
			Aspose::Cells::ErrorType GetErrorValue();
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			bool GetBoolValue();
			 ExternalCell();
		public:
			virtual ~ExternalCell();
	};

}

}
