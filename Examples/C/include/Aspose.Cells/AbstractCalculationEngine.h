#pragma once
#include "System/Object.h"
#define STATIC_ABSTRACTCALCULATIONENGINE() 

namespace Aspose {
namespace Cells {
class CalculationData;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API AbstractCalculationEngine : public Aspose::Cells::System::Object
#else	class AbstractCalculationEngine : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 virtual void Calculate(intrusive_ptr<Aspose::Cells::CalculationData> data);
			 virtual bool IsParamLiteralRequired();
			 AbstractCalculationEngine();
		public:
			virtual ~AbstractCalculationEngine();
	};

}

}
