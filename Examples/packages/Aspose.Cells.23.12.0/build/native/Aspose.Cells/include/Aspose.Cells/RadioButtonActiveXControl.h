// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_RADIOBUTTONACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_RADIOBUTTONACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ToggleButtonActiveXControl.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlCaptionAlignmentType.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class RadioButtonActiveXControl_Impl;

/// <summary>
/// Represents a RadioButton ActiveX control.
/// </summary>
class RadioButtonActiveXControl : public ToggleButtonActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RadioButtonActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RadioButtonActiveXControl(RadioButtonActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RadioButtonActiveXControl(const RadioButtonActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RadioButtonActiveXControl(const ToggleButtonActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RadioButtonActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RadioButtonActiveXControl& operator=(const RadioButtonActiveXControl& src);
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
    /// Gets and sets the group's name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetGroupName();
    /// <summary>
    /// Gets and sets the group's name.
    /// </summary>
    ASPOSE_CELLS_API void SetGroupName(const U16String& value);
    /// <summary>
    /// Gets and sets the group's name.
    /// </summary>
    ASPOSE_CELLS_API void SetGroupName(const char16_t* value);
    /// <summary>
    /// Gets and set the position of the Caption relative to the control.
    /// </summary>
    ASPOSE_CELLS_API ControlCaptionAlignmentType GetAlignment();
    /// <summary>
    /// Gets and set the position of the Caption relative to the control.
    /// </summary>
    ASPOSE_CELLS_API void SetAlignment(ControlCaptionAlignmentType value);
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
