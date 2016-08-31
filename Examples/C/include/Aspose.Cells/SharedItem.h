#pragma once
#include "System/Object.h"
#include "System/String.h"
#define STATIC_SHAREDITEM() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SharedItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> _value;
			bool _isCalculated;
			bool _unUsed;
			intrusive_ptr<Aspose::Cells::System::String> UnsedString;
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> source);
			 SharedItem();
		public:
			virtual ~SharedItem();
	};

}

}

}
