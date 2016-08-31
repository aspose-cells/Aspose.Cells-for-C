#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/Boolean.h"
#include "ErrorType.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTCACHETOP10() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCacheTop10 : public Aspose::Cells::System::Object
	{
	private:


		class PivotCacheTop10Item;

		 friend class PivotCacheTop10::PivotCacheTop10Item;

		
	class PivotCacheTop10Item : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> Value;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Indexes;
			 PivotCacheTop10Item();
		public:
			virtual ~PivotCacheTop10Item();
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list;
			void Add(Aspose::Cells::System::Double doubleValue , Aspose::Cells::System::Int32 index);
			void Add(Aspose::Cells::ErrorType errorType , Aspose::Cells::System::Int32 index);
	public:

			bool IsAscend;
			Aspose::Cells::System::Int32 Count;
			 PivotCacheTop10(bool isAscend , Aspose::Cells::System::Int32 count);
			void Add(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetTop10();
			 PivotCacheTop10();
		public:
			virtual ~PivotCacheTop10();
	};

}

}

}
