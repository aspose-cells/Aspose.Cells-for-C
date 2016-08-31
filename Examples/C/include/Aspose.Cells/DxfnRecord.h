#pragma once
#include "System/UInt16.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_DXFNRECORD() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DxfnRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void Init();
			Aspose::Cells::System::Int32 offset;
			void Write();
			void WriteFormat();
			void WriteFont();
			void WriteAlignment(Aspose::Cells::System::Int32& offset);
			void WriteBorders();
			void WritePattern();
			void WriteProtection(Aspose::Cells::System::Int32& offset);
	public:

			intrusive_ptr<Aspose::Cells::Style> style;
			Aspose::Cells::System::UInt32 option;
			Aspose::Cells::System::UInt16 options2;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> numberFormat;
			 DxfnRecord(intrusive_ptr<Aspose::Cells::Style> style);
			void InitNumFmtOption();
			void InitFontOption();
			void InitAlignmentOption();
			void InitBorderOption();
			void InitPatternOption();
			void InitProtectionOption();
			 DxfnRecord();
		public:
			virtual ~DxfnRecord();
	};

}

}

}
