// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTTABSTOPCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTTABSTOPCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/TextTabAlignmentType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class TextTabStop;
} } } }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class TextTabStopCollection_Impl;

/// <summary>
/// Represents the list of all tab stops.
/// </summary>
class TextTabStopCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextTabStopCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API TextTabStopCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextTabStopCollection(TextTabStopCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextTabStopCollection(const TextTabStopCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextTabStopCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextTabStopCollection& operator=(const TextTabStopCollection& src);
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
    /// Adds a tab stop.
    /// </summary>
    /// <param name="tabAlignment"></param>
    /// <param name="tabPosition"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(TextTabAlignmentType tabAlignment, double tabPosition);
    /// <summary>
    /// Gets <see cref="TextTabStop"/> by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API TextTabStop Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } } }

#endif
