#pragma once
#include "System/Object.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_ABOVEAVERAGE() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API AboveAverage : public Aspose::Cells::System::Object
#else	class AboveAverage : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool _isAboveAverage;
			bool _isEqualAverage;
			Aspose::Cells::System::Int32 _stdDev;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::AboveAverage> source);
			bool IsAboveAverage();
			void SetIsAboveAverage(bool value);
			bool IsEqualAverage();
			void SetIsEqualAverage(bool value);
			Aspose::Cells::System::Int32 GetStdDev();
			void SetStdDev(Aspose::Cells::System::Int32 value);
			 AboveAverage();
		public:
			virtual ~AboveAverage();
	};

}

}
