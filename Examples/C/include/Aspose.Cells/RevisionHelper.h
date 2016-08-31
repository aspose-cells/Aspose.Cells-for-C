#pragma once
#include "System/String.h"
#include "RevisionFormulaExpressionType.h"
#include "RevisionActionType.h"
#include "System/Object.h"
#define STATIC_REVISIONHELPER() 


namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::Revisions::RevisionFormulaExpressionType ToFormulaExpressionType(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> ToFormulaExpressionValue(Aspose::Cells::Revisions::RevisionFormulaExpressionType type);
			static Aspose::Cells::Revisions::RevisionActionType ToRevisionActionType(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> ToRevisionActionValue(Aspose::Cells::Revisions::RevisionActionType type);
			 RevisionHelper();
		public:
			virtual ~RevisionHelper();
	};

}

}

}
