#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Int16.h"
#include "System/String.h"
#define STATIC_RANGEREFERENCE() 

namespace Aspose {
namespace Cells {
class CellArea;
class Range;
class ExternalSheet;
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
	class RangeReference : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 START_ROW_RELATIVE_MASK;
			 static const Aspose::Cells::System::Int32 START_ROW_RELATIVE_UNSET;
			 static const Aspose::Cells::System::Int32 START_COLUMN_RELATIVE_MASK;
			 static const Aspose::Cells::System::Int32 START_COLUMN_RELATIVE_UNSET;
			 static const Aspose::Cells::System::Int32 END_ROW_RELATIVE_MASK;
			 static const Aspose::Cells::System::Int32 END_ROW_RELATIVE_UNSET;
			 static const Aspose::Cells::System::Int32 END_COLUMN_RELATIVE_MASK;
			 static const Aspose::Cells::System::Int32 END_COLUMN_RELATIVE_UNSET;
			 static const Aspose::Cells::System::Int32 FORCE_AREA_MASK;
			 static const Aspose::Cells::System::Int32 FORCE_AREA_UNSET;
			 static const Aspose::Cells::System::Int32 RELATIVE_ROW;
			 static const Aspose::Cells::System::Int32 RELATIVE_COLUMN;
			 static const Aspose::Cells::System::Int32 RELATIVE_ANY;
			intrusive_ptr<Aspose::Cells::ExternalSheet> m_ExternalSheet;
			Aspose::Cells::System::Int32 m_StartRow;
			Aspose::Cells::System::Int32 m_EndRow;
			Aspose::Cells::System::Int16 m_StartColumn;
			Aspose::Cells::System::Int16 m_EndColumn;
			Aspose::Cells::System::Byte m_Flag;
	public:

			 RangeReference();
			 RangeReference(intrusive_ptr<Aspose::Cells::ExternalSheet> externalSheet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			 RangeReference(intrusive_ptr<Aspose::Cells::ExternalSheet> externalSheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 RangeReference(intrusive_ptr<Aspose::Cells::ExternalSheet> externalSheet , intrusive_ptr<Aspose::Cells::CellArea> ca);
			 RangeReference(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr);
			void Copy(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetExternalSheet();
			void SetExternalSheet(intrusive_ptr<Aspose::Cells::ExternalSheet> value);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetRelExternalSheet(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			Aspose::Cells::System::Int32 GetStartRow();
			void SetStartRow(Aspose::Cells::System::Int32 value);
			bool GetAbsoluteStartRow();
			void SetAbsoluteStartRow(bool value);
			Aspose::Cells::System::Int32 GetStartColumn();
			void SetStartColumn(Aspose::Cells::System::Int32 value);
			bool GetAbsoluteStartColumn();
			void SetAbsoluteStartColumn(bool value);
			Aspose::Cells::System::Int32 GetEndRow();
			void SetEndRow(Aspose::Cells::System::Int32 value);
			bool GetAbsoluteEndRow();
			void SetAbsoluteEndRow(bool value);
			Aspose::Cells::System::Int32 GetEndColumn();
			void SetEndColumn(Aspose::Cells::System::Int32 value);
			bool GetAbsoluteEndColumn();
			void SetAbsoluteEndColumn(bool value);
			bool HasRelativeRow();
			bool HasRelativeColumn();
			bool HasRelativeDimension();
			bool IsSingle();
			bool IsSingleRow();
			bool IsSingleColumn();
			Aspose::Cells::System::Int32 GetWidth();
			Aspose::Cells::System::Int32 GetHeight();
			bool GetForceArea();
			void SetForceArea(bool value);
			void ToValidArea();
			void ToValidAddress();
			 virtual Aspose::Cells::System::Int32 GetHashCode();
			 virtual bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj);
			bool Equals(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool Contains(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			bool ContainsRow(Aspose::Cells::System::Int32 row);
			bool ContainsColumn(Aspose::Cells::System::Int32 col);
			intrusive_ptr<Aspose::Cells::CellArea> ToCellArea();
			intrusive_ptr<Aspose::Cells::Range> ToRange(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool Equals(intrusive_ptr<Aspose::Cells::CellArea> ca);
			bool EqualsDimension(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> another);
			bool EqualsDimension(intrusive_ptr<Aspose::Cells::CellArea> another);
			bool EqualsExternalSheet(intrusive_ptr<Aspose::Cells::ExternalSheet> es);
			bool EqualsExternalSheet(intrusive_ptr<Aspose::Cells::ExternalSheet> es , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
		public:
			virtual ~RangeReference();
	};

}

}

}
