#pragma once
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/UInt32.h"
#include "IStringPool.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_STRINGPOOLGATHER() 

namespace Aspose {
namespace Cells {
class StringPool;
class LightCellsExpData;
class RefString;
}
}

namespace Aspose {
namespace Cells {
	class StringPoolGather : public Aspose::Cells::CellsSs::IStringPool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::LightCellsExpData> _expData;
			intrusive_ptr<Aspose::Cells::StringPool> _staticStringPool;
			Aspose::Cells::System::Int32 _staticStringPoolSize;
			bool _gatherSstAlways;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _hmExtraString;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _alExtraString;
			Aspose::Cells::System::UInt32 _strRefCount;
	public:

			 StringPoolGather(intrusive_ptr<Aspose::Cells::LightCellsExpData> expData);
			bool HasExtraString();
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
			 StringPoolGather();
		public:
			virtual ~StringPoolGather();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
