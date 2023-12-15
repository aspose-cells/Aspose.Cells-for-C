// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFIELDGROUPSETTINGS_H
#define ASPOSE_CELLS_PIVOT_PIVOTFIELDGROUPSETTINGS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PivotFieldGroupType.h"

namespace Aspose { namespace Cells { namespace Pivot {

class PivotFieldGroupSettings_Impl;

/// <summary>
/// Represents the group setting of pivot field.
/// </summary>
class PivotFieldGroupSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFieldGroupSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupSettings();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupSettings(PivotFieldGroupSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupSettings(const PivotFieldGroupSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFieldGroupSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupSettings& operator=(const PivotFieldGroupSettings& src);
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
    /// Gets the group type of pivot field.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupType GetType();
    
};

} } }

#endif
