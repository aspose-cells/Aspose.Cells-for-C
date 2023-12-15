// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAPARAMETERCOLLECTION_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAPARAMETERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormulaParameter;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaParameterCollection_Impl;

/// <summary>
/// Represents the
/// </summary>
class PowerQueryFormulaParameterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaParameterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameterCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameterCollection(PowerQueryFormulaParameterCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameterCollection(const PowerQueryFormulaParameterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaParameterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameterCollection& operator=(const PowerQueryFormulaParameterCollection& src);
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
    /// Gets <see cref=" PowerQueryFormulaParameter"/> by the index in the list.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaParameter Get(int32_t index);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormulaParameter"/> by the name of the item.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaParameter Get(const U16String& name);
    /// <summary>
    /// Gets <see cref=" PowerQueryFormulaParameter"/> by the name of the item.
    /// </summary>
    /// <param name="name">The name of the item.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PowerQueryFormulaParameter Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
