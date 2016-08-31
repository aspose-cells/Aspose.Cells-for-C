#pragma once
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_SXNAMEPAIR() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxNamePair : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 Field;
			Aspose::Cells::System::UInt16 ItemIndex;
			Aspose::Cells::System::UInt16 Option;
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxNamePair> source);
			 SxNamePair();
		public:
			virtual ~SxNamePair();
	};

}

}

}
