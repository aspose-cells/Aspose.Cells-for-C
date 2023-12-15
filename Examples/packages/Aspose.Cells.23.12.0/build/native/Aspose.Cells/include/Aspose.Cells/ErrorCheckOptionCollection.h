// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ERRORCHECKOPTIONCOLLECTION_H
#define ASPOSE_CELLS_ERRORCHECKOPTIONCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class ErrorCheckOption;
} }

namespace Aspose { namespace Cells {

class ErrorCheckOptionCollection_Impl;

/// <summary>
/// Represents all error check option.
/// </summary>
class ErrorCheckOptionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ErrorCheckOptionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOptionCollection(ErrorCheckOptionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOptionCollection(const ErrorCheckOptionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ErrorCheckOptionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOptionCollection& operator=(const ErrorCheckOptionCollection& src);
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
    /// Gets <see cref="ErrorCheckOption"/> object by the given index.
    /// </summary>
    /// <param name="index">The index</param>
    /// <returns>Return <see cref="ErrorCheckOption"/> object </returns>
    ASPOSE_CELLS_API ErrorCheckOption Get(int32_t index);
    /// <summary>
    /// Add an error check option.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
