// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULACOLLECTION_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULACOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormula;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaCollection_Impl;

/// <summary>
/// Represents all power query formulas in the mashup data.
/// </summary>
class PowerQueryFormulaCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaCollection(PowerQueryFormulaCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaCollection(const PowerQueryFormulaCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaCollection& operator=(const PowerQueryFormulaCollection& src);
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
    /// Gets <see cref=" PowerQueryFormula"/> by the index in the list.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormula Get(int32_t index);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormula"/> by the name of the power query formula.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormula Get(const U16String& name);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormula"/> by the name of the power query formula.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormula Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
