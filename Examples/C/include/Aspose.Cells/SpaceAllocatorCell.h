#pragma once
#include "System/Object.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "ISpaceAllocator.h"
#define STATIC_SPACEALLOCATORCELL() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class SpaceAllocatorCell : public Aspose::Cells::CellsSs::ISpaceAllocator
	{
	private:

			void Init_Vars();
			bool m_Exact;
			Aspose::Cells::System::Int32 m_ExpandSize;
			Aspose::Cells::System::Int32 m_ExpandCellBufferSize;
			Aspose::Cells::System::Int32 m_RowCount;
			Aspose::Cells::System::Int32 m_AllocatedValue;
	public:

			void SetExpandCellBufferSize(Aspose::Cells::System::Int32 size);
			void Init(Aspose::Cells::System::Int32 totalSize , Aspose::Cells::System::Int32 rowCount);
			bool Allocate(Aspose::Cells::System::Int32 freeSpace);
			Aspose::Cells::System::Int32 GetAllocatedValue();
			 SpaceAllocatorCell();
		public:
			virtual ~SpaceAllocatorCell();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
