#pragma once
#include "System/Object.h"
#include "IStringPool.h"
#include "System/UInt32.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_STRINGPOOLREAD() 

namespace Aspose {
namespace Cells {
class RefString;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class StringPoolRead : public Aspose::Cells::CellsSs::IStringPool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _readList;
	public:

			intrusive_ptr<Aspose::Cells::RefString> GetBySST(Aspose::Cells::System::Int32 sst);
			intrusive_ptr<Aspose::Cells::System::String> GetString(Aspose::Cells::System::Int32 sst);
			void AddRefString(intrusive_ptr<Aspose::Cells::RefString> val);
			void AddReadRefString(intrusive_ptr<Aspose::Cells::RefString> val);
			intrusive_ptr<Aspose::Cells::RefString> CheckRefString(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::RefString> AddString(intrusive_ptr<Aspose::Cells::System::String> value);
			void RemoveString(intrusive_ptr<Aspose::Cells::RefString> value);
			void RemoveString(Aspose::Cells::System::Int32 sst);
			Aspose::Cells::System::Int32 GetCeilingSST();
			Aspose::Cells::System::UInt32 GetTotalStringNumber();
			Aspose::Cells::System::Int32 GetUniqueCount();
			bool IsBuiltIn();
			 StringPoolRead();
		public:
			virtual ~StringPoolRead();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
