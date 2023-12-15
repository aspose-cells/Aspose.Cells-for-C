// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_DATAMASHUP_H
#define ASPOSE_CELLS_QUERYTABLES_DATAMASHUP_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormulaCollection;
    class PowerQueryFormulaParameterCollection;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {

class DataMashup_Impl;

/// <summary>
/// Represents mashup data.
/// </summary>
class DataMashup {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataMashup_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataMashup(DataMashup_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataMashup(const DataMashup& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataMashup();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataMashup& operator=(const DataMashup& src);
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
    /// Gets all power query formulas.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaCollection GetPowerQueryFormulas();
    /// <summary>
    /// Gets all parameters of power query formulas.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameterCollection GetPowerQueryFormulaParameters();
    
};

} } }

#endif
