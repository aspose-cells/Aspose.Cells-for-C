// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLE_H
#define ASPOSE_CELLS_QUERYTABLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ExternalConnection;
} } }

namespace Aspose { namespace Cells {
    class Range;
} }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::ExternalConnections;

class QueryTable_Impl;

/// <summary>
/// Represents QueryTable information.
/// </summary>
class QueryTable {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    QueryTable_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API QueryTable(QueryTable_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API QueryTable(const QueryTable& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~QueryTable();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API QueryTable& operator=(const QueryTable& src);
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
    /// Gets the connection id of the query table.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetConnectionId();
    /// <summary>
    /// Gets the relate external connection.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnection GetExternalConnection();
    /// <summary>
    /// Gets the name of querytable.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the range of the result.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Range GetResultRange();
    /// <summary>
    /// Returns or sets the PreserveFormatting of the object.
    /// </summary>
    ASPOSE_CELLS_API bool GetPreserveFormatting();
    /// <summary>
    /// Returns or sets the PreserveFormatting of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetPreserveFormatting(bool value);
    /// <summary>
    /// Returns or sets the AdjustColumnWidth of the object.
    /// </summary>
    ASPOSE_CELLS_API bool GetAdjustColumnWidth();
    /// <summary>
    /// Returns or sets the AdjustColumnWidth of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetAdjustColumnWidth(bool value);
    
};

} }

#endif
