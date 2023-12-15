// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAITEMCOLLECTION_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAITEMCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormulaItem;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaItemCollection_Impl;

/// <summary>
/// Represents all item of the power query formula.
/// </summary>
class PowerQueryFormulaItemCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaItemCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItemCollection(PowerQueryFormulaItemCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItemCollection(const PowerQueryFormulaItemCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaItemCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaItemCollection& operator=(const PowerQueryFormulaItemCollection& src);
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
    /// Gets <see cref=" PowerQueryFormulaItem"/> by the index in the list.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaItem Get(int32_t index);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormulaItem"/> by the name of the item.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaItem Get(const U16String& name);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormulaItem"/> by the name of the item.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaItem Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
