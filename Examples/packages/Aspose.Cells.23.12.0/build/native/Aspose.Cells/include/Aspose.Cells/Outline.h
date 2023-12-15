// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_OUTLINE_H
#define ASPOSE_CELLS_OUTLINE_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class Outline_Impl;

/// <summary>
/// Represents an outline on a worksheet.
/// </summary>
class Outline {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Outline_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Outline(Outline_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Outline(const Outline& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Outline();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Outline& operator=(const Outline& src);
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
    /// Indicates if the summary row will be positioned below the detail rows in the outline.
    /// </summary>
    ASPOSE_CELLS_API bool GetSummaryRowBelow();
    /// <summary>
    /// Indicates if the summary row will be positioned below the detail rows in the outline.
    /// </summary>
    ASPOSE_CELLS_API void SetSummaryRowBelow(bool value);
    /// <summary>
    /// Indicates if the summary column will be positioned to the right of the detail columns in the outline.
    /// </summary>
    ASPOSE_CELLS_API bool GetSummaryColumnRight();
    /// <summary>
    /// Indicates if the summary column will be positioned to the right of the detail columns in the outline.
    /// </summary>
    ASPOSE_CELLS_API void SetSummaryColumnRight(bool value);
    
};

} }

#endif
