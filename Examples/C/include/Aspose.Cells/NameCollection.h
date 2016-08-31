#pragma once
#include "System/Collections/CollectionBase.h"
//#include "System/Int32Helper.h"
//#include "System/Exception.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Collections/ICollection.h"
//#include "System/Boolean.h"
//#include "System/StringHelperPal.h"
#include "System/Collections/Hashtable.h"
#include "Name.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "ShiftType.h"
//#include "System/Collections/SortedList.h"
#define STATIC_NAMECOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
class WorksheetCollection;
class Range;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API NameCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class NameCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* m_Sheets;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_HashNames;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetHashNames();
			void Remove(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexes);
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> IsReferred();
			void ProcessAfterRemove(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexHash);
			static intrusive_ptr<Aspose::Cells::System::String> CreateKey(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> nameText);
			intrusive_ptr<Aspose::Cells::System::String> SplitNameText(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32& sheetIndex);
	public:

			 NameCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetNamedRanges(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Int32 AddLocal(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Int32 AddCopyLocal(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Int32 AddParsedLocal(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Int32 InnerAddName(intrusive_ptr<Aspose::Cells::Name> name , bool addToMap);
			void Parse2007Formulas(bool flag);
			intrusive_ptr<Aspose::Cells::Name> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Name> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> text);
			void Remove(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> names);
			void Remove(intrusive_ptr<Aspose::Cells::System::String> text);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void Clear();
			void InnerClear();
			void RemoveDuplicateNames();
			void Sort();
			Aspose::Cells::System::Int32 FindLocal(intrusive_ptr<Aspose::Cells::System::String> nameText , Aspose::Cells::System::Int32 sheetIndex , bool global);
			intrusive_ptr<Aspose::Cells::Name> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> definedName , Aspose::Cells::System::Int32 sheetIndex);
			Aspose::Cells::System::Int32 GetRefIndex(intrusive_ptr<Aspose::Cells::System::String> definedName , Aspose::Cells::System::Int32 sheetIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseNameInFormula(Aspose::Cells::System::Int32 currentSheetIndex , intrusive_ptr<Aspose::Cells::System::String> nameText , bool isNameFunction , bool add);
			void RemoveBuiltIn(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> text);
			void RemoveSheet(Aspose::Cells::System::Int32 sheetIndex);
			void InsertSheet(Aspose::Cells::System::Int32 index);
			void MoveSheet(Aspose::Cells::System::Int32 movedSheetIndex , Aspose::Cells::System::Int32 destSheetIndex);
			void Copy(intrusive_ptr<Aspose::Cells::NameCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InsertColumns(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber);
			void InsertRows(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void Shift(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , Aspose::Cells::ShiftType shiftType);
			void CreateBuiltInNames();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetRanges(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> builtInName);
			void UpdateBuiltIn(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> builtInName , intrusive_ptr<Aspose::Cells::System::String> area , bool force3D);
			void UpateNameText(intrusive_ptr<Aspose::Cells::Name> name , intrusive_ptr<Aspose::Cells::System::String> value);
			 NameCollection();
		public:
			virtual ~NameCollection();
	};

}

}
