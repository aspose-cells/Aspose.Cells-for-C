#pragma once
#include "System\Int16.h"
namespace Aspose {
namespace Cells {
namespace Drawing {
	enum AutoShapeType 

	{

			AutoShapeType_NotPrimitive = (Aspose::Cells::System::Int16)0x00 ,
			AutoShapeType_Rectangle = (Aspose::Cells::System::Int16)0x01 ,
			AutoShapeType_RoundedRectangle = (Aspose::Cells::System::Int16)0x02 ,
			AutoShapeType_Oval = (Aspose::Cells::System::Int16)0x03 ,
			AutoShapeType_Diamond = (Aspose::Cells::System::Int16)0x04 ,
			AutoShapeType_IsoscelesTriangle = (Aspose::Cells::System::Int16)0x05 ,
			AutoShapeType_RightTriangle = (Aspose::Cells::System::Int16)0x06 ,
			AutoShapeType_Parallelogram = (Aspose::Cells::System::Int16)0x07 ,
			AutoShapeType_Trapezoid = (Aspose::Cells::System::Int16)0x08 ,
			AutoShapeType_Hexagon = (Aspose::Cells::System::Int16)0x09 ,
			AutoShapeType_Octagon = (Aspose::Cells::System::Int16)0x0A ,
			AutoShapeType_Cross = (Aspose::Cells::System::Int16)0x0B ,
			AutoShapeType_Star5 = (Aspose::Cells::System::Int16)0x0C ,
			AutoShapeType_RightArrow = (Aspose::Cells::System::Int16)0x0D ,
			AutoShapeType_HomePlate = (Aspose::Cells::System::Int16)0x0F ,
			AutoShapeType_Cube = (Aspose::Cells::System::Int16)0x10 ,
			AutoShapeType_Balloon = (Aspose::Cells::System::Int16)0x11 ,
			AutoShapeType_Seal = (Aspose::Cells::System::Int16)0x12 ,
			AutoShapeType_Arc = (Aspose::Cells::System::Int16)0x13 ,
			AutoShapeType_Line = (Aspose::Cells::System::Int16)0x14 ,
			AutoShapeType_Plaque = (Aspose::Cells::System::Int16)0x15 ,
			AutoShapeType_Can = (Aspose::Cells::System::Int16)0x16 ,
			AutoShapeType_Donut = (Aspose::Cells::System::Int16)0x17 ,
			AutoShapeType_TextSimple = (Aspose::Cells::System::Int16)0x18 ,
			AutoShapeType_TextOctagon = (Aspose::Cells::System::Int16)0x19 ,
			AutoShapeType_TextHexagon = (Aspose::Cells::System::Int16)0x1A ,
			AutoShapeType_TextCurve = (Aspose::Cells::System::Int16)0x1B ,
			AutoShapeType_TextWave = (Aspose::Cells::System::Int16)0x1C ,
			AutoShapeType_TextRing = (Aspose::Cells::System::Int16)0x1D ,
			AutoShapeType_TextOnCurve = (Aspose::Cells::System::Int16)0x1E ,
			AutoShapeType_msosptTextOnRing = (Aspose::Cells::System::Int16)0x1F ,
			AutoShapeType_StraightConnector = (Aspose::Cells::System::Int16)0x20 ,
			AutoShapeType_BentConnector2 = (Aspose::Cells::System::Int16)0x21 ,
			AutoShapeType_ElbowConnector = (Aspose::Cells::System::Int16)0x22 ,
			AutoShapeType_BentConnector4 = (Aspose::Cells::System::Int16)0x23 ,
			AutoShapeType_BentConnector5 = (Aspose::Cells::System::Int16)0x24 ,
			AutoShapeType_CurvedConnector2 = (Aspose::Cells::System::Int16)0x25 ,
			AutoShapeType_CurvedConnector = (Aspose::Cells::System::Int16)0x26 ,
			AutoShapeType_CurvedConnector4 = (Aspose::Cells::System::Int16)0x27 ,
			AutoShapeType_CurvedConnector5 = (Aspose::Cells::System::Int16)0x28 ,
			AutoShapeType_LineCalloutNoBorder2 = (Aspose::Cells::System::Int16)0x29 ,
			AutoShapeType_LineCalloutNoBorder3 = (Aspose::Cells::System::Int16)0x2A ,
			AutoShapeType_LineCalloutNoBorder4 = (Aspose::Cells::System::Int16)0x2B ,
			AutoShapeType_LineCalloutWithAccentBar2 = (Aspose::Cells::System::Int16)0x2C ,
			AutoShapeType_LineCalloutWithAccentBar3 = (Aspose::Cells::System::Int16)0x2D ,
			AutoShapeType_LineCalloutWithAccentBar4 = (Aspose::Cells::System::Int16)0x2E ,
			AutoShapeType_LineCalloutWithBorder2 = (Aspose::Cells::System::Int16)0x2F ,
			AutoShapeType_LineCalloutWithBorder3 = (Aspose::Cells::System::Int16)0x30 ,
			AutoShapeType_LineCalloutWithBorder4 = (Aspose::Cells::System::Int16)0x31 ,
			AutoShapeType_LineCalloutWithBorderAndAccentBar2 = (Aspose::Cells::System::Int16)0x32 ,
			AutoShapeType_LineCalloutWithBorderAndAccentBar3 = (Aspose::Cells::System::Int16)0x33 ,
			AutoShapeType_LineCalloutWithBorderAndAccentBar4 = (Aspose::Cells::System::Int16)0x34 ,
			AutoShapeType_DownRibbon = (Aspose::Cells::System::Int16)0x35 ,
			AutoShapeType_UpRibbon = (Aspose::Cells::System::Int16)0x36 ,
			AutoShapeType_Chevron = (Aspose::Cells::System::Int16)0x37 ,
			AutoShapeType_RegularPentagon = (Aspose::Cells::System::Int16)0x38 ,
			AutoShapeType_NoSymbol = (Aspose::Cells::System::Int16)0x39 ,
			AutoShapeType_Star8 = (Aspose::Cells::System::Int16)0x3A ,
			AutoShapeType_Star16 = (Aspose::Cells::System::Int16)0x3B ,
			AutoShapeType_Star32 = (Aspose::Cells::System::Int16)0x3C ,
			AutoShapeType_RectangularCallout = (Aspose::Cells::System::Int16)0x3D ,
			AutoShapeType_RoundedRectangularCallout = (Aspose::Cells::System::Int16)0x3E ,
			AutoShapeType_OvalCallout = (Aspose::Cells::System::Int16)0x3F ,
			AutoShapeType_Wave = (Aspose::Cells::System::Int16)0x40 ,
			AutoShapeType_FoldedCorner = (Aspose::Cells::System::Int16)0x41 ,
			AutoShapeType_LeftArrow = (Aspose::Cells::System::Int16)0x42 ,
			AutoShapeType_DownArrow = (Aspose::Cells::System::Int16)0x43 ,
			AutoShapeType_UpArrow = (Aspose::Cells::System::Int16)0x44 ,
			AutoShapeType_LeftRightArrow = (Aspose::Cells::System::Int16)0x45 ,
			AutoShapeType_UpDownArrow = (Aspose::Cells::System::Int16)0x46 ,
			AutoShapeType_Explosion1 = (Aspose::Cells::System::Int16)0x47 ,
			AutoShapeType_Explosion2 = (Aspose::Cells::System::Int16)0x48 ,
			AutoShapeType_LightningBolt = (Aspose::Cells::System::Int16)0x49 ,
			AutoShapeType_Heart = (Aspose::Cells::System::Int16)0x4A ,
			AutoShapeType_PictureFrame = (Aspose::Cells::System::Int16)0x4B ,
			AutoShapeType_QuadArrow = (Aspose::Cells::System::Int16)0x4C ,
			AutoShapeType_LeftArrowCallout = (Aspose::Cells::System::Int16)0x4D ,
			AutoShapeType_RightArrowCallout = (Aspose::Cells::System::Int16)0x4E ,
			AutoShapeType_UpArrowCallout = (Aspose::Cells::System::Int16)0x4F ,
			AutoShapeType_DownArrowCallout = (Aspose::Cells::System::Int16)0x50 ,
			AutoShapeType_LeftRightArrowCallout = (Aspose::Cells::System::Int16)0x51 ,
			AutoShapeType_UpDownArrowCallout = (Aspose::Cells::System::Int16)0x52 ,
			AutoShapeType_QuadArrowCallout = (Aspose::Cells::System::Int16)0x53 ,
			AutoShapeType_Bevel = (Aspose::Cells::System::Int16)0x54 ,
			AutoShapeType_LeftBracket = (Aspose::Cells::System::Int16)0x55 ,
			AutoShapeType_RightBracket = (Aspose::Cells::System::Int16)0x56 ,
			AutoShapeType_LeftBrace = (Aspose::Cells::System::Int16)0x57 ,
			AutoShapeType_RightBrace = (Aspose::Cells::System::Int16)0x58 ,
			AutoShapeType_LeftUpArrow = (Aspose::Cells::System::Int16)0x59 ,
			AutoShapeType_BentUpArrow = (Aspose::Cells::System::Int16)0x5A ,
			AutoShapeType_BentArrow = (Aspose::Cells::System::Int16)0x5B ,
			AutoShapeType_Star24 = (Aspose::Cells::System::Int16)0x5C ,
			AutoShapeType_StripedRightArrow = (Aspose::Cells::System::Int16)0x5D ,
			AutoShapeType_NotchedRightArrow = (Aspose::Cells::System::Int16)0x5E ,
			AutoShapeType_BlockArc = (Aspose::Cells::System::Int16)0x5F ,
			AutoShapeType_SmileyFace = (Aspose::Cells::System::Int16)0x60 ,
			AutoShapeType_VerticalScroll = (Aspose::Cells::System::Int16)0x61 ,
			AutoShapeType_HorizontalScroll = (Aspose::Cells::System::Int16)0x62 ,
			AutoShapeType_CircularArrow = (Aspose::Cells::System::Int16)0x63 ,
			AutoShapeType_UTurnArrow = (Aspose::Cells::System::Int16)0x65 ,
			AutoShapeType_CurvedRightArrow = (Aspose::Cells::System::Int16)0x66 ,
			AutoShapeType_CurvedLeftArrow = (Aspose::Cells::System::Int16)0x67 ,
			AutoShapeType_CurvedUpArrow = (Aspose::Cells::System::Int16)0x68 ,
			AutoShapeType_CurvedDownArrow = (Aspose::Cells::System::Int16)0x69 ,
			AutoShapeType_CloudCallout = (Aspose::Cells::System::Int16)0x6A ,
			AutoShapeType_CurvedDownRibbon = (Aspose::Cells::System::Int16)0x6B ,
			AutoShapeType_CurvedUpRibbon = (Aspose::Cells::System::Int16)0x6C ,
			AutoShapeType_FlowChartProcess = (Aspose::Cells::System::Int16)0x6D ,
			AutoShapeType_FlowChartDecision = (Aspose::Cells::System::Int16)0x6E ,
			AutoShapeType_FlowChartData = (Aspose::Cells::System::Int16)0x6F ,
			AutoShapeType_FlowChartPredefinedProcess = (Aspose::Cells::System::Int16)0x70 ,
			AutoShapeType_FlowChartInternalStorage = (Aspose::Cells::System::Int16)0x71 ,
			AutoShapeType_FlowChartDocument = (Aspose::Cells::System::Int16)0x72 ,
			AutoShapeType_FlowChartMultidocument = (Aspose::Cells::System::Int16)0x73 ,
			AutoShapeType_FlowChartTerminator = (Aspose::Cells::System::Int16)0x74 ,
			AutoShapeType_FlowChartPreparation = (Aspose::Cells::System::Int16)0x75 ,
			AutoShapeType_FlowChartManualInput = (Aspose::Cells::System::Int16)0x76 ,
			AutoShapeType_FlowChartManualOperation = (Aspose::Cells::System::Int16)0x77 ,
			AutoShapeType_FlowChartConnector = (Aspose::Cells::System::Int16)0x78 ,
			AutoShapeType_FlowChartCard = (Aspose::Cells::System::Int16)0x79 ,
			AutoShapeType_FlowChartPunchedTape = (Aspose::Cells::System::Int16)0x7A ,
			AutoShapeType_FlowChartSummingJunction = (Aspose::Cells::System::Int16)0x7B ,
			AutoShapeType_FlowChartOr = (Aspose::Cells::System::Int16)0x7C ,
			AutoShapeType_FlowChartCollate = (Aspose::Cells::System::Int16)0x7D ,
			AutoShapeType_FlowChartSort = (Aspose::Cells::System::Int16)0x7E ,
			AutoShapeType_FlowChartExtract = (Aspose::Cells::System::Int16)0x7F ,
			AutoShapeType_FlowChartMerge = (Aspose::Cells::System::Int16)0x80 ,
			AutoShapeType_FlowChartOfflineStorage = (Aspose::Cells::System::Int16)0x81 ,
			AutoShapeType_FlowChartStoredData = (Aspose::Cells::System::Int16)0x82 ,
			AutoShapeType_FlowChartSequentialAccessStorage = (Aspose::Cells::System::Int16)0x83 ,
			AutoShapeType_FlowChartMagneticDisk = (Aspose::Cells::System::Int16)0x84 ,
			AutoShapeType_FlowChartDirectAccessStorage = (Aspose::Cells::System::Int16)0x85 ,
			AutoShapeType_FlowChartDisplay = (Aspose::Cells::System::Int16)0x86 ,
			AutoShapeType_FlowChartDelay = (Aspose::Cells::System::Int16)0x87 ,
			AutoShapeType_TextPlainText = (Aspose::Cells::System::Int16)0x88 ,
			AutoShapeType_TextStop = (Aspose::Cells::System::Int16)0x89 ,
			AutoShapeType_TextTriangle = (Aspose::Cells::System::Int16)0x8A ,
			AutoShapeType_TextTriangleInverted = (Aspose::Cells::System::Int16)0x8B ,
			AutoShapeType_TextChevron = (Aspose::Cells::System::Int16)0x8C ,
			AutoShapeType_TextChevronInverted = (Aspose::Cells::System::Int16)0x8D ,
			AutoShapeType_TextRingInside = (Aspose::Cells::System::Int16)0x8E ,
			AutoShapeType_TextRingOutside = (Aspose::Cells::System::Int16)0x8F ,
			AutoShapeType_TextArchUpCurve = (Aspose::Cells::System::Int16)0x90 ,
			AutoShapeType_TextArchDownCurve = (Aspose::Cells::System::Int16)0x91 ,
			AutoShapeType_TextCircleCurve = (Aspose::Cells::System::Int16)0x92 ,
			AutoShapeType_TextButtonCurve = (Aspose::Cells::System::Int16)0x93 ,
			AutoShapeType_TextArchUpPour = (Aspose::Cells::System::Int16)0x94 ,
			AutoShapeType_TextArchDownPour = (Aspose::Cells::System::Int16)0x95 ,
			AutoShapeType_TextCirclePour = (Aspose::Cells::System::Int16)0x96 ,
			AutoShapeType_TextButtonPour = (Aspose::Cells::System::Int16)0x97 ,
			AutoShapeType_TextCurveUp = (Aspose::Cells::System::Int16)0x98 ,
			AutoShapeType_TextCurveDown = (Aspose::Cells::System::Int16)0x99 ,
			AutoShapeType_TextCascadeUp = (Aspose::Cells::System::Int16)0x9A ,
			AutoShapeType_TextCascadeDown = (Aspose::Cells::System::Int16)0x9B ,
			AutoShapeType_TextWave1 = (Aspose::Cells::System::Int16)0x9C ,
			AutoShapeType_TextWave2 = (Aspose::Cells::System::Int16)0x9D ,
			AutoShapeType_TextWave3 = (Aspose::Cells::System::Int16)0x9E ,
			AutoShapeType_TextWave4 = (Aspose::Cells::System::Int16)0x9f ,
			AutoShapeType_TextDoubleWave1 = (Aspose::Cells::System::Int16)0x9E ,
			AutoShapeType_TextDoubleWave2 = (Aspose::Cells::System::Int16)0x9f ,
			AutoShapeType_TextInflate = (Aspose::Cells::System::Int16)0xA0 ,
			AutoShapeType_TextDeflate = (Aspose::Cells::System::Int16)0xA1 ,
			AutoShapeType_TextInflateBottom = (Aspose::Cells::System::Int16)0xA2 ,
			AutoShapeType_TextDeflateBottom = (Aspose::Cells::System::Int16)0xA3 ,
			AutoShapeType_TextInflateTop = (Aspose::Cells::System::Int16)0xA4 ,
			AutoShapeType_TextDeflateTop = (Aspose::Cells::System::Int16)0xA5 ,
			AutoShapeType_TextDeflateInflate = (Aspose::Cells::System::Int16)0xA6 ,
			AutoShapeType_TextDeflateInflateDeflate = (Aspose::Cells::System::Int16)0xA7 ,
			AutoShapeType_TextFadeRight = (Aspose::Cells::System::Int16)0xA8 ,
			AutoShapeType_TextFadeLeft = (Aspose::Cells::System::Int16)0xA9 ,
			AutoShapeType_TextFadeUp = (Aspose::Cells::System::Int16)0xAA ,
			AutoShapeType_TextFadeDown = (Aspose::Cells::System::Int16)0xAB ,
			AutoShapeType_TextSlantUp = (Aspose::Cells::System::Int16)0xAC ,
			AutoShapeType_TextSlantDown = (Aspose::Cells::System::Int16)0xAD ,
			AutoShapeType_TextCanUp = (Aspose::Cells::System::Int16)0xAE ,
			AutoShapeType_TextCanDown = (Aspose::Cells::System::Int16)0xAF ,
			AutoShapeType_FlowChartAlternateProcess = (Aspose::Cells::System::Int16)0xB0 ,
			AutoShapeType_FlowChartOffpageConnector = (Aspose::Cells::System::Int16)0xB1 ,
			AutoShapeType_LineCalloutNoBorder1 = (Aspose::Cells::System::Int16)0xB2 ,
			AutoShapeType_LineCalloutWithAccentBar1 = (Aspose::Cells::System::Int16)0xB3 ,
			AutoShapeType_LineCalloutWithBorder1 = (Aspose::Cells::System::Int16)0xB4 ,
			AutoShapeType_LineCalloutWithBorderAndAccentBar1 = (Aspose::Cells::System::Int16)0xB5 ,
			AutoShapeType_LeftRightUpArrow = (Aspose::Cells::System::Int16)0xB6 ,
			AutoShapeType_Sun = (Aspose::Cells::System::Int16)0xB7 ,
			AutoShapeType_Moon = (Aspose::Cells::System::Int16)0xB8 ,
			AutoShapeType_DoubleBracket = (Aspose::Cells::System::Int16)0xB9 ,
			AutoShapeType_DoubleBrace = (Aspose::Cells::System::Int16)0xBA ,
			AutoShapeType_Star4 = (Aspose::Cells::System::Int16)0xBB ,
			AutoShapeType_DoubleWave = (Aspose::Cells::System::Int16)0xBC ,
			AutoShapeType_BlankActionButton = (Aspose::Cells::System::Int16)0xBD ,
			AutoShapeType_HomeActionButton = (Aspose::Cells::System::Int16)0xBE ,
			AutoShapeType_HelpActionButton = (Aspose::Cells::System::Int16)0xBF ,
			AutoShapeType_InformationActionButton = (Aspose::Cells::System::Int16)0xC0 ,
			AutoShapeType_ForwardNextActionButton = (Aspose::Cells::System::Int16)0xC1 ,
			AutoShapeType_BackPreviousActionButton = (Aspose::Cells::System::Int16)0xC2 ,
			AutoShapeType_EndActionButton = (Aspose::Cells::System::Int16)0xC3 ,
			AutoShapeType_BeginningActionButton = (Aspose::Cells::System::Int16)0xC4 ,
			AutoShapeType_ReturnActionButton = (Aspose::Cells::System::Int16)0xC5 ,
			AutoShapeType_DocumentActionButton = (Aspose::Cells::System::Int16)0xC6 ,
			AutoShapeType_SoundActionButton = (Aspose::Cells::System::Int16)0xC7 ,
			AutoShapeType_MovieActionButton = (Aspose::Cells::System::Int16)0xC8 ,
			AutoShapeType_HostControl = (Aspose::Cells::System::Int16)0xC9 ,
			AutoShapeType_TextBox = (Aspose::Cells::System::Int16)0xCA ,
			AutoShapeType_Heptagon = (Aspose::Cells::System::Int16)0x801 ,
			AutoShapeType_Decagon = (Aspose::Cells::System::Int16)0x802 ,
			AutoShapeType_Dodecagon = (Aspose::Cells::System::Int16)0x803 ,
			AutoShapeType_Star6 = (Aspose::Cells::System::Int16)0x804 ,
			AutoShapeType_Star7 = (Aspose::Cells::System::Int16)0x805 ,
			AutoShapeType_Star10 = (Aspose::Cells::System::Int16)0x806 ,
			AutoShapeType_Star12 = (Aspose::Cells::System::Int16)0x807 ,
			AutoShapeType_RoundSingleCornerRectangle = (Aspose::Cells::System::Int16)0x808 ,
			AutoShapeType_RoundSameSideCornerRectangle = (Aspose::Cells::System::Int16)0x809 ,
			AutoShapeType_RoundDiagonalCornerRectangle = (Aspose::Cells::System::Int16)0x80A ,
			AutoShapeType_SnipRoundSingleCornerRectangle = (Aspose::Cells::System::Int16)0x80B ,
			AutoShapeType_SnipSingleCornerRectangle = (Aspose::Cells::System::Int16)0x80C ,
			AutoShapeType_SnipSameSideCornerRectangle = (Aspose::Cells::System::Int16)0x80D ,
			AutoShapeType_SnipDiagonalCornerRectangle = (Aspose::Cells::System::Int16)0x80E ,
			AutoShapeType_Teardrop = (Aspose::Cells::System::Int16)0x80F ,
			AutoShapeType_Pie = (Aspose::Cells::System::Int16)0x810 ,
			AutoShapeType_HalfFrame = (Aspose::Cells::System::Int16)0x812 ,
			AutoShapeType_L_Shape = (Aspose::Cells::System::Int16)0x813 ,
			AutoShapeType_DiagonalStripe = (Aspose::Cells::System::Int16)0x814 ,
			AutoShapeType_Chord = (Aspose::Cells::System::Int16)0x815 ,
			AutoShapeType_Cloud = (Aspose::Cells::System::Int16)0x816 ,
			AutoShapeType_MathPlus = (Aspose::Cells::System::Int16)0x817 ,
			AutoShapeType_MathMinus = (Aspose::Cells::System::Int16)0x818 ,
			AutoShapeType_MathMultiply = (Aspose::Cells::System::Int16)0x819 ,
			AutoShapeType_MathDivide = (Aspose::Cells::System::Int16)0x81A ,
			AutoShapeType_MathEqual = (Aspose::Cells::System::Int16)0x81B ,
			AutoShapeType_MathNotEqual = (Aspose::Cells::System::Int16)0x81C ,
			AutoShapeType_LineInv = (Aspose::Cells::System::Int16)0x81D ,
			AutoShapeType_NonIsoscelesTrapezoid = (Aspose::Cells::System::Int16)0x81E ,
			AutoShapeType_PieWedge = (Aspose::Cells::System::Int16)0x81F ,
			AutoShapeType_LeftCircularArrow = (Aspose::Cells::System::Int16)0x820 ,
			AutoShapeType_LeftRightCircularArrow = (Aspose::Cells::System::Int16)0x821 ,
			AutoShapeType_SwooshArrow = (Aspose::Cells::System::Int16)0x822 ,
			AutoShapeType_LeftRightRibbon = (Aspose::Cells::System::Int16)0x823 ,
			AutoShapeType_TextNoShape = (Aspose::Cells::System::Int16)0x824 ,
			AutoShapeType_Gear6 = (Aspose::Cells::System::Int16)0x831 ,
			AutoShapeType_Gear9 = (Aspose::Cells::System::Int16)0x832 ,
			AutoShapeType_Funnel = (Aspose::Cells::System::Int16)0x833 ,
			AutoShapeType_CornerTabs = (Aspose::Cells::System::Int16)0x834 ,
			AutoShapeType_SquareTabs = (Aspose::Cells::System::Int16)0x835 ,
			AutoShapeType_PlaqueTabs = (Aspose::Cells::System::Int16)0x836 ,
			AutoShapeType_ChartX = (Aspose::Cells::System::Int16)0x837 ,
			AutoShapeType_ChartStar = (Aspose::Cells::System::Int16)0x838 ,
			AutoShapeType_ChartPlus = (Aspose::Cells::System::Int16)0x839 ,
			AutoShapeType_Frame = (Aspose::Cells::System::Int16)0x840 ,
			AutoShapeType_Unknown = (Aspose::Cells::System::Int16)0xFFF ,
	};


}

}

}
