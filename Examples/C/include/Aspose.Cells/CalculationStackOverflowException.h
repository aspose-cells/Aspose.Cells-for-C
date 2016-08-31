#pragma once
#include "System/Exception.h"
#include "System/Object.h"
#define STATIC_CALCULATIONSTACKOVERFLOWEXCEPTION() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalculationStackOverflowException : public Aspose::Cells::System::Exception
	{
	private:

			void Init_Vars();
	public:

			 CalculationStackOverflowException();
		public:
			virtual ~CalculationStackOverflowException();
	};

}

}

}
