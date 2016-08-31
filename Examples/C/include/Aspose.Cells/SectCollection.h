#pragma once
#include "System/IO/MemoryStream.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/UInt32.h"
//#include "System/IO/BinaryWriter.h"
//#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Text/Encoding.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SECTCOLLECTION() 


namespace Aspose {
namespace Ss {
	class SectCollection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mItems;
	public:

			 SectCollection();
			 SectCollection(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void Read(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::Int32 entries);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ToMemoryStream();
			void Add(Aspose::Cells::System::UInt32 value);
			Aspose::Cells::System::UInt32 Get(Aspose::Cells::System::UInt32 index);
			void Set(Aspose::Cells::System::UInt32 index , Aspose::Cells::System::UInt32 value);
			Aspose::Cells::System::Int32 GetCount();
		public:
			virtual ~SectCollection();
	};

}

}
