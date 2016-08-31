#pragma once
#include "System/Object.h"
#define STATIC_CELLSUTIL() 


namespace Aspose {
namespace Cells {
namespace Helper {
	class CellsUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsEvaluation();
			 CellsUtil();
		public:
			virtual ~CellsUtil();
	};

}

}

}
