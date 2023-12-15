// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControlBase.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/InputMethodEditorMode.h"
#include "Aspose.Cells/TextAlignmentType.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class ActiveXControl_Impl;

/// <summary>
/// Represents the ActiveX control.
/// </summary>
class ActiveXControl : public ActiveXControlBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControl(ActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControl(const ActiveXControlBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ActiveXControl& operator=(const ActiveXControl& src);
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
    /// Indicates whether the control can receive the focus and respond to user-generated events.
    /// </summary>
    ASPOSE_CELLS_API bool IsEnabled();
    /// <summary>
    /// Indicates whether the control can receive the focus and respond to user-generated events.
    /// </summary>
    ASPOSE_CELLS_API void SetIsEnabled(bool value);
    /// <summary>
    /// Indicates whether data in the control is locked for editing.
    /// </summary>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// Indicates whether data in the control is locked for editing.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// Indicates whether the control is transparent.
    /// </summary>
    ASPOSE_CELLS_API bool IsTransparent();
    /// <summary>
    /// Indicates whether the control is transparent.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTransparent(bool value);
    /// <summary>
    /// Gets and sets the default run-time mode of the Input Method Editor for the control as it receives focus.
    /// </summary>
    ASPOSE_CELLS_API InputMethodEditorMode GetIMEMode();
    /// <summary>
    /// Gets and sets the default run-time mode of the Input Method Editor for the control as it receives focus.
    /// </summary>
    ASPOSE_CELLS_API void SetIMEMode(InputMethodEditorMode value);
    /// <summary>
    /// Represents the font of the control.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Represents how to align the text used by the control.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextAlign();
    /// <summary>
    /// Represents how to align the text used by the control.
    /// </summary>
    ASPOSE_CELLS_API void SetTextAlign(TextAlignmentType value);
    /// <summary>
    /// Gets and sets the binary data of the control.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetData();
    /// <summary>
    /// Indicates whether the control will automatically resize to display its entire contents.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSize();
    /// <summary>
    /// Indicates whether the control will automatically resize to display its entire contents.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSize(bool value);
    
};

} } } }

#endif
