// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAFUNCTION_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAFUNCTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PowerQueryFormula.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaFunction_Impl;

/// <summary>
/// Represents the function of power query.
/// </summary>
class PowerQueryFormulaFunction : public PowerQueryFormula {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaFunction_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaFunction(PowerQueryFormulaFunction_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaFunction(const PowerQueryFormulaFunction& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaFunction(const PowerQueryFormula& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaFunction();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaFunction& operator=(const PowerQueryFormulaFunction& src);
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
    /// Gets and sets the definition of function.
    /// </summary>
    ASPOSE_CELLS_API U16String GetF();
    /// <summary>
    /// Gets and sets the definition of function.
    /// </summary>
    ASPOSE_CELLS_API void SetF(const U16String& value);
    /// <summary>
    /// Gets and sets the definition of function.
    /// </summary>
    ASPOSE_CELLS_API void SetF(const char16_t* value);
    
};

} } }

#endif
