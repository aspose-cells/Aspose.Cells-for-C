#ifndef _SYSTEM_DRAWING_STRINGFORMATFLAGS_H_
#define _SYSTEM_DRAWING_STRINGFORMATFLAGS_H_

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	enum StringFormatFlags
	{
        // Summary:
        //     Text is displayed from right to left.
		StringFormatFlags_DirectionRightToLeft = 1,
        //
        // Summary:
        //     Text is vertically aligned.
		StringFormatFlags_DirectionVertical = 2,
        //
        // Summary:
        //     Parts of characters are allowed to overhang the string's layout rectangle.
        //     By default, characters are repositioned to avoid any overhang.
		StringFormatFlags_FitBlackBox = 4,
        //
        // Summary:
        //     Control characters such as the left-to-right mark are shown in the output
        //     with a representative glyph.
		StringFormatFlags_DisplayFormatControl = 32,
        //
        // Summary:
        //     Fallback to alternate fonts for characters not supported in the requested
        //     font is disabled. Any missing characters are displayed with the fonts missing
        //     glyph, usually an open square.
		StringFormatFlags_NoFontFallback = 1024,
        //
        // Summary:
        //     Includes the trailing space at the end of each line. By default the boundary
        //     rectangle returned by the Overload:System.Drawing.Graphics.MeasureString
        //     method excludes the space at the end of each line. Set this flag to include
        //     that space in measurement.
		StringFormatFlags_MeasureTrailingSpaces = 2048,
        //
        // Summary:
        //     Text wrapping between lines when formatting within a rectangle is disabled.
        //     This flag is implied when a point is passed instead of a rectangle, or when
        //     the specified rectangle has a zero line length.
		StringFormatFlags_NoWrap = 4096,
        //
        // Summary:
        //     Only entire lines are laid out in the formatting rectangle. By default layout
        //     continues until the end of the text, or until no more lines are visible as
        //     a result of clipping, whichever comes first. Note that the default settings
        //     allow the last line to be partially obscured by a formatting rectangle that
        //     is not a whole multiple of the line height. To ensure that only whole lines
        //     are seen, specify this value and be careful to provide a formatting rectangle
        //     at least as tall as the height of one line.
		StringFormatFlags_LineLimit = 8192,
        //
        // Summary:
        //     Overhanging parts of glyphs, and unwrapped text reaching outside the formatting
        //     rectangle are allowed to show. By default all text and glyph parts reaching
        //     outside the formatting rectangle are clipped.
		StringFormatFlags_NoClip = 16384,
	};
}

}
}
}
#endif
