#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "ExternalSheet.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXTERNALSHEETCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class ExternalSheetCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			void MoveInternalToHeader(Aspose::Cells::System::Int32 internalSupbook);
			void ToDataList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Copy(intrusive_ptr<Aspose::Cells::ExternalSheetCollection> source);
			Aspose::Cells::System::Int32 AddWorksheet(Aspose::Cells::System::UInt16 supbookIndex , Aspose::Cells::System::UInt16 firstIndex , Aspose::Cells::System::UInt16 lastIndex);
			Aspose::Cells::System::Int32 AddREF(Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex);
			Aspose::Cells::System::Int32 FindGlobalRef(Aspose::Cells::System::UInt16 supbookIndex , bool add);
			Aspose::Cells::System::Int32 FindErroRef(Aspose::Cells::System::Int32 supbookIndex , bool add);
			void RemoveSheet(Aspose::Cells::System::UInt16 sheetIndex , Aspose::Cells::System::Int32 internalSupbook);
			void InsertSheet(Aspose::Cells::System::Int32 supbook , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			void MoveSheet(Aspose::Cells::System::Int32 internalSupbook , Aspose::Cells::System::Int32 movedSheetIndex , Aspose::Cells::System::Int32 destSheetIndex);
			Aspose::Cells::System::Int32 FindRefSupbook(Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex);
			Aspose::Cells::System::Int32 FindIndex(bool isInternal , Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 sheetIndex);
			Aspose::Cells::System::Int32 FindIndex(Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 sheetIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> FindAllIndex(Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 sheetIndex);
			Aspose::Cells::System::Int32 FindIndex(Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex);
			Aspose::Cells::System::Int32 FindIndex(Aspose::Cells::System::Int32 searchedSupbookIndex , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex , bool add);
			bool IsExternalRef(Aspose::Cells::System::Int32 refIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			Aspose::Cells::System::Int32 FindSupbook(Aspose::Cells::System::Int32 refIndex);
			Aspose::Cells::System::Int32 FindSheet(Aspose::Cells::System::Int32 refIndex);
			void ChangeSheetIndex(Aspose::Cells::System::Int32 searchedSupbookIndex , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexes);
			Aspose::Cells::System::Int32 FindInternalSheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 refIndex);
			 ExternalSheetCollection();
		public:
			virtual ~ExternalSheetCollection();
	};

}

}
