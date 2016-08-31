#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Single.h"
//#include "System/Byte.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_PAGEHELPER() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
	class PageHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PageHelper();
			static Aspose::Cells::System::Double CalcFitToPageScale(Aspose::Cells::System::Double pageWidth , Aspose::Cells::System::Int32 minCol , Aspose::Cells::System::Int32 maxCol , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> columnPointWidths);
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> GetDefaultScale(intrusive_ptr<Aspose::Cells::Worksheet> worksheet);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> CalScaling(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Double pageWidth , Aspose::Cells::System::Double pageHeight , Aspose::Cells::System::Int32 minCol , Aspose::Cells::System::Int32 maxCol , Aspose::Cells::System::Int32 rowBorderMin , Aspose::Cells::System::Int32 rowBorderMax , Aspose::Cells::System::Int32 printTitleRowsFirst , Aspose::Cells::System::Int32 printTitleRowsEnd , Aspose::Cells::System::Int32 printTitleColumnFirst , Aspose::Cells::System::Int32 printTitleColumnEnd);
			static Aspose::Cells::System::Double CalWidthScaling(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Double cellAreasWidth , Aspose::Cells::System::Int32 rowColumnMin , Aspose::Cells::System::Int32 rowColumnMax , Aspose::Cells::System::Double printTitleWidth);
			static Aspose::Cells::System::Double CalTallScaling(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Double cellAreasHeight , Aspose::Cells::System::Int32 rowBorderMin , Aspose::Cells::System::Int32 rowBorderMax , Aspose::Cells::System::Double printTitleHeight);
			static void GetPageSize(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Double& cellAreasWidth , Aspose::Cells::System::Double& cellAreasHeight , Aspose::Cells::System::Double pageWidthBase , Aspose::Cells::System::Double pageHeightBase);
		public:
			virtual ~PageHelper();
	};

}

}
