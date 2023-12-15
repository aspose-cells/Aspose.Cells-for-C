// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SCENARIOINPUTCELLCOLLECTION_H
#define ASPOSE_CELLS_SCENARIOINPUTCELLCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ScenarioInputCell;
} }

namespace Aspose { namespace Cells {

class ScenarioInputCellCollection_Impl;

/// <summary>
/// Represents the list of the scenario's input cells.
/// </summary>
class ScenarioInputCellCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ScenarioInputCellCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCellCollection(ScenarioInputCellCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCellCollection(const ScenarioInputCellCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ScenarioInputCellCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCellCollection& operator=(const ScenarioInputCellCollection& src);
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
    /// Gets <see cref="ScenarioInputCell"/> by index in the list.
    /// </summary>
    /// <param name="index">The specific index in the list</param>
    /// <returns>The <see cref="ScenarioInputCell"/> object</returns>
    ASPOSE_CELLS_API ScenarioInputCell Get(int32_t index);
    /// <summary>
    /// Adds an input cell.
    /// </summary>
    /// <param name="row">The row index of input cell.</param>
    /// <param name="column">The column index of input cell.</param>
    /// <param name="value">The value of input cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column, const U16String& value);
    /// <summary>
    /// Adds an input cell.
    /// </summary>
    /// <param name="row">The row index of input cell.</param>
    /// <param name="column">The column index of input cell.</param>
    /// <param name="value">The value of input cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column, const char16_t* value);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
