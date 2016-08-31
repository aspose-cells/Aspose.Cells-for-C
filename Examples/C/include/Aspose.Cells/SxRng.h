#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/DateTime.h"
//#include "System/Boxing.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "PivotGroupByType.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SXRNG() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API SxRng : public Aspose::Cells::System::Object
#else	class SxRng : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool _isAutoStart;
			bool _isAutoEnd;
			Aspose::Cells::Pivot::PivotGroupByType _groupbyType;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _data;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _keepData;
			intrusive_ptr<Aspose::Cells::System::DateTime> _startDate;
			intrusive_ptr<Aspose::Cells::System::DateTime> _endDate;
			Aspose::Cells::System::Double _startNum;
			Aspose::Cells::System::Double _endNum;
			Aspose::Cells::System::Double _groupInterval;
			Aspose::Cells::System::Int32 _baseIndex;
			Aspose::Cells::System::Int32 _parentIndex;
			intrusive_ptr<Aspose::Cells::Pivot::SxFDB> _sxfdb;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _discretePr;
			 SxRng(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxRng> source);
			intrusive_ptr<Aspose::Cells::System::Object> IsAutoStart();
			intrusive_ptr<Aspose::Cells::System::Object> IsAutoEnd();
			intrusive_ptr<Aspose::Cells::System::Object> GetStart();
			intrusive_ptr<Aspose::Cells::System::Object> GetEnd();
			intrusive_ptr<Aspose::Cells::System::Object> GetBy();
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> GetGroupByTypes();
			 SxRng();
		public:
			virtual ~SxRng();
	};

}

}

}
