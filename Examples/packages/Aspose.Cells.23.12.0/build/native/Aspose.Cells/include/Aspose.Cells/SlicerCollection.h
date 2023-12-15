// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICERCOLLECTION_H
#define ASPOSE_CELLS_SLICERS_SLICERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Slicers {
    class Slicer;
} } }

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTable;
    class PivotField;
} } }

namespace Aspose { namespace Cells { namespace Tables {
    class ListObject;
    class ListColumn;
} } }

namespace Aspose { namespace Cells { namespace Slicers {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Pivot;
using namespace Aspose::Cells::Tables;

class SlicerCollection_Impl;

/// <summary>
/// Specifies the collection of all the Slicer objects on the specified worksheet.
/// </summary>
class SlicerCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SlicerCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SlicerCollection(SlicerCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SlicerCollection(const SlicerCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SlicerCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SlicerCollection& operator=(const SlicerCollection& src);
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
    /// Gets the Slicer by index.
    /// </summary>
    ASPOSE_CELLS_API Slicer Get(int32_t index);
    /// <summary>
    /// Gets the Slicer  by slicer's name.
    /// </summary>
    ASPOSE_CELLS_API Slicer Get(const U16String& name);
    /// <summary>
    /// Gets the Slicer  by slicer's name.
    /// </summary>
    ASPOSE_CELLS_API Slicer Get(const char16_t* name);
    /// <summary>
    /// Remove the specified Slicer
    /// </summary>
    /// <param name="slicer">The Slicer object</param>
    ASPOSE_CELLS_API void Remove(const Slicer& slicer);
    /// <summary>
    /// Deletes the Slicer at the specified index
    /// </summary>
    /// <param name="index">The position index in Slicer collection</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, const U16String& baseFieldName);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, const char16_t* baseFieldName);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const U16String& baseFieldName);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldName">The name of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const char16_t* baseFieldName);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseFieldIndex">The index of PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, int32_t baseFieldIndex);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, int32_t row, int32_t column, const PivotField& baseField);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const U16String& destCellName, const PivotField& baseField);
    /// <summary>
    /// Add a new Slicer using PivotTable as data source
    /// </summary>
    /// <param name="pivot">PivotTable object</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <param name="baseField">The PivotField in PivotTable.BaseFields</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivot, const char16_t* destCellName, const PivotField& baseField);
    /// <summary>
    /// Add a new Slicer using ListObjet as data source
    /// </summary>
    /// <param name="table">ListObject object</param>
    /// <param name="index">The index of ListColumn in ListObject.ListColumns</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const ListObject& table, int32_t index, const U16String& destCellName);
    /// <summary>
    /// Add a new Slicer using ListObjet as data source
    /// </summary>
    /// <param name="table">ListObject object</param>
    /// <param name="index">The index of ListColumn in ListObject.ListColumns</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const ListObject& table, int32_t index, const char16_t* destCellName);
    /// <summary>
    /// Add a new Slicer using ListObjet as data source
    /// </summary>
    /// <param name="table">ListObject object</param>
    /// <param name="listColumn">The ListColumn in ListObject.ListColumns</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const ListObject& table, const ListColumn& listColumn, const U16String& destCellName);
    /// <summary>
    /// Add a new Slicer using ListObjet as data source
    /// </summary>
    /// <param name="table">ListObject object</param>
    /// <param name="listColumn">The ListColumn in ListObject.ListColumns</param>
    /// <param name="destCellName">The cell in the upper-left corner of the Slicer range.</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const ListObject& table, const ListColumn& listColumn, const char16_t* destCellName);
    /// <summary>
    /// Add a new Slicer using ListObjet as data source
    /// </summary>
    /// <param name="table">ListObject object</param>
    /// <param name="listColumn">The ListColumn in ListObject.ListColumns</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the Slicer range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the Slicer range.</param>
    /// <returns>The new add Slicer index</returns>
    ASPOSE_CELLS_API int32_t Add(const ListObject& table, const ListColumn& listColumn, int32_t row, int32_t column);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
