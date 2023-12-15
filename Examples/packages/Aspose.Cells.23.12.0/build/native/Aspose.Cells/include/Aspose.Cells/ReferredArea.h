// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REFERREDAREA_H
#define ASPOSE_CELLS_REFERREDAREA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class ReferredArea_Impl;

/// <summary>
/// Represents a referred area by the formula.
/// </summary>
class ASPOSE_CELLS_API2 ReferredArea {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ReferredArea_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ReferredArea(ReferredArea_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ReferredArea(const ReferredArea& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ReferredArea();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ReferredArea& operator=(const ReferredArea& src);
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
    /// Indicates whether this is an external link.
    /// </summary>
    ASPOSE_CELLS_API bool IsExternalLink();
    /// <summary>
    /// Get the external file name if this is an external reference.
    /// </summary>
    ASPOSE_CELLS_API U16String GetExternalFileName();
    /// <summary>
    /// Indicates which sheet this reference is in.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSheetName();
    /// <summary>
    /// Indicates whether this is an area.
    /// </summary>
    /// <remarks>
    /// If this is not an area, only StartRow and StartColumn effect.
    /// </remarks>
    ASPOSE_CELLS_API bool IsArea();
    /// <summary>
    /// The end column of the area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndColumn();
    /// <summary>
    /// The start column of the area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartColumn();
    /// <summary>
    /// The end row of the area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndRow();
    /// <summary>
    /// The start row of the area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartRow();
    /// <summary>
    /// Returns the simple string representation of this area.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    
};

} }

#endif
