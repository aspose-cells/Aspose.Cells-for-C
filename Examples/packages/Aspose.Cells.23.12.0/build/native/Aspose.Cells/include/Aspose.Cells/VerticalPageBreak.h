// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VERTICALPAGEBREAK_H
#define ASPOSE_CELLS_VERTICALPAGEBREAK_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class VerticalPageBreak_Impl;

/// <summary>
/// Encapsulates the object that represents a vertical page break.
/// </summary>
class VerticalPageBreak {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VerticalPageBreak_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreak(VerticalPageBreak_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreak(const VerticalPageBreak& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VerticalPageBreak();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreak& operator=(const VerticalPageBreak& src);
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
    /// Gets the start row index of the vertical page break.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartRow();
    /// <summary>
    /// Gets the end row index of the vertical page break.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndRow();
    /// <summary>
    /// Gets the column index of the vertical page break.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    
};

} }

#endif
