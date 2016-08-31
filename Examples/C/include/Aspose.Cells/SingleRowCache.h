#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "AbstractRowCache.h"
#define STATIC_SINGLEROWCACHE() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Cells;
class Row;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class SingleRowCache : public Aspose::Cells::CellsSs::AbstractRowCache
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Row> m_Row;
			Aspose::Cells::System::Int32 m_RawPos;
	public:

			 SingleRowCache(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Row> GetCachedRow(Aspose::Cells::System::Int32 rowIndex);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 dataPos , bool cacheCell);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex , bool isNull , bool updateGlobalIndex , bool cacheCell);
			 SingleRowCache();
		public:
			virtual ~SingleRowCache();
	};

}

}

}
