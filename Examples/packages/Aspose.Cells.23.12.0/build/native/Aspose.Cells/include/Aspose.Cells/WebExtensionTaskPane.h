// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONTASKPANE_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONTASKPANE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtension;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtensionTaskPane_Impl;

/// <summary>
/// Represents a persisted taskpane object.
/// </summary>
class WebExtensionTaskPane {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionTaskPane_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPane(WebExtensionTaskPane_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPane(const WebExtensionTaskPane& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionTaskPane();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPane& operator=(const WebExtensionTaskPane& src);
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
    /// Gets and sets the web extension part associated with the taskpane instance
    /// </summary>
    ASPOSE_CELLS_API WebExtension GetWebExtension();
    /// <summary>
    /// Gets and sets the web extension part associated with the taskpane instance
    /// </summary>
    ASPOSE_CELLS_API void SetWebExtension(const WebExtension& value);
    /// <summary>
    /// Gets and sets the last-docked location of this taskpane object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDockState();
    /// <summary>
    /// Gets and sets the last-docked location of this taskpane object.
    /// </summary>
    ASPOSE_CELLS_API void SetDockState(const U16String& value);
    /// <summary>
    /// Gets and sets the last-docked location of this taskpane object.
    /// </summary>
    ASPOSE_CELLS_API void SetDockState(const char16_t* value);
    /// <summary>
    /// Indicates whether the Task Pane shows as visible by default when the document opens.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Indicates whether the Task Pane shows as visible by default when the document opens.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Indicates whether the taskpane is locked to the document in the UI and cannot be closed by the user.
    /// </summary>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// Indicates whether the taskpane is locked to the document in the UI and cannot be closed by the user.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// Gets and sets the default width value for this taskpane instance.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets and sets the default width value for this taskpane instance.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Gets and sets the index, enumerating from the outside to the inside, of this taskpane among other persisted taskpanes docked in the same default location.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets and sets the index, enumerating from the outside to the inside, of this taskpane among other persisted taskpanes docked in the same default location.
    /// </summary>
    ASPOSE_CELLS_API void SetRow(int32_t value);
    
};

} } }

#endif
