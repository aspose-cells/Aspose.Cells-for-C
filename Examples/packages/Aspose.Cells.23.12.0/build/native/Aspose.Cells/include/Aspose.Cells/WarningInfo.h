// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WARNINGINFO_H
#define ASPOSE_CELLS_WARNINGINFO_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/WarningType.h"

namespace Aspose { namespace Cells {

class WarningInfo_Impl;

/// <summary>
/// Warning info
/// </summary>
class WarningInfo {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WarningInfo_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WarningInfo(WarningInfo_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WarningInfo(const WarningInfo& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WarningInfo();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WarningInfo& operator=(const WarningInfo& src);
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
    /// Get warning type.
    /// </summary>
    ASPOSE_CELLS_API WarningType GetWarningType();
    /// <summary>
    /// Get description of warning info.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDescription();
    
};

} }

#endif
