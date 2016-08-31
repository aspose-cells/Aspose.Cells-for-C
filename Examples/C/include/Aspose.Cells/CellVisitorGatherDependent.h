#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Text/StringBuilder.h"
#include "System/Int64.h"
//#include "System/Int32Helper.h"
//#include "System/UInt16.h"
//#include "System/Boxing.h"
#include "CellData.h"
#include "System/Collections/Hashtable.h"
//#include "System/Int16.h"
#include "ICellVisitor.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Char.h"
#include "AreaIntersectType.h"
#define STATIC_CELLVISITORGATHERDEPENDENT() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaTokenVisitor;
class RangeReference;
class IFormulaNode;
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
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorGatherDependent : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:


		class AreaReference;

		 friend class CellVisitorGatherDependent::AreaReference;

		
	class AreaReference : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellArea> Area;
			Aspose::Cells::System::Int32 SheetIndex;
			bool IsDependent;
			bool InGathering;
			intrusive_ptr<Aspose::Cells::System::Object> Dependents;
			 AreaReference(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> area);
			Aspose::Cells::AreaIntersectType GetIntersectType(intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorGatherDependent::AreaReference> other);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 AreaReference();
		public:
			virtual ~AreaReference();
	};
	private:

			void Init_Vars();
			bool GatherDependent(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorGatherDependent::AreaReference> GetGathering(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> ca);
	protected:

			 static const intrusive_ptr<Aspose::Cells::System::String> COUNT_KEY;
			Aspose::Cells::System::Int32 m_SheetIndex;
			Aspose::Cells::System::Int32 m_Row;
			Aspose::Cells::System::Int32 m_Column;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_DependentMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_AreaMap;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			bool m_CheckSelf;
			bool m_Status;
			 virtual intrusive_ptr<Aspose::Cells::System::Object> MarkRange();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> mark);
			 virtual void SetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> dependents);
			 virtual void SetDependentsInRange(intrusive_ptr<Aspose::Cells::System::Object> dependents , intrusive_ptr<Aspose::Cells::CellArea> ca);
			 virtual void SetGatheringArrayFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> fcKeys);
			 virtual void SetGatheredArrayFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> fcKeys , bool isDependent);
			bool GatherDependentOfFormulaBin(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			bool InGathering(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
	public:

			 CellVisitorGatherDependent(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CellVisitorGatherDependent(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dependentMap);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> GetCurrentRelInfo();
			void SetCurrentRelInfo(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> value);
			 virtual bool GatherDependent(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			Aspose::Cells::System::Int32 GetDependRow();
			Aspose::Cells::System::Int32 GetDependColumn();
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			bool GatherDependent(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> visitor);
			bool GatherDependent(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
			bool GatherDependent(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr);
			static intrusive_ptr<Aspose::Cells::System::String> BuildAreaKey(intrusive_ptr<Aspose::Cells::CellArea> area);
			 CellVisitorGatherDependent();
		public:
			virtual ~CellVisitorGatherDependent();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
