#pragma once
//#include "System/Boxing.h"
#include "System/Double.h"
#include "FormatConditionValueType.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CONDITIONALFORMATTINGVALUE() 

namespace Aspose {
namespace Cells {
class FormatCondition;
class CopyOptions;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingValue : public Aspose::Cells::System::Object
#else	class ConditionalFormattingValue : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _BinaryFormula;
			intrusive_ptr<Aspose::Cells::System::Object> _value;
			Aspose::Cells::FormatConditionValueType _type;
			bool _isGTE;
			Aspose::Cells::FormatCondition* fc;
	public:

			Aspose::Cells::System::Double CachedValueMax;
			Aspose::Cells::System::Double CachedValueMin;
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> source , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> destSheets , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 ConditionalFormattingValue(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			 ConditionalFormattingValue(intrusive_ptr<Aspose::Cells::FormatCondition> formatCondition , Aspose::Cells::FormatConditionValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void SetDoubleValue(Aspose::Cells::System::Double value);
			void FormulaToBin();
			void BinToFormula();
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2007();
			void SetFormula2007(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Double GetInnerDoubleValue();
			bool IsFormula();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula();
			void SetBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void ConvertBinary(bool up , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::FormatConditionValueType GetType();
			void SetType(Aspose::Cells::FormatConditionValueType value);
			bool IsGTE();
			void SetIsGTE(bool value);
			 ConditionalFormattingValue();
		public:
			virtual ~ConditionalFormattingValue();
	};

}

}
