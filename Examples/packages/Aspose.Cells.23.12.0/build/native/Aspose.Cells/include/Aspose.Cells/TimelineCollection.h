// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TIMELINES_TIMELINECOLLECTION_H
#define ASPOSE_CELLS_TIMELINES_TIMELINECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Timelines {
    class Timeline;
} } }

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTable;
    class PivotField;
} } }

namespace Aspose { namespace Cells { namespace Timelines {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Pivot;

class TimelineCollection_Impl;

/// <summary>
/// Specifies the collection of all the Timeline objects on the specified worksheet.
/// Due to MS Excel, Excel 2003 does not support Timeline.
/// </summary>
class TimelineCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TimelineCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TimelineCollection(TimelineCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TimelineCollection(const TimelineCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TimelineCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TimelineCollection& operator=(const TimelineCollection& src);
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
    /// Gets the Timeline by index.
    /// </summary>
    ASPOSE_CELLS_API Timeline Get(int32_t index);
    /// <summary>
    /// Gets the Timeline  by Timeline's name.
    /// </summary>
    ASPOSE_CELLS_API Timeline Get(const U16String& name);
    /// <summary>
    /// Gets the Timeline  by Timeline's name.
    /// </summary>
    ASPOSE_CELLS_API Timeline Get(const char16_t* name);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const U16String& baseFieldName);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const char16_t* baseFieldName);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, const U16String& baseFieldName);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, const char16_t* baseFieldName);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Timeline range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const PivotField& baseField);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, const PivotField& baseField);
    /// <summary>
    /// Add a new Timeline using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell name in the upper-left corner of the Timeline range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Timeline index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, const PivotField& baseField);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
