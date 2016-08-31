#pragma once
#include "System/Object.h"
//#include "System/String.h"
#define STATIC_ABSTRACTENUMERATOR() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class AbstractEnumerator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			 virtual bool MoveNext();
			 virtual void Reset();
			bool HasNext();
			intrusive_ptr<Aspose::Cells::System::Object> Next();
			 virtual void Remove();
			 AbstractEnumerator();
		public:
			virtual ~AbstractEnumerator();
	};

}

}

}
