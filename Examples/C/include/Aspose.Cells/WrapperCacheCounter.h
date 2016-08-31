#pragma once
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/Int32.h"
#define STATIC_WRAPPERCACHECOUNTER() 

namespace Aspose {
namespace Cells {
class SimpleCounter;
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
namespace FormulaModel {
	class WrapperCacheCounter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _cacheSize;
			Aspose::Cells::System::Int32 _cachedCount;
			Aspose::Cells::System::Int32 _defaultCount;
			intrusive_ptr<Aspose::Cells::SimpleCounter> _zeroCounter;
			intrusive_ptr<Aspose::Cells::SimpleCounter> _defaultCounter;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _mapSpecial;
	public:

			 WrapperCacheCounter(Aspose::Cells::System::Int32 size);
			bool GetFullyCached();
			Aspose::Cells::System::Int32 GetCacheSize();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> SetDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			void IncreaseDefaultValueCounter();
			void IncreaseDefaultValueCounter(Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> IncreaseCounter(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			Aspose::Cells::System::Int32 CountForWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> significantValue);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSignificantValue();
			 WrapperCacheCounter();
		public:
			virtual ~WrapperCacheCounter();
	};

}

}

}
