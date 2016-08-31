#pragma once
#include "System/Byte.h"
#include "Revision.h"
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "RevisionFormulaExpressionType.h"
#include "System/Array1D.h"
#define STATIC_REVISIONUNDO() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionUndo : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionUndo();
			 RevisionUndo(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			Aspose::Cells::System::Byte Ptg;
			void SetPtgOption(bool isReference3D , bool isArrayEntered , bool isValueNeeded , bool isCrossSheetMove , Aspose::Cells::Revisions::RevisionFormulaExpressionType expression);
			static Aspose::Cells::Revisions::RevisionFormulaExpressionType ToExpressionType(bool isArea , bool isError , bool isComputed);
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> GetPtgOption();
			intrusive_ptr<Aspose::Cells::System::String> DefinedName;
			intrusive_ptr<Aspose::Cells::CellArea> CellArea;
			Aspose::Cells::System::Int32 Index;
			bool IsDefinedNameFormula;
			bool UseSh2;
			Aspose::Cells::System::Int32 Row;
			Aspose::Cells::System::Int32 Column;
			intrusive_ptr<Aspose::Cells::System::String> GetCellName();
			void SetCellName(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 TabId;
		public:
			virtual ~RevisionUndo();
	};

}

}

}
