// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_EXTERNALCONNECTIONCOLLECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_EXTERNALCONNECTIONCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ExternalConnection;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;

class ExternalConnectionCollection_Impl;

/// <summary>
/// Specifies the <see cref="ExternalConnection"/> collection
/// </summary>
class ExternalConnectionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ExternalConnectionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnectionCollection(ExternalConnectionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnectionCollection(const ExternalConnectionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ExternalConnectionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ExternalConnectionCollection& operator=(const ExternalConnectionCollection& src);
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
    /// Gets the <see cref="ExternalConnection"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ExternalConnection Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="ExternalConnection"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API void Set(const ExternalConnection& value, int32_t index);
    /// <summary>
    /// Gets the <see cref="ExternalConnection"/> element with the specified name.
    /// </summary>
    /// <param name="connectionName">the name of data connection</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API ExternalConnection Get(const U16String& connectionName);
    /// <summary>
    /// Gets the <see cref="ExternalConnection"/> element with the specified name.
    /// </summary>
    /// <param name="connectionName">the name of data connection</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API ExternalConnection Get(const char16_t* connectionName);
    /// <summary>
    /// Gets the <see cref="ExternalConnection"/> element with the specified id.
    /// </summary>
    /// <param name="connId">external connection id</param>
    /// <returns>The element with the specified id.</returns>
    ASPOSE_CELLS_API ExternalConnection GetExternalConnectionById(int32_t connId);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
