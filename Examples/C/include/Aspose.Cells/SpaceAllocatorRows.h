#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/Byte.h"
#include "RowImplWithVarCellLength.h"
//#include "System/Array.h"
#include "System/Int32.h"
#include "ISpaceAllocator.h"
#define STATIC_SPACEALLOCATORROWS() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class SpaceAllocatorRows : public Aspose::Cells::CellsSs::ISpaceAllocator
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Buffer;
			Aspose::Cells::System::Int32 m_DefaultExpandCellcount;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Byte>> m_HeaderData;
			Aspose::Cells::System::Int32 m_HeadersSize;
			Aspose::Cells::System::Int32 m_CellCount;
			Aspose::Cells::System::Int32 m_AllocatedValue;
			Aspose::Cells::System::Int32 m_Min;
			Aspose::Cells::System::Int32 m_Max;
	public:

			void SetDefaultExpandCellCount(Aspose::Cells::System::Int32 size);
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowProps , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 cellCount);
			bool Allocate(Aspose::Cells::System::Int32 freeSpace);
			Aspose::Cells::System::Int32 GetAllocatedValue();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> WriteRowsHeaderData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos);
			 SpaceAllocatorRows();
		public:
			virtual ~SpaceAllocatorRows();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
