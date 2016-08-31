#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PIVOTPAGEFIELDS() 


namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotPageFields : public Aspose::Cells::System::Object
#else	class PivotPageFields : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _pageItems;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _sxTBPG;
	public:

			 PivotPageFields();
			void AddPageField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> pageItems);
			Aspose::Cells::System::Int32 GetPageFieldCount();
			Aspose::Cells::System::Int32 GetSxPageCount();
			void AddIdentify(Aspose::Cells::System::Int32 rangeIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> pageItemIndex);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetPageItems();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSxTBPG();
		public:
			virtual ~PivotPageFields();
	};

}

}

}
