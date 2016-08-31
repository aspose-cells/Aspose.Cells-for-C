#pragma once
#include "System/Collections/CollectionBase.h"
//#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Int16.h"
#include "ShiftType.h"
//#include "System/BitConverter.h"
#include "Hyperlink.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Char.h"
#define STATIC_HYPERLINKCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API HyperlinkCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class HyperlinkCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Object* parent;
			Aspose::Cells::System::Int32 AddReadFileLink(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::System::String> address);
			void ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void AddMerge(intrusive_ptr<Aspose::Cells::Hyperlink> link);
			intrusive_ptr<Aspose::Cells::System::String> GetLocalFileLink(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos);
	public:

			 HyperlinkCollection(intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::Worksheet> GetWorksheet();
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::System::String> address);
			Aspose::Cells::System::Int32 AddRead(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::System::String> address);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::System::String> address);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> startCellName , intrusive_ptr<Aspose::Cells::System::String> endCellName , intrusive_ptr<Aspose::Cells::System::String> address , intrusive_ptr<Aspose::Cells::System::String> textToDisplay , intrusive_ptr<Aspose::Cells::System::String> screenTip);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Hyperlink> hlink);
			intrusive_ptr<Aspose::Cells::Hyperlink> GetIndexObject(Aspose::Cells::System::Int32 index);
			void InternalRemoveAt(Aspose::Cells::System::Int32 index);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void Clear();
			void Copy(intrusive_ptr<Aspose::Cells::HyperlinkCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columns);
			void Shift(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType);
			void CopyColumns(intrusive_ptr<Aspose::Cells::HyperlinkCollection> source , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destColumnIndex , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyRows(intrusive_ptr<Aspose::Cells::HyperlinkCollection> source , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyRange(intrusive_ptr<Aspose::Cells::HyperlinkCollection> source , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , intrusive_ptr<Aspose::Cells::CellArea> destArea , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void ReadLink(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 HyperlinkCollection();
		public:
			virtual ~HyperlinkCollection();
	};

}

}
