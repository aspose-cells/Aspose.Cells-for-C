#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
#include "System/Int64.h"
#include "System/Int32.h"
#include "CellVisitorGatherDependent.h"
#define STATIC_CELLVISITORGATHERDEPENDENTFLAT() 

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
	class CellVisitorGatherDependentFlat : public Aspose::Cells::FormulaModel::CellVisitorGatherDependent
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
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> EMPTY;
			 CellVisitorGatherDependentFlat(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CellVisitorGatherDependentFlat(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> GetDependents();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> GetDependents(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			 virtual bool GatherDependent(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 CellVisitorGatherDependentFlat();
		public:
			virtual ~CellVisitorGatherDependentFlat();
	};

}

}

}
