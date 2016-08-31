#pragma once
#include "System/Single.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
//#include "System/UInt32.h"
#include "System/Drawing/RectangleF.h"
#include "System/IO/BinaryReader.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Drawing/Rectangle.h"
#define STATIC_METAFILEEMFHEADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MetafileEmfHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 HundredsMmToPixels(Aspose::Cells::System::Single value);
			Aspose::Cells::System::Int32 HundredsMmToPixels(Aspose::Cells::System::Single value , Aspose::Cells::System::Int32 mmInDevice , Aspose::Cells::System::Int32 pixelInDevice);
			intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> mBounds;
			intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> mFrame;
			Aspose::Cells::System::Int32 mWidthDevPixels;
			Aspose::Cells::System::Int32 mHeightDevPixels;
			Aspose::Cells::System::Int32 mWidthDevMM;
			Aspose::Cells::System::Int32 mHeightDevMM;
	public:

			 MetafileEmfHeader();
			void Read(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> GetBounds();
			intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> GetFrame();
			Aspose::Cells::System::Single GetHorizontalResolution();
			Aspose::Cells::System::Single GetVerticalResolution();
		public:
			virtual ~MetafileEmfHeader();
	};

}

}

}

}
