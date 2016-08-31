#pragma once
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ABSTRACTCELLCACHE() 

namespace Aspose {
namespace Cells {
class Row;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractCellCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::Row* m_Row;
	public:

			 AbstractCellCache(intrusive_ptr<Aspose::Cells::Row> row);
			 virtual void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 dataPos);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCachedCell(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 columnIndex , bool isNull , bool updateGlobalIndex);
			 virtual Aspose::Cells::System::Int32 GetCachedRawPosition();
			 virtual void SetCachedRawPosition(Aspose::Cells::System::Int32 value);
			 virtual void OnDispose(Aspose::Cells::Cell* cell);
			Aspose::Cells::System::Int32 GetCellPosition(Aspose::Cells::System::Int32 columnIndex);
			bool RefreshItem(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32 columnIndex , bool isNull , bool updateGlobalIndex);
			intrusive_ptr<Aspose::Cells::Cell> CreateItem(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 rawPos , bool isNull , bool updateGlobalIndex);
			 AbstractCellCache();
		public:
			virtual ~AbstractCellCache();
	};

}

}

}
