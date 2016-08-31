#pragma once
#include "System/Object.h"
#include "AbstractRowCache.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_UNILINKEDCACHELRUROW() 

namespace Aspose {
namespace Cells {
class Cells;
class RowCollection;
class Row;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class UniLinkedCacheLRURow : public Aspose::Cells::CellsSs::AbstractRowCache
	{
	private:


		class UniCacheRow;

		 friend class UniLinkedCacheLRURow::UniCacheRow;

		
	class UniCacheRow : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::UniLinkedCacheLRURow::UniCacheRow> Next;
			intrusive_ptr<Aspose::Cells::Row> Item;
			 UniCacheRow();
		public:
			virtual ~UniCacheRow();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Count;
			Aspose::Cells::System::Int32 m_RawPos;
			intrusive_ptr<Aspose::Cells::CellsSs::UniLinkedCacheLRURow::UniCacheRow> m_Most;
	public:

			 UniLinkedCacheLRURow(Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Row> GetCachedRow(Aspose::Cells::System::Int32 rowIndex);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 dataPos , bool cacheCell);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex , bool isNull , bool updateGlobalIndex , bool cacheCell);
			 UniLinkedCacheLRURow();
		public:
			virtual ~UniLinkedCacheLRURow();
	};

}

}

}
