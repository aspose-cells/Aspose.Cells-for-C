// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTPARAGRAPHCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTPARAGRAPHCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class TextParagraph;
} } } }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;

class TextParagraphCollection_Impl;

/// <summary>
/// Represents all text paragraph.
/// </summary>
class TextParagraphCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextParagraphCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextParagraphCollection(TextParagraphCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextParagraphCollection(const TextParagraphCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextParagraphCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextParagraphCollection& operator=(const TextParagraphCollection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the count of text paragraphs.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets the <see cref="TextParagraph"/> object at specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API TextParagraph Get(int32_t index);
    /// <summary>
    /// Gets the enumerator of the paragraphs.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Enumerator<TextParagraph> GetEnumerator();
    
};

} } } }

#endif
