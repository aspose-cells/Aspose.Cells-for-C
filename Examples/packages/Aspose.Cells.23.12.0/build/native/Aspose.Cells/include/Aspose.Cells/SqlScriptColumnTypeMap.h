// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVING_SQLSCRIPTCOLUMNTYPEMAP_H
#define ASPOSE_CELLS_SAVING_SQLSCRIPTCOLUMNTYPEMAP_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Saving {

using namespace Aspose::Cells;

class SqlScriptColumnTypeMap_Impl;

/// <summary>
/// Represents column type map.
/// </summary>
class SqlScriptColumnTypeMap {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SqlScriptColumnTypeMap_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptColumnTypeMap();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptColumnTypeMap(SqlScriptColumnTypeMap_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptColumnTypeMap(const SqlScriptColumnTypeMap& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SqlScriptColumnTypeMap();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SqlScriptColumnTypeMap& operator=(const SqlScriptColumnTypeMap& src);
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
    /// Gets string type in the database.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetStringType();
    /// <summary>
    /// Gets numeric type in the database.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetNumbericType();
    
};

} } }

#endif
