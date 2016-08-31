#pragma once
#include "System/IO/MemoryStream.h"
#include "DirEntry.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/IO/BinaryWriter.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DIRENTRYCOLLECTION() 


namespace Aspose {
namespace Ss {
	class DirEntryCollection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Ss::DirEntry> FindEntryInSiblings(intrusive_ptr<Aspose::Ss::DirEntry> entry , intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mItems;
	public:

			intrusive_ptr<Aspose::Ss::DirEntry> GetIndexObject(Aspose::Cells::System::UInt32 index);
			void Set(Aspose::Cells::System::UInt32 index , intrusive_ptr<Aspose::Ss::DirEntry> value);
			Aspose::Cells::System::Int32 GetCount();
			void Add(intrusive_ptr<Aspose::Ss::DirEntry> dirEntry);
			intrusive_ptr<Aspose::Ss::DirEntry> GetEntryInRoot(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Ss::DirEntry> GetSafe(intrusive_ptr<Aspose::Ss::DirEntry> parentEntry , Aspose::Cells::System::UInt32 childIndex);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ToMemoryStream();
			 DirEntryCollection();
		public:
			virtual ~DirEntryCollection();
	};

}

}
