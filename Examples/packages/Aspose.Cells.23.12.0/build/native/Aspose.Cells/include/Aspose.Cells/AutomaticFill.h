// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_AUTOMATICFILL_H
#define ASPOSE_CELLS_DRAWING_AUTOMATICFILL_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {

class AutomaticFill_Impl;

/// <summary>
/// represents automatic fill.
/// </summary>
class AutomaticFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AutomaticFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AutomaticFill(AutomaticFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AutomaticFill(const AutomaticFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AutomaticFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AutomaticFill& operator=(const AutomaticFill& src);
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
