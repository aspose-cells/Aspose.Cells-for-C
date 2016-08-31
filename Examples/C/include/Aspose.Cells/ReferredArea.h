#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Array2D.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#define STATIC_REFERREDAREA() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class RangeReference;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ReferredArea : public Aspose::Cells::System::Object
#else	class ReferredArea : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> m_RR;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
	public:

			 ReferredArea(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> GetRangeReference();
			bool IsExternalLink();
			intrusive_ptr<Aspose::Cells::System::String> GetExternalFileName();
			intrusive_ptr<Aspose::Cells::System::String> GetSheetName();
			bool IsArea();
			Aspose::Cells::System::Int32 GetEndColumn();
			Aspose::Cells::System::Int32 GetStartColumn();
			Aspose::Cells::System::Int32 GetEndRow();
			Aspose::Cells::System::Int32 GetStartRow();
			intrusive_ptr<Aspose::Cells::System::Object> GetValues();
			intrusive_ptr<Aspose::Cells::System::Object> GetValue(Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 colOffset);
			bool IsEqual(intrusive_ptr<Aspose::Cells::ReferredArea> referredArea);
			 ReferredArea();
		public:
			virtual ~ReferredArea();
	};

}

}
