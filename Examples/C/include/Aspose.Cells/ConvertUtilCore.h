#pragma once
//#include "System/Byte.h"
#include "System/Single.h"
#include "System/Drawing/SizeF.h"
#include "System/Object.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/Size.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Color.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_CONVERTUTILCORE() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class ConvertUtilCore : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 ConvertUtilCore();
			 static const Aspose::Cells::System::Double PointsPerInch;
			 static const Aspose::Cells::System::Double PointsPerMillimeter;
			 static const Aspose::Cells::System::Double PointsPerMm;
			 static const Aspose::Cells::System::Double PointsPerCm;
			 static const Aspose::Cells::System::Double PointsPerLine;
			 static const Aspose::Cells::System::Double TwipsPerInch;
			 static const Aspose::Cells::System::Double TwipsPerMm;
			 static const Aspose::Cells::System::Double TwipsPerLine;
			 static const Aspose::Cells::System::Double EmusPerInch;
			 static const Aspose::Cells::System::Double EmusPerMm;
			 static const Aspose::Cells::System::Double EmusPerTwip;
			 static const Aspose::Cells::System::Int32 LisPerInch;
			 static const Aspose::Cells::System::Int32 LisPerHalfPoint;
	public:

			static Aspose::Cells::System::Double PointToPixel(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double PointToPixel(Aspose::Cells::System::Double points , Aspose::Cells::System::Double resolution);
			static Aspose::Cells::System::Int32 PointToPixelInt(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Int32 PointToPixelInt(Aspose::Cells::System::Double points , Aspose::Cells::System::Double resolution);
			static Aspose::Cells::System::Int32 PointToPixelIntCeiling(Aspose::Cells::System::Double points , Aspose::Cells::System::Double resolution);
			static Aspose::Cells::System::Double PointToMicron(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Int32 PointToMicronInt(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double PixelToPoint(Aspose::Cells::System::Double pixels);
			static Aspose::Cells::System::Double PixelToPoint(Aspose::Cells::System::Double pixels , Aspose::Cells::System::Double resolution);
			static Aspose::Cells::System::Int32 PixelToTwip(Aspose::Cells::System::Double pixels , Aspose::Cells::System::Double resolution);
			static Aspose::Cells::System::Int32 PixelToNewDpi(Aspose::Cells::System::Double pixels , Aspose::Cells::System::Double oldDpi , Aspose::Cells::System::Double newDpi);
			static Aspose::Cells::System::Double InchToPoint(Aspose::Cells::System::Double inches);
			static Aspose::Cells::System::Double MillimeterToPoint(Aspose::Cells::System::Double millimeters);
			static Aspose::Cells::System::Double PointToInch(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double MmToPoint(Aspose::Cells::System::Double mm);
			static Aspose::Cells::System::Int32 MmToTwip(Aspose::Cells::System::Double mm);
			static Aspose::Cells::System::Int32 MmToPixelInt(Aspose::Cells::System::Double mm);
			static Aspose::Cells::System::Double CmToPoint(Aspose::Cells::System::Double cm);
			static Aspose::Cells::System::Double LineToPoint(Aspose::Cells::System::Double lines);
			static Aspose::Cells::System::Int32 LineHundredthToTwip(Aspose::Cells::System::Int32 lineHundredths);
			static Aspose::Cells::System::Double PointToLine(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Int32 PointToHalfPoint(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double HalfPointToPoint(Aspose::Cells::System::Int32 halfPoints);
			static Aspose::Cells::System::Int32 PointToEightsPoint(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double EightsPointToPoint(Aspose::Cells::System::Int32 eightsPoints);
			static Aspose::Cells::System::Int32 EightsPointToTwip(Aspose::Cells::System::Int32 eightsPoint);
			static Aspose::Cells::System::Int32 PointToTwip(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double TwipToPoint(Aspose::Cells::System::Int32 twips);
			static Aspose::Cells::System::Double TwipToPoint(Aspose::Cells::System::Double twips);
			static Aspose::Cells::System::Double TwipToMm(Aspose::Cells::System::Int32 twips);
			static Aspose::Cells::System::Double TwipToLine(Aspose::Cells::System::Int32 twips);
			static Aspose::Cells::System::Int32 TwipToPixel(Aspose::Cells::System::Int32 twips);
			static Aspose::Cells::System::Int32 InchToTwip(Aspose::Cells::System::Double inches);
			static Aspose::Cells::System::Int32 EmuToTwip(Aspose::Cells::System::Int32 emus);
			static Aspose::Cells::System::Int32 TwipToEmu(Aspose::Cells::System::Int32 twips);
			static Aspose::Cells::System::Int32 PointToEmu(Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double EmuToPoint(Aspose::Cells::System::Int32 emus);
			static Aspose::Cells::System::Double EmuToInch(Aspose::Cells::System::Int32 emus);
			static Aspose::Cells::System::Single EmuToPixel(Aspose::Cells::System::Int32 emu);
			static Aspose::Cells::System::Double EmuToMillimeter(Aspose::Cells::System::Int32 emus);
			static Aspose::Cells::System::Single LiToPixel(Aspose::Cells::System::Single lis , Aspose::Cells::System::Single resolution);
			static Aspose::Cells::System::Double LiToPixel(Aspose::Cells::System::Int32 width);
			static Aspose::Cells::System::Single PixelToLi(Aspose::Cells::System::Single pixels , Aspose::Cells::System::Single resolution);
			static Aspose::Cells::System::Single PixelToLi(Aspose::Cells::System::Single pixels);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Size> PixelToLi(intrusive_ptr<Aspose::Cells::System::Drawing::Size> sz , Aspose::Cells::System::Single resolution);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Size> PixelToLi(intrusive_ptr<Aspose::Cells::System::Drawing::Size> sz);
			static Aspose::Cells::System::Int32 PointToLi(Aspose::Cells::System::Single points);
			static Aspose::Cells::System::Single LiToPoint(Aspose::Cells::System::Int32 lis);
			static Aspose::Cells::System::Int32 TwipToLi(Aspose::Cells::System::Single twips);
			static Aspose::Cells::System::Single LiToTwip(Aspose::Cells::System::Int32 lis);
			static Aspose::Cells::System::Int32 HalfPointToLi(Aspose::Cells::System::Single halfPoints);
			static Aspose::Cells::System::Single LiToHalfPoint(Aspose::Cells::System::Int32 lis);
			static intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> LiToPoint(intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> li);
			static intrusive_ptr<Aspose::Cells::System::Drawing::PointF> LiToPoint(intrusive_ptr<Aspose::Cells::System::Drawing::Point> li);
			static intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> LiToPoint(intrusive_ptr<Aspose::Cells::System::Drawing::Size> li);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> PointToLi(intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> pt);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Point> PointToLi(intrusive_ptr<Aspose::Cells::System::Drawing::PointF> pt);
			static Aspose::Cells::System::Single LiToLine(Aspose::Cells::System::Int32 lis);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ColorFixAlpha(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static Aspose::Cells::System::Double FixedToDouble(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 DoubleToFixed(Aspose::Cells::System::Double value);
			 static const Aspose::Cells::System::Double MaxFixedValue;
			 static const Aspose::Cells::System::Double MinFixedValue;
			 static const Aspose::Cells::System::Double MmPerInch;
			 static const Aspose::Cells::System::Single PointsPerHundredthInch;
			 static const Aspose::Cells::System::Single PointsPerThousandthInch;
			 static const Aspose::Cells::System::Double MillimetersPerInch;
			 static const Aspose::Cells::System::Single PointsPerTenthMm;
			 static const Aspose::Cells::System::Single PointsPerHundredthMm;
			 static const Aspose::Cells::System::Single PointsPerThousandthMm;
			 static const Aspose::Cells::System::Single OneTenthMmInPoints;
			 static const Aspose::Cells::System::Single OneHundredMmInPoints;
			 static const Aspose::Cells::System::Single OneHundredInchInPoints;
			 static const Aspose::Cells::System::Single OneThousandInchInPoints;
			 static const Aspose::Cells::System::Double TwipsPerPoint;
			 static const Aspose::Cells::System::Single TwipsInPoints;
			 static const Aspose::Cells::System::Double PointsPerTwip;
			 static const Aspose::Cells::System::Double EmusPerPoint;
			 static const Aspose::Cells::System::Int32 LisPerPoint;
			 static const Aspose::Cells::System::Int32 LisPerTwip;
			 static const Aspose::Cells::System::Double MaxSizePoint;
			 static const Aspose::Cells::System::Int32 MaxSizeLis;
		public:
			virtual ~ConvertUtilCore();
	};

}

}

}

}
