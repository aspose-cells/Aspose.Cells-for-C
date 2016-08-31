#pragma once
#include "System/Object.h"
#include "FormatConditionValueType.h"
#include "ConditionalFormattingValue.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_CONDITIONALFORMATTINGVALUECOLLECTION() 

namespace Aspose {
namespace Cells {
class CopyOptions;
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingValueCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ConditionalFormattingValueCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::FormatCondition* fmtCond;
			 ConditionalFormattingValueCollection(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			bool IsIconSetCFVOS;
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingValueCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::FormatConditionValueType type , intrusive_ptr<Aspose::Cells::System::String> value);
			 ConditionalFormattingValueCollection();
		public:
			virtual ~ConditionalFormattingValueCollection();
	};

}

}
