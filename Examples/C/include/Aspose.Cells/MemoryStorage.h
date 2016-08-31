#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Collections/SortedList.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/InvalidOperationException.h"
//#include "System/Int64.h"
#include "System/Guid.h"
#define STATIC_MEMORYSTORAGE() 


namespace Aspose {
namespace Ss {
#ifdef WIN32

	class ASPOSE_CELLS_API MemoryStorage : public Aspose::Cells::System::Collections::SortedList
#else	class MemoryStorage : public Aspose::Cells::System::Collections::SortedList
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Guid> mClsid;
	public:

			 MemoryStorage();
			 MemoryStorage(intrusive_ptr<Aspose::Cells::System::Guid> clsid);
			void Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Ss::MemoryStorage> storage);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetStream(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> FetchStream(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Ss::MemoryStorage> GetStorage(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Ss::MemoryStorage> FetchStorage(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::Guid> GetClsid();
			void SetClsid(intrusive_ptr<Aspose::Cells::System::Guid> value);
		public:
			virtual ~MemoryStorage();
	};

}

}
