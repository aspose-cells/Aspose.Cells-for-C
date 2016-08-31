#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "RowImplWithVarCellLength.h"
#include "System/Int32.h"
#include "ISpaceAllocator.h"
#define STATIC_SPACEALLOCATORROW() 

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
	class SpaceAllocatorRow : public Aspose::Cells::CellsSs::ISpaceAllocator
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Buffer;
			Aspose::Cells::System::Int32 m_DefaultExpandCellcount;
			Aspose::Cells::System::Int32 m_HeaderSize;
			Aspose::Cells::System::Int32 m_CellCount;
			Aspose::Cells::System::Int32 m_AllocatedValue;
			Aspose::Cells::System::Int32 m_Min;
			Aspose::Cells::System::Int32 m_Max;
	public:

			void SetDefaultExpandCellCount(Aspose::Cells::System::Int32 size);
			void Init(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 cellCount);
			bool Allocate(Aspose::Cells::System::Int32 freeSpace);
			Aspose::Cells::System::Int32 GetAllocatedValue();
			void WriteRowHeaderData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos);
			 SpaceAllocatorRow();
		public:
			virtual ~SpaceAllocatorRow();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
