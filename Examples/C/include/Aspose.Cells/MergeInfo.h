#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_MERGEINFO() 


namespace Aspose {
namespace Cells {
	class MergeInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 MergeInfo(Aspose::Cells::System::Int32 insertCount , Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> smartsInRow);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> smartsInRow;
			Aspose::Cells::System::Int32 InsertCount;
			Aspose::Cells::System::Int32 Row;
			 MergeInfo();
		public:
			virtual ~MergeInfo();
	};

}

}
