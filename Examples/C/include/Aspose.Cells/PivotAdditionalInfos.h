#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTADDITIONALINFOS() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotAdditionalInfos : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			void Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetArray(Aspose::Cells::System::Int32 index);
			void InitGlobalInfos(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			void InitTableInfos(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			Aspose::Cells::System::UInt32 GetSxAddLOption();
			void SetSxAddLOption(Aspose::Cells::System::UInt32 value);
			bool GetDisplayImmediateItems();
			void SetDisplayImmediateItems(bool value);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotAdditionalInfos> source);
			 PivotAdditionalInfos();
		public:
			virtual ~PivotAdditionalInfos();
	};

}

}

}
