// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_NONEFILL_H
#define ASPOSE_CELLS_DRAWING_NONEFILL_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {

class NoneFill_Impl;

/// <summary>
/// Represents no fill.
/// </summary>
class NoneFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NoneFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NoneFill(NoneFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NoneFill(const NoneFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NoneFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NoneFill& operator=(const NoneFill& src);
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
    
};

} } }

#endif
