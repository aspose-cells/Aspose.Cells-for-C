#pragma once
#include "System/Object.h"
#define STATIC_OUTLINE() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Outline : public Aspose::Cells::System::Object
#else	class Outline : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool SummaryRowBelow;
			bool SummaryColumnRight;
			 Outline();
			void Copy(intrusive_ptr<Aspose::Cells::Outline> source);
		public:
			virtual ~Outline();
	};

}

}
