#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "LongArrayList.h"
//#include "System/String.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "CellVisitorGatherDependent.h"
#define STATIC_CELLVISITORGATHERDEPENDENTTREE() 

namespace Aspose {
namespace Cells {
class CellArea;
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorGatherDependentTree : public Aspose::Cells::FormulaModel::CellVisitorGatherDependent
	{
	protected:

			 virtual void SetGatheringArrayFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> fcKeys);
			 virtual void SetGatheredArrayFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> fcKeys , bool isDependent);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> MarkRange();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> mark);
			 virtual void SetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> dependents);
			 virtual void SetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> dependents , intrusive_ptr<Aspose::Cells::CellArea> ca);
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> Static_Array_Init_EMPTY();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> Static_Array_Init_BASECELL();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> Static_Array_Init_PROCESSING();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Collections::LongArrayList*>> m_Stack;
			Aspose::Cells::System::Int32 m_StackPos;
			intrusive_ptr<Aspose::Cells::Collections::LongArrayList> m_CircularList;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> m_ArrayKeys;
			void SetGatheredArrayFormula(Aspose::Cells::System::Int64 resultKey);
			bool AddKey(Aspose::Cells::System::Int64 root , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> vs);
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> EMPTY;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> BASECELL;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> PROCESSING;
			 CellVisitorGatherDependentTree(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CellVisitorGatherDependentTree(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetCleanDependents(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			void Reset();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> GetTopDependents();
			 virtual bool GatherDependent(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 CellVisitorGatherDependentTree();
		public:
			virtual ~CellVisitorGatherDependentTree();
	};

}

}

}
