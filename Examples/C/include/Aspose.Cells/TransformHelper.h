#pragma once
//#include "System/StringHelperPal.h"
#include "System/DateTime.h"
#include "System/Double.h"
#include "Constants.h"
//#include "System/TimeSpan.h"
//#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_TRANSFORMHELPER() 


namespace Aspose {
namespace Cells {
	class TransformHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeFromDouble(Aspose::Cells::System::Double doubleValue , bool date1904);
			static Aspose::Cells::System::Double GetDoubleFromDateTime(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , bool date1904);
			static bool IsBuiltInError(intrusive_ptr<Aspose::Cells::System::String> stringType);
			 TransformHelper();
		public:
			virtual ~TransformHelper();
	};

}

}
