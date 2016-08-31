#pragma once
#include "Cell.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/Int16.h"
#include "RawCellValueType.h"
#include "System/Int32.h"
#define STATIC_LIGHTSAVECELL() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class FormulaCell;
class StyleFlag;
class RefString;
class Style;
class LightCellsExpData;
class Row;
}
}

namespace Aspose {
namespace Cells {
	class LightSaveCell : public Aspose::Cells::Cell
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::LightCellsExpData> _gatheredData;
			intrusive_ptr<Aspose::Cells::RefString> _strVal;
	public:

			 LightSaveCell(intrusive_ptr<Aspose::Cells::Row> row , intrusive_ptr<Aspose::Cells::LightCellsExpData> gatheredData , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			 virtual void Sync();
			 virtual void SyncDataWithStyle();
			 virtual void UpdateStringValue(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			 virtual void UpdateValue(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value , bool deRefer);
			 virtual void UpdateData(intrusive_ptr<Aspose::Cells::CellsSs::CellData> dataNew , Aspose::Cells::System::Int32 flag , bool deRefer);
			 virtual void UpdateXFIndex(Aspose::Cells::System::Int32 xf);
			void ToDefault(Aspose::Cells::System::Int32 column);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style);
			 virtual intrusive_ptr<Aspose::Cells::Style> GetStyle();
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			 virtual void SetNull();
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::FormulaCell> formula);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , bool explicitFlag);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			 LightSaveCell();
		public:
			virtual ~LightSaveCell();
	};

}

}
