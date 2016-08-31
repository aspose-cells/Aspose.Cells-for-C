#pragma once
#include "System/Object.h"
#include "System/Exception.h"
#include "System/Int32.h"
#define STATIC_CALCULATIONDENOTATIONEXCEPTION() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalculationDenotationException : public Aspose::Cells::System::Exception
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mType;
			intrusive_ptr<Aspose::Cells::System::Object> mObj;
	public:

			 static const Aspose::Cells::System::Int32 SharedFormulaEnterVisitor;
			 static const Aspose::Cells::System::Int32 SharedFormulaBreakVisitor;
			 CalculationDenotationException(Aspose::Cells::System::Int32 denotationType , intrusive_ptr<Aspose::Cells::System::Object> denotationObj);
			Aspose::Cells::System::Int32 GetDenotationType();
			intrusive_ptr<Aspose::Cells::System::Object> GetDenotationObject();
			 CalculationDenotationException();
		public:
			virtual ~CalculationDenotationException();
	};

}

}

}
