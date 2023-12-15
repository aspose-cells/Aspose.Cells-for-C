// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULA_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormulaItemCollection;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormula_Impl;

/// <summary>
/// Represents the definition of power query formula.
/// </summary>
class PowerQueryFormula {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormula_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormula(PowerQueryFormula_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormula(const PowerQueryFormula& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormula();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormula& operator=(const PowerQueryFormula& src);
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
    /// Gets the definition of the power query formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormulaDefinition();
    /// <summary>
    /// Gets and sets the name of the power query formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the power query formula.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the power query formula.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets all items of power query formula.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItemCollection GetPowerQueryFormulaItems();
    
};

} } }

#endif
