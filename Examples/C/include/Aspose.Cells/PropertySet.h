#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/IO/Stream.h"
//#include "System/String.h"
//#include "System/UInt32.h"
//#include "System/IO/BinaryWriter.h"
//#include "System/Byte.h"
//#include "System/IO/BinaryReader.h"
#include "System/Guid.h"
//#include "System/UInt16.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/NotSupportedException.h"
//#include "System/Text/Encoding.h"
#include "ProperySetSections.h"
#include "System/Array1D.h"
#define STATIC_PROPERTYSET() 


namespace Aspose {
namespace Ss {
	class PropertySet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Guid> mClsid;
			intrusive_ptr<Aspose::Ss::ProperySetSections> mSections;
			 static const Aspose::Cells::System::Int32 FmtIdOffsetPairLength;
	public:

			 PropertySet();
			 PropertySet(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			intrusive_ptr<Aspose::Ss::ProperySetSections> GetSections();
		public:
			virtual ~PropertySet();
	};

}

}
