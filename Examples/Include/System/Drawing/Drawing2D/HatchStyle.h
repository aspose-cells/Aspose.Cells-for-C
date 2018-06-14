#ifndef _SYSTEM_DRAWING_DRAWING2D_HATCHSTYLE_H_
#define _SYSTEM_DRAWING_DRAWING2D_HATCHSTYLE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum HatchStyle
	{
        // Summary:
        //     Specifies hatch style System.Drawing.Drawing2D.HatchStyle.Horizontal.
		HatchStyle_Min = 0,
        //
        // Summary:
        //     A pattern of horizontal lines.
		HatchStyle_Horizontal = 0,
        //
        // Summary:
        //     A pattern of vertical lines.
		HatchStyle_Vertical = 1,
        //
        // Summary:
        //     A pattern of lines on a diagonal from upper left to lower right.
		HatchStyle_ForwardDiagonal = 2,
        //
        // Summary:
        //     A pattern of lines on a diagonal from upper right to lower left.
		HatchStyle_BackwardDiagonal = 3,
        //
        // Summary:
        //     Specifies hatch style System.Drawing.Drawing2D.HatchStyle.SolidDiamond.
		HatchStyle_Max = 4,
        //
        // Summary:
        //     Specifies horizontal and vertical lines that cross.
		HatchStyle_Cross = 4,
        //
        // Summary:
        //     Specifies the hatch style System.Drawing.Drawing2D.HatchStyle.Cross.
		HatchStyle_LargeGrid = 4,
        //
        // Summary:
        //     A pattern of crisscross diagonal lines.
		HatchStyle_DiagonalCross = 5,
        //
        // Summary:
        //     Specifies a 5-percent hatch. The ratio of foreground color to background
        //     color is 5:100.
		HatchStyle_Percent05 = 6,
        //
        // Summary:
        //     Specifies a 10-percent hatch. The ratio of foreground color to background
        //     color is 10:100.
		HatchStyle_Percent10 = 7,
        //
        // Summary:
        //     Specifies a 20-percent hatch. The ratio of foreground color to background
        //     color is 20:100.
		HatchStyle_Percent20 = 8,
        //
        // Summary:
        //     Specifies a 25-percent hatch. The ratio of foreground color to background
        //     color is 25:100.
		HatchStyle_Percent25 = 9,
        //
        // Summary:
        //     Specifies a 30-percent hatch. The ratio of foreground color to background
        //     color is 30:100.
		HatchStyle_Percent30 = 10,
        //
        // Summary:
        //     Specifies a 40-percent hatch. The ratio of foreground color to background
        //     color is 40:100.
		HatchStyle_Percent40 = 11,
        //
        // Summary:
        //     Specifies a 50-percent hatch. The ratio of foreground color to background
        //     color is 50:100.
		HatchStyle_Percent50 = 12,
        //
        // Summary:
        //     Specifies a 60-percent hatch. The ratio of foreground color to background
        //     color is 60:100.
		HatchStyle_Percent60 = 13,
        //
        // Summary:
        //     Specifies a 70-percent hatch. The ratio of foreground color to background
        //     color is 70:100.
		HatchStyle_Percent70 = 14,
        //
        // Summary:
        //     Specifies a 75-percent hatch. The ratio of foreground color to background
        //     color is 75:100.
		HatchStyle_Percent75 = 15,
        //
        // Summary:
        //     Specifies a 80-percent hatch. The ratio of foreground color to background
        //     color is 80:100.
		HatchStyle_Percent80 = 16,
        //
        // Summary:
        //     Specifies a 90-percent hatch. The ratio of foreground color to background
        //     color is 90:100.
		HatchStyle_Percent90 = 17,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the right from top points to bottom
        //     points and are spaced 50 percent closer together than System.Drawing.Drawing2D.HatchStyle.ForwardDiagonal,
        //     but are not antialiased.
		HatchStyle_LightDownwardDiagonal = 18,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the left from top points to bottom
        //     points and are spaced 50 percent closer together than System.Drawing.Drawing2D.HatchStyle.BackwardDiagonal,
        //     but they are not antialiased.
		HatchStyle_LightUpwardDiagonal = 19,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the right from top points to bottom
        //     points, are spaced 50 percent closer together than, and are twice the width
        //     of System.Drawing.Drawing2D.HatchStyle.ForwardDiagonal. This hatch pattern
        //     is not antialiased.
		HatchStyle_DarkDownwardDiagonal = 20,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the left from top points to bottom
        //     points, are spaced 50 percent closer together than System.Drawing.Drawing2D.HatchStyle.BackwardDiagonal,
        //     and are twice its width, but the lines are not antialiased.
		HatchStyle_DarkUpwardDiagonal = 21,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the right from top points to bottom
        //     points, have the same spacing as hatch style System.Drawing.Drawing2D.HatchStyle.ForwardDiagonal,
        //     and are triple its width, but are not antialiased.
		HatchStyle_WideDownwardDiagonal = 22,
        //
        // Summary:
        //     Specifies diagonal lines that slant to the left from top points to bottom
        //     points, have the same spacing as hatch style System.Drawing.Drawing2D.HatchStyle.BackwardDiagonal,
        //     and are triple its width, but are not antialiased.
		HatchStyle_WideUpwardDiagonal = 23,
        //
        // Summary:
        //     Specifies vertical lines that are spaced 50 percent closer together than
        //     System.Drawing.Drawing2D.HatchStyle.Vertical.
		HatchStyle_LightVertical = 24,
        //
        // Summary:
        //     Specifies horizontal lines that are spaced 50 percent closer together than
        //     System.Drawing.Drawing2D.HatchStyle.Horizontal.
		HatchStyle_LightHorizontal = 25,
        //
        // Summary:
        //     Specifies vertical lines that are spaced 75 percent closer together than
        //     hatch style System.Drawing.Drawing2D.HatchStyle.Vertical (or 25 percent closer
        //     together than System.Drawing.Drawing2D.HatchStyle.LightVertical).
		HatchStyle_NarrowVertical = 26,
        //
        // Summary:
        //     Specifies horizontal lines that are spaced 75 percent closer together than
        //     hatch style System.Drawing.Drawing2D.HatchStyle.Horizontal (or 25 percent
        //     closer together than System.Drawing.Drawing2D.HatchStyle.LightHorizontal).
		HatchStyle_NarrowHorizontal = 27,
        //
        // Summary:
        //     Specifies vertical lines that are spaced 50 percent closer together than
        //     System.Drawing.Drawing2D.HatchStyle.Vertical and are twice its width.
		HatchStyle_DarkVertical = 28,
        //
        // Summary:
        //     Specifies horizontal lines that are spaced 50 percent closer together than
        //     System.Drawing.Drawing2D.HatchStyle.Horizontal and are twice the width of
        //     System.Drawing.Drawing2D.HatchStyle.Horizontal.
		HatchStyle_DarkHorizontal = 29,
        //
        // Summary:
        //     Specifies dashed diagonal lines, that slant to the right from top points
        //     to bottom points.
		HatchStyle_DashedDownwardDiagonal = 30,
        //
        // Summary:
        //     Specifies dashed diagonal lines, that slant to the left from top points to
        //     bottom points.
		HatchStyle_DashedUpwardDiagonal = 31,
        //
        // Summary:
        //     Specifies dashed horizontal lines.
		HatchStyle_DashedHorizontal = 32,
        //
        // Summary:
        //     Specifies dashed vertical lines.
		HatchStyle_DashedVertical = 33,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of confetti.
		HatchStyle_SmallConfetti = 34,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of confetti, and is composed of
        //     larger pieces than System.Drawing.Drawing2D.HatchStyle.SmallConfetti.
		HatchStyle_LargeConfetti = 35,
        //
        // Summary:
        //     Specifies horizontal lines that are composed of zigzags.
		HatchStyle_ZigZag = 36,
        //
        // Summary:
        //     Specifies horizontal lines that are composed of tildes.
		HatchStyle_Wave = 37,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of layered bricks that slant to
        //     the left from top points to bottom points.
		HatchStyle_DiagonalBrick = 38,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of horizontally layered bricks.
		HatchStyle_HorizontalBrick = 39,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a woven material.
		HatchStyle_Weave = 40,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a plaid material.
		HatchStyle_Plaid = 41,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of divots.
		HatchStyle_Divot = 42,
        //
        // Summary:
        //     Specifies horizontal and vertical lines, each of which is composed of dots,
        //     that cross.
		HatchStyle_DottedGrid = 43,
        //
        // Summary:
        //     Specifies forward diagonal and backward diagonal lines, each of which is
        //     composed of dots, that cross.
		HatchStyle_DottedDiamond = 44,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of diagonally layered shingles
        //     that slant to the right from top points to bottom points.
		HatchStyle_Shingle = 45,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a trellis.
		HatchStyle_Trellis = 46,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of spheres laid adjacent to one
        //     another.
		HatchStyle_Sphere = 47,
        //
        // Summary:
        //     Specifies horizontal and vertical lines that cross and are spaced 50 percent
        //     closer together than hatch style System.Drawing.Drawing2D.HatchStyle.Cross.
		HatchStyle_SmallGrid = 48,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a checkerboard.
		HatchStyle_SmallCheckerBoard = 49,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a checkerboard with squares
        //     that are twice the size of System.Drawing.Drawing2D.HatchStyle.SmallCheckerBoard.
		HatchStyle_LargeCheckerBoard = 50,
        //
        // Summary:
        //     Specifies forward diagonal and backward diagonal lines that cross but are
        //     not antialiased.
		HatchStyle_OutlinedDiamond = 51,
        //
        // Summary:
        //     Specifies a hatch that has the appearance of a checkerboard placed diagonally.
		HatchStyle_SolidDiamond = 52,
	};
}

}
}
}
}
#endif
