// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTTABSTOP_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTTABSTOP_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/TextTabAlignmentType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class TextTabStop_Impl;

/// <summary>
/// Represents tab stop.
/// </summary>
class TextTabStop {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextTabStop_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextTabStop(TextTabStop_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextTabStop(const TextTabStop& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextTabStop();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextTabStop& operator=(const TextTabStop& src);
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
    /// Specifies the alignment that is to be applied to text using this tab stop.
    /// </summary>
    ASPOSE_CELLS_API TextTabAlignmentType GetTabAlignment();
    /// <summary>
    /// Specifies the alignment that is to be applied to text using this tab stop.
    /// </summary>
    ASPOSE_CELLS_API void SetTabAlignment(TextTabAlignmentType value);
    /// <summary>
    /// Specifies the position of the tab stop relative to the left margin.
    /// </summary>
    ASPOSE_CELLS_API double GetTabPosition();
    /// <summary>
    /// Specifies the position of the tab stop relative to the left margin.
    /// </summary>
    ASPOSE_CELLS_API void SetTabPosition(double value);
    
};

} } } }

#endif
