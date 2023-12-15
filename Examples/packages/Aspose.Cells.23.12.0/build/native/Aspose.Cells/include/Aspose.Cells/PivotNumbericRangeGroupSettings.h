// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTNUMBERICRANGEGROUPSETTINGS_H
#define ASPOSE_CELLS_PIVOT_PIVOTNUMBERICRANGEGROUPSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PivotFieldGroupSettings.h"

#include "Aspose.Cells/PivotFieldGroupType.h"

namespace Aspose { namespace Cells { namespace Pivot {

class PivotNumbericRangeGroupSettings_Impl;

/// <summary>
/// Represents the numberic range group of the pivot field.
/// </summary>
class PivotNumbericRangeGroupSettings : public PivotFieldGroupSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotNumbericRangeGroupSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotNumbericRangeGroupSettings(PivotNumbericRangeGroupSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotNumbericRangeGroupSettings(const PivotNumbericRangeGroupSettings& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PivotNumbericRangeGroupSettings(const PivotFieldGroupSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotNumbericRangeGroupSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotNumbericRangeGroupSettings& operator=(const PivotNumbericRangeGroupSettings& src);
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
    /// Gets the group type.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupType GetType();
    /// <summary>
    /// Gets the start number of the group.
    /// </summary>
    ASPOSE_CELLS_API double GetStart();
    /// <summary>
    /// Gets the end number of the group.
    /// </summary>
    ASPOSE_CELLS_API double GetEnd();
    /// <summary>
    /// Gets the interval of the group.
    /// </summary>
    ASPOSE_CELLS_API double GetInterval();
    
};

} } }

#endif
