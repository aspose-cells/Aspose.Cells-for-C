#pragma once
//#include "System/Console.h"
#include "CachedTableFormulaResult.h"
//#include "System/String.h"
//#include "System/Int32Helper.h"
#include "CellData.h"
#include "System/Array2D.h"
#include "System/Int16.h"
#include "ICellVisitor.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_CACHEDTABLEFORMULARESULTCALCDIRECTLY() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaCellBackupData;
class FormulaRelInfo;
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
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedTableFormulaResultCalcDirectly : public Aspose::Cells::FormulaModel::CachedTableFormulaResult
	{
	private:


		class CellVisitorTableFormula;

		 friend class CachedTableFormulaResultCalcDirectly::CellVisitorTableFormula;

		
	class CellVisitorTableFormula : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mBuffer;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcDirectly> mParent;
			bool mFirstCell;
			bool mFirstRow;
	public:

			Aspose::Cells::System::Int32 CurrentRow;
			Aspose::Cells::System::Int32 CurrentCol;
			 CellVisitorTableFormula(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcDirectly> parent);
			 CellVisitorTableFormula(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcDirectly::CellVisitorTableFormula> src);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorTableFormula();
		public:
			virtual ~CellVisitorTableFormula();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcDirectly::CellVisitorTableFormula> mVisitor;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> mHeadRowItems;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::FormulaCellBackupData*>> mBackupData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> mVarKeys;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> mVarVals;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> mHeadColItem;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> mHeadTwoItem;
			Aspose::Cells::System::Int16 SN;
			void CalculateSingle(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void DoCalculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void CheckStack(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem(Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			bool InitHeadCol(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool updateSN);
			void UpdateBackupDataSN();
	public:

			 CachedTableFormulaResultCalcDirectly(intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Calculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 CachedTableFormulaResultCalcDirectly();
		public:
			virtual ~CachedTableFormulaResultCalcDirectly();
	};

}

}

}
