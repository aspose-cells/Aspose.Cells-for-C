#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SXEX() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxEX : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int16 _sizeOfFormats;
			intrusive_ptr<Aspose::Cells::System::String> _errorString;
			intrusive_ptr<Aspose::Cells::System::String> _nullString;
			intrusive_ptr<Aspose::Cells::System::String> _tag;
			Aspose::Cells::System::Int16 _sizeOfRTSxSelects;
			Aspose::Cells::System::UInt16 _option1;
			Aspose::Cells::System::UInt16 _option2;
			intrusive_ptr<Aspose::Cells::System::String> _pageFieldStyle;
			intrusive_ptr<Aspose::Cells::System::String> _tableStyle;
			intrusive_ptr<Aspose::Cells::System::String> _vacateStyle;
			Aspose::Cells::Pivot::PivotTable* _u_pivotTable;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Keeped;
			 SxEX(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxEX> record);
			void SetOption2(bool boolValue , Aspose::Cells::System::Int32 mask);
			bool GetOption2(Aspose::Cells::System::Int32 mask);
			void SetOption1(bool boolValue , Aspose::Cells::System::Int32 mask);
			bool GetOption1(Aspose::Cells::System::Int32 mask);
			 SxEX();
		public:
			virtual ~SxEX();
	};

}

}

}
