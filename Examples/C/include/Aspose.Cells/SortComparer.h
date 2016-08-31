#pragma once
#include "System/Object.h"
//#include "System/DateTime.h"
#include "System/Collections/IComparer.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Collections/Hashtable.h"
#define STATIC_SORTCOMPARER() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SortComparer : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool m_ascending;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_table;
	public:

			 SortComparer(bool ascending , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> table);
			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> x , intrusive_ptr<Aspose::Cells::System::Object> y);
			 SortComparer();
		public:
			virtual ~SortComparer();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
