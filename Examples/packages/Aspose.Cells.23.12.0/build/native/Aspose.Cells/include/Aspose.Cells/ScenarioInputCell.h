// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SCENARIOINPUTCELL_H
#define ASPOSE_CELLS_SCENARIOINPUTCELL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class ScenarioInputCell_Impl;

/// <summary>
/// Represents input cell for the scenario.
/// </summary>
class ScenarioInputCell {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ScenarioInputCell_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCell(ScenarioInputCell_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCell(const ScenarioInputCell& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ScenarioInputCell();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCell& operator=(const ScenarioInputCell& src);
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
    /// Gets and sets the row index of the input cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets and sets the column index of the input cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Gets and sets the input cell address.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets value of the input cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets and sets value of the input cell.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets and sets value of the input cell.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    /// <summary>
    /// Indicates whether input cell is deleted.
    /// </summary>
    ASPOSE_CELLS_API bool IsDeleted();
    /// <summary>
    /// Indicates whether input cell is deleted.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDeleted(bool value);
    
};

} }

#endif
