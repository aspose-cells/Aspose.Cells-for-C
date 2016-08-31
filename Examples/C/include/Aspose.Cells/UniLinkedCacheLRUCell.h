#pragma once
#include "AbstractCellCache.h"
//#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_UNILINKEDCACHELRUCELL() 

namespace Aspose {
namespace Cells {
class Cell;
class Row;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class UniLinkedCacheLRUCell : public Aspose::Cells::CellsSs::AbstractCellCache
	{
	private:


		class UniCacheCell;

		 friend class UniLinkedCacheLRUCell::UniCacheCell;

		
	class UniCacheCell : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::UniLinkedCacheLRUCell::UniCacheCell> Next;
			Aspose::Cells::Cell* Item;
			 UniCacheCell();
		public:
			virtual ~UniCacheCell();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Count;
			intrusive_ptr<Aspose::Cells::CellsSs::UniLinkedCacheLRUCell::UniCacheCell> m_Most;
			Aspose::Cells::System::Int32 m_RawPos;
	public:

			 UniLinkedCacheLRUCell(Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::Row> row);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 dataPos);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCachedCell(Aspose::Cells::System::Int32 columnIndex);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 columnIndex , bool isNull , bool updateGlobalIndex);
			 virtual void OnDispose(Aspose::Cells::Cell* cell);
			 UniLinkedCacheLRUCell();
		public:
			virtual ~UniLinkedCacheLRUCell();
	};

}

}

}
