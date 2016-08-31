#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "IStringPool.h"
#include "System/Int32.h"
#define STATIC_STRINGPOOLNOGATHER() 

namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}
namespace Aspose {
namespace Cells {
class StringPool;
class RefString;
}
}

namespace Aspose {
namespace Cells {
	class StringPoolNoGather : public Aspose::Cells::CellsSs::IStringPool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::StringPool> _staticStringPool;
			Aspose::Cells::System::Int32 _staticStringPoolSize;
			intrusive_ptr<Aspose::Cells::RefString> _valBuffer;
	public:

			 StringPoolNoGather(intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> globalExpData);
			intrusive_ptr<Aspose::Cells::RefString> GetBySST(Aspose::Cells::System::Int32 sst);
			intrusive_ptr<Aspose::Cells::System::String> GetString(Aspose::Cells::System::Int32 sst);
			intrusive_ptr<Aspose::Cells::RefString> CheckRefString(intrusive_ptr<Aspose::Cells::System::String> value);
			void AddRefString(intrusive_ptr<Aspose::Cells::RefString> refString);
			void AddReadRefString(intrusive_ptr<Aspose::Cells::RefString> val);
			intrusive_ptr<Aspose::Cells::RefString> AddString(intrusive_ptr<Aspose::Cells::System::String> inputString);
			Aspose::Cells::System::Int32 GetCeilingSST();
			Aspose::Cells::System::UInt32 GetTotalStringNumber();
			Aspose::Cells::System::Int32 GetUniqueCount();
			bool IsBuiltIn();
			void RemoveString(intrusive_ptr<Aspose::Cells::RefString> refString);
			void RemoveString(Aspose::Cells::System::Int32 sst);
			 StringPoolNoGather();
		public:
			virtual ~StringPoolNoGather();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
