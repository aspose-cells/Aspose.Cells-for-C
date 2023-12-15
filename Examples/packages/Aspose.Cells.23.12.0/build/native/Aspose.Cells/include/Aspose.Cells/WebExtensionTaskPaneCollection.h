// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONTASKPANECOLLECTION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONTASKPANECOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionTaskPane;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

class WebExtensionTaskPaneCollection_Impl;

/// <summary>
/// Represents the list of task pane.
/// </summary>
class WebExtensionTaskPaneCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionTaskPaneCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPaneCollection(WebExtensionTaskPaneCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPaneCollection(const WebExtensionTaskPaneCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionTaskPaneCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPaneCollection& operator=(const WebExtensionTaskPaneCollection& src);
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
    /// Gets task pane by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The task pane.</returns>
    ASPOSE_CELLS_API WebExtensionTaskPane Get(int32_t index);
    /// <summary>
    /// Adds task pane.
    /// </summary>
    /// <returns>The index.</returns>
    ASPOSE_CELLS_API int32_t Add();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
