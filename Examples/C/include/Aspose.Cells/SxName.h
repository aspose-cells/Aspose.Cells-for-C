#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#define STATIC_SXNAME() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxNamePairs;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxName : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::SxNamePairs> m_pairs;
	public:

			 SxName();
			 SxName(Aspose::Cells::System::Int32 field);
			 SxName(Aspose::Cells::System::Int32 field , Aspose::Cells::System::Int32 item);
			Aspose::Cells::System::UInt16 Option;
			Aspose::Cells::System::UInt16 Field;
			Aspose::Cells::System::UInt16 Function;
			intrusive_ptr<Aspose::Cells::Pivot::SxNamePairs> GetInternalPairs();
			intrusive_ptr<Aspose::Cells::Pivot::SxNamePairs> GetPairs();
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxName> source);
		public:
			virtual ~SxName();
	};

}

}

}
