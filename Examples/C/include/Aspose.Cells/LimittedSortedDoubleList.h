#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_LIMITTEDSORTEDDOUBLELIST() 


namespace Aspose {
namespace Cells {
namespace GenericCollection {
#ifdef WIN32

	class ASPOSE_CELLS_API LimittedSortedDoubleList : public Aspose::Cells::System::Object
#else	class LimittedSortedDoubleList : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			void Insert(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Double v);
	public:

			Aspose::Cells::System::Int32 MaxCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> DataArray;
			Aspose::Cells::System::Int32 Count;
			bool Large;
			 LimittedSortedDoubleList(Aspose::Cells::System::Int32 MaxCount , bool Large);
			Aspose::Cells::System::Double Get(Aspose::Cells::System::Int32 index);
			void Add(Aspose::Cells::System::Double v);
			 LimittedSortedDoubleList();
		public:
			virtual ~LimittedSortedDoubleList();
	};

}

}

}
