#pragma once
#include "CellData.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "ICellVisitor.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Int16.h"
#define STATIC_CELLVISITORALGORITHM() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IStatisticsAlgorithm;
class IFormulaNode;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class FormulaCell;
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorAlgorithm : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> m_Algorithm;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> m_Error;
			bool m_IsErr;
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			intrusive_ptr<Aspose::Cells::Worksheet> m_Sheet;
			 virtual bool IgnoreRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			 virtual bool IgnoreFormula(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
	public:

			 CellVisitorAlgorithm(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm);
			void SetWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			void Reset();
			bool IsError();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			 CellVisitorAlgorithm();
		public:
			virtual ~CellVisitorAlgorithm();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
