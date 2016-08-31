#pragma once
//#include "System/Single.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_UNITHELPER() 


namespace Aspose {
namespace Cells {
	class UnitHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 GetDPI();
			static Aspose::Cells::System::Double Convert2Px(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::System::Double ParseValue(intrusive_ptr<Aspose::Cells::System::String> val , intrusive_ptr<Aspose::Cells::System::String> dstUnit , Aspose::Cells::System::Int32 dpix);
			static Aspose::Cells::System::Double HimetricToPt(Aspose::Cells::System::Int32 w);
			static Aspose::Cells::System::Int32 PtToHimetric(Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double EmuToPt(Aspose::Cells::System::Int32 w);
			static Aspose::Cells::System::Int32 PtToEmu(Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double PxToPt(Aspose::Cells::System::Double w , Aspose::Cells::System::Int32 dpi);
			static Aspose::Cells::System::Double AngleFrom60000ths(Aspose::Cells::System::Int32 r);
			static Aspose::Cells::System::Int32 To60000thsAngle(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Int32 ToHundredths(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double FromHundredths(Aspose::Cells::System::Int32 r);
			static Aspose::Cells::System::Int32 To100000ths(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double From100000ths(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Int32 ToThousandths(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double FromThousandths(Aspose::Cells::System::Double r);
			 UnitHelper();
		public:
			virtual ~UnitHelper();
	};

}

}
