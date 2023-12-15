// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_DATAMODELCONNECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_DATAMODELCONNECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExternalConnection.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {

class DataModelConnection_Impl;

/// <summary>
/// Specifies a data model connection
/// </summary>
class DataModelConnection : public ExternalConnection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelConnection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(DataModelConnection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(const DataModelConnection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(const ExternalConnection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelConnection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection& operator=(const DataModelConnection& src);
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
    
};

} } }

#endif
