// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAITEM_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAITEM_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaItem_Impl;

/// <summary>
/// Represents the item of the power query formula.
/// </summary>
class PowerQueryFormulaItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaItem_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItem(PowerQueryFormulaItem_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItem(const PowerQueryFormulaItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItem& operator=(const PowerQueryFormulaItem& src);
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
    /// Gets the name of the item.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the value of the item.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets the value of the item.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets the value of the item.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    
};

} } }

#endif
