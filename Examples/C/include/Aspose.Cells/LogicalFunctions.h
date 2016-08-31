#pragma once
#include "System/Array.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/DateTime.h"
//#include "System/TypeCode.h"
#include "System/Array1D.h"
#define STATIC_LOGICALFUNCTIONS() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class LogicalFunctions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> IsErr(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> TYPE(intrusive_ptr<Aspose::Cells::System::Object> object1);
			static intrusive_ptr<Aspose::Cells::System::Object> N(intrusive_ptr<Aspose::Cells::System::Object> object1 , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> NArray(intrusive_ptr<Aspose::Cells::System::Array> a , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> GetErrorType(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> IsODD(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> IsEVEN(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> IsNonText(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> IsText(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			 LogicalFunctions();
		public:
			virtual ~LogicalFunctions();
	};

}

}

}
