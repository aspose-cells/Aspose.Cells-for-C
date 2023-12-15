// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTDISCRETEGROUPSETTINGS_H
#define ASPOSE_CELLS_PIVOT_PIVOTDISCRETEGROUPSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PivotFieldGroupSettings.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/PivotFieldGroupType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class CustomPiovtFieldGroupItem;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotDiscreteGroupSettings_Impl;

/// <summary>
/// Rrepsents the discrete group of pivot field
/// </summary>
class PivotDiscreteGroupSettings : public PivotFieldGroupSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotDiscreteGroupSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotDiscreteGroupSettings(PivotDiscreteGroupSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotDiscreteGroupSettings(const PivotDiscreteGroupSettings& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PivotDiscreteGroupSettings(const PivotFieldGroupSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotDiscreteGroupSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotDiscreteGroupSettings& operator=(const PivotDiscreteGroupSettings& src);
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
    /// Gets the discrete items.
    /// </summary>
    ASPOSE_CELLS_API Vector<CustomPiovtFieldGroupItem> GetItems();
    
};

} } }

#endif
