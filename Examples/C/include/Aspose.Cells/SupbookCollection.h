#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "SupbookData.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SUPBOOKCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class SupbookCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::SupbookData> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetSameExtSheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			Aspose::Cells::System::Int32 CheckExist(intrusive_ptr<Aspose::Cells::System::String> url);
			Aspose::Cells::System::Int32 FindOleLink(intrusive_ptr<Aspose::Cells::System::String> prodId , intrusive_ptr<Aspose::Cells::System::String> fileName , bool add);
			Aspose::Cells::System::Int32 CheckExist(intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			Aspose::Cells::System::Int32 AddCopy(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> AddDDE(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> url);
			 SupbookCollection();
		public:
			virtual ~SupbookCollection();
	};

}

}
