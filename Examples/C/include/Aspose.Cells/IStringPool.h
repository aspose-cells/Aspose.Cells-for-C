#pragma once
#include "System/Object.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_ISTRINGPOOL() 

namespace Aspose {
namespace Cells {
class RefString;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IStringPool : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::RefString> GetBySST(Aspose::Cells::System::Int32 sst) = 0;
			virtual intrusive_ptr<Aspose::Cells::System::String> GetString(Aspose::Cells::System::Int32 sst) = 0;
			virtual void AddRefString(intrusive_ptr<Aspose::Cells::RefString> val) = 0;
			virtual void AddReadRefString(intrusive_ptr<Aspose::Cells::RefString> val) = 0;
			virtual intrusive_ptr<Aspose::Cells::RefString> CheckRefString(intrusive_ptr<Aspose::Cells::System::String> value) = 0;
			virtual intrusive_ptr<Aspose::Cells::RefString> AddString(intrusive_ptr<Aspose::Cells::System::String> value) = 0;
			virtual void RemoveString(intrusive_ptr<Aspose::Cells::RefString> value) = 0;
			virtual void RemoveString(Aspose::Cells::System::Int32 sst) = 0;
			virtual Aspose::Cells::System::Int32 GetCeilingSST() = 0;
			virtual Aspose::Cells::System::UInt32 GetTotalStringNumber() = 0;
			virtual Aspose::Cells::System::Int32 GetUniqueCount() = 0;
			virtual bool IsBuiltIn() = 0;
		public:
	};

}

}

}
