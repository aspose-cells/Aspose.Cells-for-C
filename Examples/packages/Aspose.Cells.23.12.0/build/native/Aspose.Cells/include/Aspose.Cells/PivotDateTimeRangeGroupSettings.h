// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTDATETIMERANGEGROUPSETTINGS_H
#define ASPOSE_CELLS_PIVOT_PIVOTDATETIMERANGEGROUPSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PivotFieldGroupSettings.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/PivotFieldGroupType.h"
#include "Aspose.Cells/PivotGroupByType.h"

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotDateTimeRangeGroupSettings_Impl;

/// <summary>
/// Represents the field grouped by date time range.
/// </summary>
class PivotDateTimeRangeGroupSettings : public PivotFieldGroupSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotDateTimeRangeGroupSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotDateTimeRangeGroupSettings(PivotDateTimeRangeGroupSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotDateTimeRangeGroupSettings(const PivotDateTimeRangeGroupSettings& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PivotDateTimeRangeGroupSettings(const PivotFieldGroupSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotDateTimeRangeGroupSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotDateTimeRangeGroupSettings& operator=(const PivotDateTimeRangeGroupSettings& src);
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
    /// Gets the data time group type.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldGroupType GetType();
    /// <summary>
    /// Gets the start date time of the group.
    /// </summary>
    ASPOSE_CELLS_API Date GetStart();
    /// <summary>
    /// Gets the end date time of the group.
    /// </summary>
    ASPOSE_CELLS_API Date GetEnd();
    /// <summary>
    /// Gets the internal of the group.
    /// </summary>
    ASPOSE_CELLS_API double GetInterval();
    /// <summary>
    /// Gets the types of grouping by date time.
    /// </summary>
    ASPOSE_CELLS_API Vector<PivotGroupByType> GetGroupByTypes();
    /// <summary>
    /// Check whether the field is grouped by the type.
    /// </summary>
    /// <param name="type">The group type</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool IsGroupedBy(PivotGroupByType type);
    
};

} } }

#endif
