#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RowProperties.h"
#define STATIC_ABSTRACTROWCACHE() 

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
	class AbstractRowCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> m_Props;
	protected:

			Aspose::Cells::Cells* m_Cells;
			Aspose::Cells::RowCollection* m_Rows;
	public:

			 AbstractRowCache(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Row> GetCachedRow(Aspose::Cells::System::Int32 rowIndex);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 dataPos , bool cacheCell);
			 virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex , bool isNull , bool updateGlobalIndex , bool cacheCell);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetRowPosition(Aspose::Cells::System::Int32 rowIndex);
			bool RefreshItem(intrusive_ptr<Aspose::Cells::Row> row , bool isNull , bool updateGlobalIndex);
			intrusive_ptr<Aspose::Cells::Row> CreateItem(Aspose::Cells::System::Int32 rowIndex , bool isNull , bool updateGlobalIndex , bool cacheCell);
			 AbstractRowCache();
		public:
			virtual ~AbstractRowCache();
	};

}

}

}
