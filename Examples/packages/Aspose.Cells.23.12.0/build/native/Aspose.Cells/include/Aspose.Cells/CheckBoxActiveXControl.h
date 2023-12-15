// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CHECKBOXACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CHECKBOXACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/CheckValueType.h"
#include "Aspose.Cells/ControlCaptionAlignmentType.h"
#include "Aspose.Cells/ControlPicturePositionType.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class CheckBoxActiveXControl_Impl;

/// <summary>
/// Represents a CheckBox ActiveX control.
/// </summary>
class CheckBoxActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CheckBoxActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxActiveXControl(CheckBoxActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxActiveXControl(const CheckBoxActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CheckBoxActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CheckBoxActiveXControl& operator=(const CheckBoxActiveXControl& src);
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
    /// Gets and sets the special effect of the control.
    /// </summary>
    ASPOSE_CELLS_API ControlSpecialEffectType GetSpecialEffect();
    /// <summary>
    /// Gets and sets the special effect of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetSpecialEffect(ControlSpecialEffectType value);
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
    /// Indicates if the control is checked or not.
    /// </summary>
    ASPOSE_CELLS_API CheckValueType GetValue();
    /// <summary>
    /// Indicates if the control is checked or not.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(CheckValueType value);
    /// <summary>
    /// Indicates how the specified control will display Null values.
    /// </summary>
    /// <remarks>
    /// <list type="table">
    /// <listheader>
    /// <description>Setting</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>True</description>
    /// <description>The control will cycle through states for Yes, No, and Null values. The control appears dimmed (grayed) when its Value property is set to Null.</description>
    /// </item>
    /// <item>
    /// <description>False</description>
    /// <description>(Default) The control will cycle through states for Yes and No values. Null values display as if they were No values.</description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API bool IsTripleState();
    /// <summary>
    /// Indicates how the specified control will display Null values.
    /// </summary>
    /// <remarks>
    /// <list type="table">
    /// <listheader>
    /// <description>Setting</description>
    /// <description>Description</description>
    /// </listheader>
    /// <item>
    /// <description>True</description>
    /// <description>The control will cycle through states for Yes, No, and Null values. The control appears dimmed (grayed) when its Value property is set to Null.</description>
    /// </item>
    /// <item>
    /// <description>False</description>
    /// <description>(Default) The control will cycle through states for Yes and No values. Null values display as if they were No values.</description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API void SetIsTripleState(bool value);
    
};

} } } }

#endif
