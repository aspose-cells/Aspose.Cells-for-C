// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETERCOLLECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ConnectionParameter;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;

class ConnectionParameterCollection_Impl;

/// <summary>
/// Specifies the <see cref="ConnectionParameter"/> collection
/// </summary>
class ConnectionParameterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConnectionParameterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameterCollection(ConnectionParameterCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameterCollection(const ConnectionParameterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConnectionParameterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameterCollection& operator=(const ConnectionParameterCollection& src);
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
    /// Gets the <see cref="ConnectionParameter"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ConnectionParameter Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="ConnectionParameter"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API void Set(const ConnectionParameter& value, int32_t index);
    /// <summary>
    /// Gets the <see cref="ConnectionParameter"/> element with the specified name.
    /// </summary>
    /// <param name="connParamName">connection parameter name</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API ConnectionParameter Get(const U16String& connParamName);
    /// <summary>
    /// Gets the <see cref="ConnectionParameter"/> element with the specified name.
    /// </summary>
    /// <param name="connParamName">connection parameter name</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API ConnectionParameter Get(const char16_t* connParamName);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
