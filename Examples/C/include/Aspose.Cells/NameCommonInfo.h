#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_NAMECOMMONINFO() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
	class NameCommonInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> name;
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RawCache;
			bool InCalc;
			bool Volatile;
			Aspose::Cells::System::UInt16 Option;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula;
			bool InvalidFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			void ClearCalculatedCache();
			 NameCommonInfo();
		public:
			virtual ~NameCommonInfo();
	};

}

}
