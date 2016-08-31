#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "System/Double.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RECORD0864() 

namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class PivotField;
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class Record0864 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> infoData);
			static Aspose::Cells::System::Int32 Write0864ToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0 , Aspose::Cells::System::Byte sxc , Aspose::Cells::System::Byte sxd , intrusive_ptr<Aspose::Cells::System::Object> obj , Aspose::Cells::System::Double date);
			static Aspose::Cells::System::Int32 WriteGlobalToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0 , Aspose::Cells::System::Int32 streamId , Aspose::Cells::System::Double date);
			static Aspose::Cells::System::Int32 GetRecordSizeInGlobal();
			static Aspose::Cells::System::Int32 RecordSizeInPivot(intrusive_ptr<Aspose::Cells::System::String> name);
			static Aspose::Cells::System::Int32 RecordSize(Aspose::Cells::System::Byte sxc , Aspose::Cells::System::Byte sxd , intrusive_ptr<Aspose::Cells::System::Object> obj);
			static void WriteInPivotToBin(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			static void WriteInCacheToBin(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			static void Write0864Record(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int32 sxc , Aspose::Cells::System::Int32 sxd , intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			static void WriteSxAddlSXCField12SXDVer12Info(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			static void WriteSxAddlSXCViewSXDid(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::System::String> name);
			static void WriteSxAddlSXCCacheSXDid(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int32 id);
			static void WriteSxAddlSXCCacheSXDInvRefreshReal(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			static void WriteSxAddlSXCViewSXDTableStyleClient(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::System::String> name);
			static void WriteSxAddlSXCViewSXDVer10Info(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			static void WriteSxAddlSXCViewSXDVer12Info(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			static void WriteSxAddlSXCViewSXDEnd(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			static void WriteSxAddlSXCCacheSXDEnd(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			 Record0864();
		public:
			virtual ~Record0864();
	};

}

}

}

}
