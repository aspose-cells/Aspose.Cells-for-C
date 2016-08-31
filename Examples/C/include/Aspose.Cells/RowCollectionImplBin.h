#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "AbstractRowCollection.h"
#define STATIC_ROWCOLLECTIONIMPLBIN() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowCollectionImplBin : public Aspose::Cells::CellsSs::AbstractRowCollection
	{
	private:

			void Init_Vars();
	public:

			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetRowData(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataStartPosition(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataEndPosition(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 ExpandRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 expandSize);
			 virtual Aspose::Cells::System::Int32 TrimRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 freeSize , bool sequential);
			 virtual Aspose::Cells::System::Int32 GetCellExpandSize();
			 virtual Aspose::Cells::System::Int32 GetRowDataSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 virtual Aspose::Cells::System::Int32 GetRowDataCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual Aspose::Cells::System::Int32 GetCellCapacity(Aspose::Cells::System::Int32 cellCount);
			 RowCollectionImplBin();
		public:
			virtual ~RowCollectionImplBin();
	};

}

}

}
