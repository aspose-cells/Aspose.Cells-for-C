#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_EVAHANDLER() 

namespace Aspose {
namespace Cells {
class Workbook;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class EvaHandler : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void InCreaseOpenCounter(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static bool IsEvaluation(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void AddWatermark(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 EvaHandler();
		public:
			virtual ~EvaHandler();
	};

}

}
