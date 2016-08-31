#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CACHEDRANGE() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CachedRange : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 SheetIndex;
			Aspose::Cells::System::Int32 StartRow;
			Aspose::Cells::System::Int32 StartColumn;
			Aspose::Cells::System::Int32 EndRow;
			Aspose::Cells::System::Int32 EndColumn;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			bool ForcedCellValue;
			bool IsInCircle;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Fiters;
			 CachedRange();
		public:
			virtual ~CachedRange();
	};

}

}

}
