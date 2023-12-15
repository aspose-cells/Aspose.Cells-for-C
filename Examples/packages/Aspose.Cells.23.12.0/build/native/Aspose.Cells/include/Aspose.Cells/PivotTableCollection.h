// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTTABLECOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTTABLECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTable;
    class PivotPageFields;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotTableCollection_Impl;

/// <summary>
/// Represents the collection of all the PivotTable objects on the specified worksheet.
/// </summary>
class PivotTableCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotTableCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotTableCollection(PivotTableCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotTableCollection(const PivotTableCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotTableCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotTableCollection& operator=(const PivotTableCollection& src);
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
    /// Performs application-defined tasks associated with freeing, releasing, or
    /// resetting unmanaged resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data for the new PivotTable cache.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& sourceData, const U16String& destCellName, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data for the new PivotTable cache.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* sourceData, const char16_t* destCellName, const char16_t* tableName);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data for the new PivotTable cache.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <param name="useSameSource">Indicates whether using same data source when another existing pivot table has used this data source.
    /// If the property is true, it will save memory.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& sourceData, const U16String& destCellName, const U16String& tableName, bool useSameSource);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data for the new PivotTable cache.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <param name="useSameSource">Indicates whether using same data source when another existing pivot table has used this data source.
    /// If the property is true, it will save memory.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* sourceData, const char16_t* destCellName, const char16_t* tableName, bool useSameSource);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& sourceData, int32_t row, int32_t column, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* sourceData, int32_t row, int32_t column, const char16_t* tableName);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <param name="useSameSource">Indicates whether using same data source when another existing pivot table has used this data source.
    /// If the property is true, it will save memory.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& sourceData, int32_t row, int32_t column, const U16String& tableName, bool useSameSource);
    /// <summary>
    /// Adds a new PivotTable cache to a PivotCaches collection.
    /// </summary>
    /// <param name="sourceData">The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <param name="useSameSource">Indicates whether using same data source when another existing pivot table has used this data source.
    /// If the property is true, it will save memory.</param>
    /// <returns>The new added cache index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* sourceData, int32_t row, int32_t column, const char16_t* tableName, bool useSameSource);
    /// <summary>
    /// Adds a new PivotTable Object to the collection from another PivotTable.
    /// </summary>
    /// <param name="pivotTable">The source pivotTable.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivotTable, const U16String& destCellName, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection from another PivotTable.
    /// </summary>
    /// <param name="pivotTable">The source pivotTable.</param>
    /// <param name="destCellName">The cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivotTable, const char16_t* destCellName, const char16_t* tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection from another PivotTable.
    /// </summary>
    /// <param name="pivotTable">The source pivotTable.</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivotTable, int32_t row, int32_t column, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection from another PivotTable.
    /// </summary>
    /// <param name="pivotTable">The source pivotTable.</param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotTable& pivotTable, int32_t row, int32_t column, const char16_t* tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
    /// </summary>
    /// <param name="sourceData">The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
    /// <param name="isAutoPage">Whether auto create a single page field.
    /// If true,the following param pageFields will be ignored.
    /// </param>
    /// <param name="pageFields">The pivot page field items.
    /// </param>
    /// <param name="destCellName">destCellName The name of the new PivotTable report.</param>
    /// <param name="tableName">the name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<U16String>& sourceData, bool isAutoPage, const PivotPageFields& pageFields, const U16String& destCellName, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
    /// </summary>
    /// <param name="sourceData">The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
    /// <param name="isAutoPage">Whether auto create a single page field.
    /// If true,the following param pageFields will be ignored.
    /// </param>
    /// <param name="pageFields">The pivot page field items.
    /// </param>
    /// <param name="destCellName">destCellName The name of the new PivotTable report.</param>
    /// <param name="tableName">the name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<U16String>& sourceData, bool isAutoPage, const PivotPageFields& pageFields, const char16_t* destCellName, const char16_t* tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
    /// </summary>
    /// <param name="sourceData">The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
    /// <param name="isAutoPage">Whether auto create a single page field.
    /// If true,the following param pageFields will be ignored</param>
    /// <param name="pageFields">The pivot page field items.
    /// </param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<U16String>& sourceData, bool isAutoPage, const PivotPageFields& pageFields, int32_t row, int32_t column, const U16String& tableName);
    /// <summary>
    /// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
    /// </summary>
    /// <param name="sourceData">The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
    /// <param name="isAutoPage">Whether auto create a single page field.
    /// If true,the following param pageFields will be ignored</param>
    /// <param name="pageFields">The pivot page field items.
    /// </param>
    /// <param name="row">Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="column">Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
    /// <param name="tableName">The name of the new PivotTable report.</param>
    /// <returns>The new added PivotTable index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<U16String>& sourceData, bool isAutoPage, const PivotPageFields& pageFields, int32_t row, int32_t column, const char16_t* tableName);
    /// <summary>
    /// Gets the PivotTable report by index.
    /// </summary>
    ASPOSE_CELLS_API PivotTable Get(int32_t index);
    /// <summary>
    /// Gets the PivotTable report by pivottable's name.
    /// </summary>
    ASPOSE_CELLS_API PivotTable Get(const U16String& name);
    /// <summary>
    /// Gets the PivotTable report by pivottable's name.
    /// </summary>
    ASPOSE_CELLS_API PivotTable Get(const char16_t* name);
    /// <summary>
    /// Gets the PivotTable report by pivottable's position.
    /// </summary>
    ASPOSE_CELLS_API PivotTable Get(int32_t row, int32_t column);
    /// <summary>
    /// Clear all pivot tables.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Deletes the specified PivotTable and delete the PivotTable data
    /// </summary>
    /// <param name="pivotTable">PivotTable object</param>
    ASPOSE_CELLS_API void Remove(const PivotTable& pivotTable);
    /// <summary>
    /// Deletes the specified PivotTable
    /// </summary>
    /// <param name="pivotTable">PivotTable object</param>
    /// <param name="keepData">Whether to keep the PivotTable data</param>
    ASPOSE_CELLS_API void Remove(const PivotTable& pivotTable, bool keepData);
    /// <summary>
    /// Deletes the PivotTable at the specified index and delete the PivotTable data
    /// </summary>
    /// <param name="index">the position index in PivotTable collection</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Deletes the PivotTable at the specified index
    /// </summary>
    /// <param name="index">the position index in PivotTable collection</param>
    /// <param name="keepData">Whether to keep the PivotTable data</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index, bool keepData);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
