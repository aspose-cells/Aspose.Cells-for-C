#pragma once
#include "System\Int16.h"
namespace Aspose {
namespace Cells {
namespace Drawing {
			/// <summary>
			/// Represents all built-in auto shape type.
			/// </summary>
	enum AutoShapeType 

	{

			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_NotPrimitive = (Aspose::Cells::System::Int16)0x00 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Rectangle = (Aspose::Cells::System::Int16)0x01 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RoundedRectangle = (Aspose::Cells::System::Int16)0x02 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Oval = (Aspose::Cells::System::Int16)0x03 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Diamond = (Aspose::Cells::System::Int16)0x04 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_IsoscelesTriangle = (Aspose::Cells::System::Int16)0x05 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RightTriangle = (Aspose::Cells::System::Int16)0x06 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Parallelogram = (Aspose::Cells::System::Int16)0x07 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Trapezoid = (Aspose::Cells::System::Int16)0x08 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Hexagon = (Aspose::Cells::System::Int16)0x09 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Octagon = (Aspose::Cells::System::Int16)0x0A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Cross = (Aspose::Cells::System::Int16)0x0B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star5 = (Aspose::Cells::System::Int16)0x0C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RightArrow = (Aspose::Cells::System::Int16)0x0D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_HomePlate = (Aspose::Cells::System::Int16)0x0F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Cube = (Aspose::Cells::System::Int16)0x10 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Balloon = (Aspose::Cells::System::Int16)0x11 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Seal = (Aspose::Cells::System::Int16)0x12 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Arc = (Aspose::Cells::System::Int16)0x13 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Line = (Aspose::Cells::System::Int16)0x14 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Plaque = (Aspose::Cells::System::Int16)0x15 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Can = (Aspose::Cells::System::Int16)0x16 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Donut = (Aspose::Cells::System::Int16)0x17 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextSimple = (Aspose::Cells::System::Int16)0x18 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextOctagon = (Aspose::Cells::System::Int16)0x19 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextHexagon = (Aspose::Cells::System::Int16)0x1A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextCurve = (Aspose::Cells::System::Int16)0x1B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextWave = (Aspose::Cells::System::Int16)0x1C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextRing = (Aspose::Cells::System::Int16)0x1D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextOnCurve = (Aspose::Cells::System::Int16)0x1E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_msosptTextOnRing = (Aspose::Cells::System::Int16)0x1F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_StraightConnector = (Aspose::Cells::System::Int16)0x20 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BentConnector2 = (Aspose::Cells::System::Int16)0x21 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ElbowConnector = (Aspose::Cells::System::Int16)0x22 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BentConnector4 = (Aspose::Cells::System::Int16)0x23 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BentConnector5 = (Aspose::Cells::System::Int16)0x24 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedConnector2 = (Aspose::Cells::System::Int16)0x25 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedConnector = (Aspose::Cells::System::Int16)0x26 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedConnector4 = (Aspose::Cells::System::Int16)0x27 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedConnector5 = (Aspose::Cells::System::Int16)0x28 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutNoBorder2 = (Aspose::Cells::System::Int16)0x29 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutNoBorder3 = (Aspose::Cells::System::Int16)0x2A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutNoBorder4 = (Aspose::Cells::System::Int16)0x2B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithAccentBar2 = (Aspose::Cells::System::Int16)0x2C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithAccentBar3 = (Aspose::Cells::System::Int16)0x2D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithAccentBar4 = (Aspose::Cells::System::Int16)0x2E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorder2 = (Aspose::Cells::System::Int16)0x2F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorder3 = (Aspose::Cells::System::Int16)0x30 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorder4 = (Aspose::Cells::System::Int16)0x31 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorderAndAccentBar2 = (Aspose::Cells::System::Int16)0x32 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorderAndAccentBar3 = (Aspose::Cells::System::Int16)0x33 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorderAndAccentBar4 = (Aspose::Cells::System::Int16)0x34 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DownRibbon = (Aspose::Cells::System::Int16)0x35 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UpRibbon = (Aspose::Cells::System::Int16)0x36 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Chevron = (Aspose::Cells::System::Int16)0x37 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RegularPentagon = (Aspose::Cells::System::Int16)0x38 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_NoSymbol = (Aspose::Cells::System::Int16)0x39 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star8 = (Aspose::Cells::System::Int16)0x3A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star16 = (Aspose::Cells::System::Int16)0x3B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star32 = (Aspose::Cells::System::Int16)0x3C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RectangularCallout = (Aspose::Cells::System::Int16)0x3D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RoundedRectangularCallout = (Aspose::Cells::System::Int16)0x3E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_OvalCallout = (Aspose::Cells::System::Int16)0x3F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Wave = (Aspose::Cells::System::Int16)0x40 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FoldedCorner = (Aspose::Cells::System::Int16)0x41 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftArrow = (Aspose::Cells::System::Int16)0x42 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DownArrow = (Aspose::Cells::System::Int16)0x43 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UpArrow = (Aspose::Cells::System::Int16)0x44 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftRightArrow = (Aspose::Cells::System::Int16)0x45 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UpDownArrow = (Aspose::Cells::System::Int16)0x46 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Explosion1 = (Aspose::Cells::System::Int16)0x47 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Explosion2 = (Aspose::Cells::System::Int16)0x48 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LightningBolt = (Aspose::Cells::System::Int16)0x49 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Heart = (Aspose::Cells::System::Int16)0x4A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_PictureFrame = (Aspose::Cells::System::Int16)0x4B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_QuadArrow = (Aspose::Cells::System::Int16)0x4C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftArrowCallout = (Aspose::Cells::System::Int16)0x4D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RightArrowCallout = (Aspose::Cells::System::Int16)0x4E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UpArrowCallout = (Aspose::Cells::System::Int16)0x4F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DownArrowCallout = (Aspose::Cells::System::Int16)0x50 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftRightArrowCallout = (Aspose::Cells::System::Int16)0x51 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UpDownArrowCallout = (Aspose::Cells::System::Int16)0x52 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_QuadArrowCallout = (Aspose::Cells::System::Int16)0x53 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Bevel = (Aspose::Cells::System::Int16)0x54 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftBracket = (Aspose::Cells::System::Int16)0x55 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RightBracket = (Aspose::Cells::System::Int16)0x56 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftBrace = (Aspose::Cells::System::Int16)0x57 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RightBrace = (Aspose::Cells::System::Int16)0x58 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftUpArrow = (Aspose::Cells::System::Int16)0x59 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BentUpArrow = (Aspose::Cells::System::Int16)0x5A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BentArrow = (Aspose::Cells::System::Int16)0x5B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star24 = (Aspose::Cells::System::Int16)0x5C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_StripedRightArrow = (Aspose::Cells::System::Int16)0x5D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_NotchedRightArrow = (Aspose::Cells::System::Int16)0x5E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BlockArc = (Aspose::Cells::System::Int16)0x5F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SmileyFace = (Aspose::Cells::System::Int16)0x60 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_VerticalScroll = (Aspose::Cells::System::Int16)0x61 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_HorizontalScroll = (Aspose::Cells::System::Int16)0x62 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CircularArrow = (Aspose::Cells::System::Int16)0x63 ,
			/// <summary>
			/// A value that SHOULD NOT be used.
			/// </summary>
			AutoShapeType_NotchedCircularArrow = (Aspose::Cells::System::Int16)0x64 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_UTurnArrow = (Aspose::Cells::System::Int16)0x65 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedRightArrow = (Aspose::Cells::System::Int16)0x66 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedLeftArrow = (Aspose::Cells::System::Int16)0x67 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedUpArrow = (Aspose::Cells::System::Int16)0x68 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedDownArrow = (Aspose::Cells::System::Int16)0x69 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CloudCallout = (Aspose::Cells::System::Int16)0x6A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedDownRibbon = (Aspose::Cells::System::Int16)0x6B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CurvedUpRibbon = (Aspose::Cells::System::Int16)0x6C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartProcess = (Aspose::Cells::System::Int16)0x6D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartDecision = (Aspose::Cells::System::Int16)0x6E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartData = (Aspose::Cells::System::Int16)0x6F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartPredefinedProcess = (Aspose::Cells::System::Int16)0x70 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartInternalStorage = (Aspose::Cells::System::Int16)0x71 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartDocument = (Aspose::Cells::System::Int16)0x72 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartMultidocument = (Aspose::Cells::System::Int16)0x73 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartTerminator = (Aspose::Cells::System::Int16)0x74 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartPreparation = (Aspose::Cells::System::Int16)0x75 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartManualInput = (Aspose::Cells::System::Int16)0x76 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartManualOperation = (Aspose::Cells::System::Int16)0x77 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartConnector = (Aspose::Cells::System::Int16)0x78 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartCard = (Aspose::Cells::System::Int16)0x79 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartPunchedTape = (Aspose::Cells::System::Int16)0x7A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartSummingJunction = (Aspose::Cells::System::Int16)0x7B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartOr = (Aspose::Cells::System::Int16)0x7C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartCollate = (Aspose::Cells::System::Int16)0x7D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartSort = (Aspose::Cells::System::Int16)0x7E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartExtract = (Aspose::Cells::System::Int16)0x7F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartMerge = (Aspose::Cells::System::Int16)0x80 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartOfflineStorage = (Aspose::Cells::System::Int16)0x81 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartStoredData = (Aspose::Cells::System::Int16)0x82 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartSequentialAccessStorage = (Aspose::Cells::System::Int16)0x83 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartMagneticDisk = (Aspose::Cells::System::Int16)0x84 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartDirectAccessStorage = (Aspose::Cells::System::Int16)0x85 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartDisplay = (Aspose::Cells::System::Int16)0x86 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartDelay = (Aspose::Cells::System::Int16)0x87 ,
			/// <summary>
			/// A plain text shape.
			/// </summary>
			AutoShapeType_TextPlainText = (Aspose::Cells::System::Int16)0x88 ,
			/// <summary>
			/// An octagonal text shape.
			/// </summary>
			AutoShapeType_TextStop = (Aspose::Cells::System::Int16)0x89 ,
			/// <summary>
			/// A triangular text shape pointing upwards.
			/// </summary>
			AutoShapeType_TextTriangle = (Aspose::Cells::System::Int16)0x8A ,
			/// <summary>
			/// A triangular text shape pointing downwards.
			/// </summary>
			AutoShapeType_TextTriangleInverted = (Aspose::Cells::System::Int16)0x8B ,
			/// <summary>
			/// A chevron text shape pointing upwards.
			/// </summary>
			AutoShapeType_TextChevron = (Aspose::Cells::System::Int16)0x8C ,
			/// <summary>
			/// A chevron text shape pointing downwards.
			/// </summary>
			AutoShapeType_TextChevronInverted = (Aspose::Cells::System::Int16)0x8D ,
			/// <summary>
			/// A circular text shape, as if reading an inscription on the inside of a ring.
			/// </summary>
			AutoShapeType_TextRingInside = (Aspose::Cells::System::Int16)0x8E ,
			/// <summary>
			/// A circular text shape, as if reading an inscription on the outside of a ring.
			/// </summary>
			AutoShapeType_TextRingOutside = (Aspose::Cells::System::Int16)0x8F ,
			/// <summary>
			/// An upward arching curved text shape.
			/// </summary>
			AutoShapeType_TextArchUpCurve = (Aspose::Cells::System::Int16)0x90 ,
			/// <summary>
			/// A downward arching curved text shape.
			/// </summary>
			AutoShapeType_TextArchDownCurve = (Aspose::Cells::System::Int16)0x91 ,
			/// <summary>
			/// A circular text shape.
			/// </summary>
			AutoShapeType_TextCircleCurve = (Aspose::Cells::System::Int16)0x92 ,
			/// <summary>
			/// A text shape that resembles a button.
			/// </summary>
			AutoShapeType_TextButtonCurve = (Aspose::Cells::System::Int16)0x93 ,
			/// <summary>
			/// An upward arching text shape.
			/// </summary>
			AutoShapeType_TextArchUpPour = (Aspose::Cells::System::Int16)0x94 ,
			/// <summary>
			/// A downward arching text shape.
			/// </summary>
			AutoShapeType_TextArchDownPour = (Aspose::Cells::System::Int16)0x95 ,
			/// <summary>
			/// A circular text shape.
			/// </summary>
			AutoShapeType_TextCirclePour = (Aspose::Cells::System::Int16)0x96 ,
			/// <summary>
			/// A text shape that resembles a button.
			/// </summary>
			AutoShapeType_TextButtonPour = (Aspose::Cells::System::Int16)0x97 ,
			/// <summary>
			/// An upward curving text shape.
			/// </summary>
			AutoShapeType_TextCurveUp = (Aspose::Cells::System::Int16)0x98 ,
			/// <summary>
			/// A downward curving text shape.
			/// </summary>
			AutoShapeType_TextCurveDown = (Aspose::Cells::System::Int16)0x99 ,
			/// <summary>
			/// A cascading text shape pointed upwards.
			/// </summary>
			AutoShapeType_TextCascadeUp = (Aspose::Cells::System::Int16)0x9A ,
			/// <summary>
			/// A cascading text shape pointed downwards.
			/// </summary>
			AutoShapeType_TextCascadeDown = (Aspose::Cells::System::Int16)0x9B ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			AutoShapeType_TextWave1 = (Aspose::Cells::System::Int16)0x9C ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			AutoShapeType_TextWave2 = (Aspose::Cells::System::Int16)0x9D ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum is now obsolete. Instead, please use AutoShape.TextDoubleWave1.
			/// This property will be removed 12 months later since April 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			AutoShapeType_TextWave3 = (Aspose::Cells::System::Int16)0x9E ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum is now obsolete. Instead, please use AutoShape.TextDoubleWave2.
			/// This property will be removed 12 months later since April 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			AutoShapeType_TextWave4 = (Aspose::Cells::System::Int16)0x9f ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			AutoShapeType_TextDoubleWave1 = (Aspose::Cells::System::Int16)0x9E ,
			/// <summary>
			/// A wavy text shape.
			/// </summary>
			AutoShapeType_TextDoubleWave2 = (Aspose::Cells::System::Int16)0x9f ,
			/// <summary>
			/// A text shape that expands vertically in the middle.
			/// </summary>
			AutoShapeType_TextInflate = (Aspose::Cells::System::Int16)0xA0 ,
			/// <summary>
			/// A text shape that shrinks vertically in the middle.
			/// </summary>
			AutoShapeType_TextDeflate = (Aspose::Cells::System::Int16)0xA1 ,
			/// <summary>
			/// A text shape that expands downward in the middle.
			/// </summary>
			AutoShapeType_TextInflateBottom = (Aspose::Cells::System::Int16)0xA2 ,
			/// <summary>
			/// A text shape that shrinks upwards in the middle.
			/// </summary>
			AutoShapeType_TextDeflateBottom = (Aspose::Cells::System::Int16)0xA3 ,
			/// <summary>
			/// A text shape that expands upward in the middle.
			/// </summary>
			AutoShapeType_TextInflateTop = (Aspose::Cells::System::Int16)0xA4 ,
			/// <summary>
			/// A text shape that shrinks downward in the middle.
			/// </summary>
			AutoShapeType_TextDeflateTop = (Aspose::Cells::System::Int16)0xA5 ,
			/// <summary>
			/// 
			/// A text shape where lower lines expand upward. Upper lines shrink to compensate.
			/// </summary>
			AutoShapeType_TextDeflateInflate = (Aspose::Cells::System::Int16)0xA6 ,
			/// <summary>
			/// A text shape where lines in the center expand vertically. Upper and lower lines shrink to compensate.
			/// </summary>
			AutoShapeType_TextDeflateInflateDeflate = (Aspose::Cells::System::Int16)0xA7 ,
			/// <summary>
			/// A text shape that shrinks vertically on the right side.
			/// </summary>
			AutoShapeType_TextFadeRight = (Aspose::Cells::System::Int16)0xA8 ,
			/// <summary>
			/// A text shape that shrinks vertically on the left side.
			/// </summary>
			AutoShapeType_TextFadeLeft = (Aspose::Cells::System::Int16)0xA9 ,
			/// <summary>
			/// A text shape that shrinks horizontally on top.
			/// </summary>
			AutoShapeType_TextFadeUp = (Aspose::Cells::System::Int16)0xAA ,
			/// <summary>
			/// A text shape that shrinks horizontally on bottom.
			/// </summary>
			AutoShapeType_TextFadeDown = (Aspose::Cells::System::Int16)0xAB ,
			/// <summary>
			/// An upward slanted text shape.
			/// </summary>
			AutoShapeType_TextSlantUp = (Aspose::Cells::System::Int16)0xAC ,
			/// <summary>
			/// A downward slanted text shape.
			/// </summary>
			AutoShapeType_TextSlantDown = (Aspose::Cells::System::Int16)0xAD ,
			/// <summary>
			/// A text shape that is curved upwards as if being read on the side of a can.
			/// </summary>
			AutoShapeType_TextCanUp = (Aspose::Cells::System::Int16)0xAE ,
			/// <summary>
			/// A text shape that is curved downwards as if being read on the side of a can.
			/// </summary>
			AutoShapeType_TextCanDown = (Aspose::Cells::System::Int16)0xAF ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartAlternateProcess = (Aspose::Cells::System::Int16)0xB0 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_FlowChartOffpageConnector = (Aspose::Cells::System::Int16)0xB1 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutNoBorder1 = (Aspose::Cells::System::Int16)0xB2 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithAccentBar1 = (Aspose::Cells::System::Int16)0xB3 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorder1 = (Aspose::Cells::System::Int16)0xB4 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineCalloutWithBorderAndAccentBar1 = (Aspose::Cells::System::Int16)0xB5 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftRightUpArrow = (Aspose::Cells::System::Int16)0xB6 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Sun = (Aspose::Cells::System::Int16)0xB7 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Moon = (Aspose::Cells::System::Int16)0xB8 ,
			/// <summary>
			/// A shape enclosed in brackets.
			/// </summary>
			AutoShapeType_DoubleBracket = (Aspose::Cells::System::Int16)0xB9 ,
			/// <summary>
			/// A shape enclosed in braces.
			/// </summary>
			AutoShapeType_DoubleBrace = (Aspose::Cells::System::Int16)0xBA ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star4 = (Aspose::Cells::System::Int16)0xBB ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DoubleWave = (Aspose::Cells::System::Int16)0xBC ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BlankActionButton = (Aspose::Cells::System::Int16)0xBD ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_HomeActionButton = (Aspose::Cells::System::Int16)0xBE ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_HelpActionButton = (Aspose::Cells::System::Int16)0xBF ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_InformationActionButton = (Aspose::Cells::System::Int16)0xC0 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ForwardNextActionButton = (Aspose::Cells::System::Int16)0xC1 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BackPreviousActionButton = (Aspose::Cells::System::Int16)0xC2 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_EndActionButton = (Aspose::Cells::System::Int16)0xC3 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_BeginningActionButton = (Aspose::Cells::System::Int16)0xC4 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ReturnActionButton = (Aspose::Cells::System::Int16)0xC5 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DocumentActionButton = (Aspose::Cells::System::Int16)0xC6 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SoundActionButton = (Aspose::Cells::System::Int16)0xC7 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MovieActionButton = (Aspose::Cells::System::Int16)0xC8 ,
			/// <summary>
			/// This value SHOULD NOT be used.
			/// </summary>
			AutoShapeType_HostControl = (Aspose::Cells::System::Int16)0xC9 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextBox = (Aspose::Cells::System::Int16)0xCA ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Heptagon = (Aspose::Cells::System::Int16)0x801 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Decagon = (Aspose::Cells::System::Int16)0x802 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Dodecagon = (Aspose::Cells::System::Int16)0x803 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star6 = (Aspose::Cells::System::Int16)0x804 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star7 = (Aspose::Cells::System::Int16)0x805 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star10 = (Aspose::Cells::System::Int16)0x806 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Star12 = (Aspose::Cells::System::Int16)0x807 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RoundSingleCornerRectangle = (Aspose::Cells::System::Int16)0x808 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RoundSameSideCornerRectangle = (Aspose::Cells::System::Int16)0x809 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_RoundDiagonalCornerRectangle = (Aspose::Cells::System::Int16)0x80A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SnipRoundSingleCornerRectangle = (Aspose::Cells::System::Int16)0x80B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SnipSingleCornerRectangle = (Aspose::Cells::System::Int16)0x80C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SnipSameSideCornerRectangle = (Aspose::Cells::System::Int16)0x80D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SnipDiagonalCornerRectangle = (Aspose::Cells::System::Int16)0x80E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Teardrop = (Aspose::Cells::System::Int16)0x80F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Pie = (Aspose::Cells::System::Int16)0x810 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_HalfFrame = (Aspose::Cells::System::Int16)0x812 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_L_Shape = (Aspose::Cells::System::Int16)0x813 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_DiagonalStripe = (Aspose::Cells::System::Int16)0x814 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Chord = (Aspose::Cells::System::Int16)0x815 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Cloud = (Aspose::Cells::System::Int16)0x816 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathPlus = (Aspose::Cells::System::Int16)0x817 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathMinus = (Aspose::Cells::System::Int16)0x818 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathMultiply = (Aspose::Cells::System::Int16)0x819 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathDivide = (Aspose::Cells::System::Int16)0x81A ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathEqual = (Aspose::Cells::System::Int16)0x81B ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_MathNotEqual = (Aspose::Cells::System::Int16)0x81C ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LineInv = (Aspose::Cells::System::Int16)0x81D ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_NonIsoscelesTrapezoid = (Aspose::Cells::System::Int16)0x81E ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_PieWedge = (Aspose::Cells::System::Int16)0x81F ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftCircularArrow = (Aspose::Cells::System::Int16)0x820 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftRightCircularArrow = (Aspose::Cells::System::Int16)0x821 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SwooshArrow = (Aspose::Cells::System::Int16)0x822 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_LeftRightRibbon = (Aspose::Cells::System::Int16)0x823 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_TextNoShape = (Aspose::Cells::System::Int16)0x824 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Gear6 = (Aspose::Cells::System::Int16)0x831 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Gear9 = (Aspose::Cells::System::Int16)0x832 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Funnel = (Aspose::Cells::System::Int16)0x833 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_CornerTabs = (Aspose::Cells::System::Int16)0x834 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_SquareTabs = (Aspose::Cells::System::Int16)0x835 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_PlaqueTabs = (Aspose::Cells::System::Int16)0x836 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ChartX = (Aspose::Cells::System::Int16)0x837 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ChartStar = (Aspose::Cells::System::Int16)0x838 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_ChartPlus = (Aspose::Cells::System::Int16)0x839 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Frame = (Aspose::Cells::System::Int16)0x840 ,
			/// <summary>
			/// 
			/// </summary>
			AutoShapeType_Unknown = (Aspose::Cells::System::Int16)0xFFF ,
	};


}

}

}
