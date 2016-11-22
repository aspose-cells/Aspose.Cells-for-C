#ifndef _SYSTEM_DRAWING_STRINGTRIMMING_H_
#define _SYSTEM_DRAWING_STRINGTRIMMING_H_

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	enum StringTrimming
	{
        // Summary:
        //     Specifies no trimming.
		StringTrimming_None = 0,
        //
        // Summary:
        //     Specifies that the text is trimmed to the nearest character.
		StringTrimming_Character = 1,
        //
        // Summary:
        //     Specifies that text is trimmed to the nearest word.
		StringTrimming_Word = 2,
        //
        // Summary:
        //     Specifies that the text is trimmed to the nearest character, and an ellipsis
        //     is inserted at the end of a trimmed line.
		StringTrimming_EllipsisCharacter = 3,
        //
        // Summary:
        //     Specifies that text is trimmed to the nearest word, and an ellipsis is inserted
        //     at the end of a trimmed line.
		StringTrimming_EllipsisWord = 4,
        //
        // Summary:
        //     The center is removed from trimmed lines and replaced by an ellipsis. The
        //     algorithm keeps as much of the last slash-delimited segment of the line as
        //     possible.
		StringTrimming_EllipsisPath = 5,
	};
}
}
}
}
#endif
