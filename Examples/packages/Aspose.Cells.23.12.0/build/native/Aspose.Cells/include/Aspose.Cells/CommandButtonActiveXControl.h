// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_COMMANDBUTTONACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_COMMANDBUTTONACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/ControlPicturePositionType.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class CommandButtonActiveXControl_Impl;

/// <summary>
/// Represents a command button.
/// </summary>
class CommandButtonActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CommandButtonActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CommandButtonActiveXControl(CommandButtonActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CommandButtonActiveXControl(const CommandButtonActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CommandButtonActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CommandButtonActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CommandButtonActiveXControl& operator=(const CommandButtonActiveXControl& src);
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
    /// Gets the type of the ActiveX control.
    /// </summary>
    ASPOSE_CELLS_API ControlType GetType();
    /// <summary>
    /// Gets and set the descriptive text that appears on a control.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCaption();
    /// <summary>
    /// Gets and set the descriptive text that appears on a control.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const U16String& value);
    /// <summary>
    /// Gets and set the descriptive text that appears on a control.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const char16_t* value);
    /// <summary>
    /// Gets and set the location of the control's picture relative to its caption.
    /// </summary>
    ASPOSE_CELLS_API ControlPicturePositionType GetPicturePosition();
    /// <summary>
    /// Gets and set the location of the control's picture relative to its caption.
    /// </summary>
    ASPOSE_CELLS_API void SetPicturePosition(ControlPicturePositionType value);
    /// <summary>
    /// Gets and sets the data of the picture.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetPicture();
    /// <summary>
    /// Gets and sets the data of the picture.
    /// </summary>
    ASPOSE_CELLS_API void SetPicture(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets and sets the accelerator key for the control.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetAccelerator();
    /// <summary>
    /// Gets and sets the accelerator key for the control.
    /// </summary>
    ASPOSE_CELLS_API void SetAccelerator(char16_t value);
    /// <summary>
    /// Indicates whether the control takes the focus when clicked.
    /// </summary>
    ASPOSE_CELLS_API bool GetTakeFocusOnClick();
    /// <summary>
    /// Indicates whether the control takes the focus when clicked.
    /// </summary>
    ASPOSE_CELLS_API void SetTakeFocusOnClick(bool value);
    /// <summary>
    /// Indicates whether the contents of the control automatically wrap at the end of a line.
    /// </summary>
    ASPOSE_CELLS_API bool IsWordWrapped();
    /// <summary>
    /// Indicates whether the contents of the control automatically wrap at the end of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetIsWordWrapped(bool value);
    
};

} } } }

#endif
