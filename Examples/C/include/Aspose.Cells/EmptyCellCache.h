#pragma once
#include "AbstractCellCache.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_EMPTYCELLCACHE() 

namespace Aspose {
namespace Cells {
class Row;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class EmptyCellCache : public Aspose::Cells::CellsSs::AbstractCellCache
	{
	private:

			void Init_Vars();
	public:

			 EmptyCellCache(intrusive_ptr<Aspose::Cells::Row> row);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 dataPos);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCachedCell(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 columnIndex , bool isNull , bool updateGlobalIndex);
			 virtual void OnDispose(Aspose::Cells::Cell* cell);
			 EmptyCellCache();
		public:
			virtual ~EmptyCellCache();
	};

}

}

}
