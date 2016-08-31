#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/StringHelperPal.h"
#include "System/Text/StringBuilder.h"
//#include "System/CharHelper.h"
//#include "System/UInt16.h"
//#include "System/Exception.h"
//#include "System/Boxing.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "PivotFieldType.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_PIVOTCALCULATEDITEM() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRule;
class PivotCache;
class PivotField;
class SxNames;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCalculatedItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_baseCacheFieldIndex;
			intrusive_ptr<Aspose::Cells::System::String> m_Formula;
	public:

			Aspose::Cells::Pivot::PivotCache* Cache;
			Aspose::Cells::System::Int32 GetBaseCacheFieldIndex();
			void SetBaseCacheFieldIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula;
			intrusive_ptr<Aspose::Cells::System::String> m_AtomicFormula;
			intrusive_ptr<Aspose::Cells::Pivot::SxNames> SxNames;
			Aspose::Cells::System::Int32 ApplyField;
			intrusive_ptr<Aspose::Cells::Pivot::SxRule> SxRule;
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> source);
			void SetFormula(Aspose::Cells::System::Int32 baseFieldIndex , intrusive_ptr<Aspose::Cells::System::String> formula);
			void SetFormula(Aspose::Cells::System::Int32 baseFieldIndex , intrusive_ptr<Aspose::Cells::System::String> formula , bool isAtomicStr);
			intrusive_ptr<Aspose::Cells::System::String> GetSxNameFormula(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 ProcessStation);
			void ToSxNameFormula(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 nameIndex , bool squareQoute);
			Aspose::Cells::System::Int32 ParseSxName(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2007();
			void SetFormula(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula();
			 PivotCalculatedItem(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::Pivot::PivotField> currentField , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::Pivot::PivotFieldType fieldType , Aspose::Cells::System::Int32 index);
			 PivotCalculatedItem(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 PivotCalculatedItem();
		public:
			virtual ~PivotCalculatedItem();
	};

}

}

}
