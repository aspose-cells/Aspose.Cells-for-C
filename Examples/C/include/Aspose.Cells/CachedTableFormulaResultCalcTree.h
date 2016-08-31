#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Int64Helper.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "ICellVisitor.h"
#include "CachedTableFormulaResult.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#include "System/Int64.h"
#include "System/IO/StreamWriter.h"
#include "FormulaNodeNull.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "CellData.h"
#include "System/Int32.h"
//#include "System/IO/TextWriter.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/IO/File.h"
#define STATIC_CACHEDTABLEFORMULARESULTCALCTREE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class CellVisitorGatherDependentTree;
class IFormulaNode;
class FormulaRelInfo;
class FormulaNodeValuesCache;
class CellVisitorGatherDependent;
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
	class CachedTableFormulaResultCalcTree : public Aspose::Cells::FormulaModel::CachedTableFormulaResult
	{
	private:


		class CellVisitorTableFormula;

		 friend class CachedTableFormulaResultCalcTree::CellVisitorTableFormula;

		class CalculateItem;

		 friend class CachedTableFormulaResultCalcTree::CalculateItem;

		class CalculateItemSimple;

		 friend class CachedTableFormulaResultCalcTree::CalculateItemSimple;

		class CalculateItemInputDependentNone;

		 friend class CachedTableFormulaResultCalcTree::CalculateItemInputDependentNone;

		class CalculateItemInputDependentRow;

		 friend class CachedTableFormulaResultCalcTree::CalculateItemInputDependentRow;

		class CalculateItemInputDependentCol;

		 friend class CachedTableFormulaResultCalcTree::CalculateItemInputDependentCol;

		class CalculateItemInputDependentTwo;

		 friend class CachedTableFormulaResultCalcTree::CalculateItemInputDependentTwo;

		
	class CellVisitorTableFormula : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mBuffer;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> mParent;
			bool mFirstCell;
			bool mFirstRow;
	public:

			Aspose::Cells::System::Int32 CurrentRow;
			Aspose::Cells::System::Int32 CurrentCol;
			 CellVisitorTableFormula(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
			 CellVisitorTableFormula(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CellVisitorTableFormula> src);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorTableFormula();
		public:
			virtual ~CellVisitorTableFormula();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class CalculateItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> mValueNode;
			 CalculateItem(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
	public:

			 virtual bool IsStaticValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
			 CalculateItem();
		public:
			virtual ~CalculateItem();
	};

		
	class CalculateItemSimple : public Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem
	{
	private:

			void Init_Vars();
	public:

			 CalculateItemSimple(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
			 virtual bool IsStaticValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
			 CalculateItemSimple();
		public:
			virtual ~CalculateItemSimple();
	};

		
	class CalculateItemInputDependentNone : public Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int64 mItemKey;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> mClearNodes;
			 virtual void ProcessDependents(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
	public:

			 virtual bool IsStaticValue();
			 CalculateItemInputDependentNone(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , Aspose::Cells::System::Int64 itemKey , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> clearNodes);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
			 CalculateItemInputDependentNone();
		public:
			virtual ~CalculateItemInputDependentNone();
	};

		
	class CalculateItemInputDependentRow : public Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItemInputDependentNone
	{
	protected:

			 virtual void ProcessDependents(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mDirectDependents;
	public:

			 CalculateItemInputDependentRow(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , Aspose::Cells::System::Int64 itemKey , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> clearNodes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> directDependents);
			 CalculateItemInputDependentRow();
		public:
			virtual ~CalculateItemInputDependentRow();
	};

		
	class CalculateItemInputDependentCol : public Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItemInputDependentNone
	{
	protected:

			 virtual void ProcessDependents(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mDirectDependents;
	public:

			 CalculateItemInputDependentCol(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , Aspose::Cells::System::Int64 itemKey , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> clearNodes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> directDependents);
			 CalculateItemInputDependentCol();
		public:
			virtual ~CalculateItemInputDependentCol();
	};

		
	class CalculateItemInputDependentTwo : public Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItemInputDependentNone
	{
	protected:

			 virtual void ProcessDependents(intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree> parent);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mDirectDependentsRow;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mDirectDependentsCol;
	public:

			 CalculateItemInputDependentTwo(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , Aspose::Cells::System::Int64 itemKey , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> clearNodes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> directDependentsRow , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> directDependentsCol);
			 CalculateItemInputDependentTwo();
		public:
			virtual ~CalculateItemInputDependentTwo();
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem> CALC_ITEM_NULL;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CellVisitorTableFormula> mVisitor;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem*>> mHeadRowItems;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> mInputCacheRow;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> mInputCacheCol;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mDependentMapRow;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mDependentMapCol;
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorGatherDependentTree> mDependentVisitorRow;
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorGatherDependentTree> mDependentVisitorCol;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mBackupData;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem> mHeadColItem;
			Aspose::Cells::System::Int64 mSign;
			void CalculateSingle(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void DoCalculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			bool Preprocess(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> cache , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> alNonCache , Aspose::Cells::System::Int32 checkLimit , intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorGatherDependent> dependentVisitor);
			void ChangeSign();
			void GenDebugData(intrusive_ptr<Aspose::Cells::System::String> fnHeader);
			void GenDebugData(intrusive_ptr<Aspose::Cells::System::IO::StreamWriter> sw , intrusive_ptr<Aspose::Cells::System::Object> key , intrusive_ptr<Aspose::Cells::System::Object> v);
			void GenDebugData(intrusive_ptr<Aspose::Cells::System::IO::StreamWriter> sw , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap , Aspose::Cells::System::Int64 key , intrusive_ptr<Aspose::Cells::System::String> header);
			void UpdateCalculationFlag(Aspose::Cells::System::Int64 key , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			void CalculateDependents(Aspose::Cells::System::Int64 key , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			void AddNonCache(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> alNonCache , Aspose::Cells::System::Int32 checkLimit);
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedTableFormulaResultCalcTree::CalculateItem> BuildItem(Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			void InitHeadCol(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
	public:

			 CachedTableFormulaResultCalcTree(intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Calculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 CachedTableFormulaResultCalcTree();
		public:
			virtual ~CachedTableFormulaResultCalcTree();
	};

}

}

}
