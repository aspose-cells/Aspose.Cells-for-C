#pragma once
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/NotImplementedException.h"
#include "TTTable.h"
#define STATIC_CFF() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class CffTopDict;
class CffIndex;
class CffReader;
}
}
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryReader;
class BigEndianBinaryWriter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class Cff : public Aspose::Cells::Internal::Rendering::TrueType::TTTable
	{
	private:

			void Init_Vars();
			void ReadHeader();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffReader> mReader;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffIndex> mTopDictIndex;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffTopDict> mTopDict;
	public:

			 Cff(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			bool IsCidFont();
			 virtual void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			 Cff();
		public:
			virtual ~Cff();
	};

}

}

}

}

}
