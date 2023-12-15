// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_TEXTBOXACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_TEXTBOXACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlBorderType.h"
#include "Aspose.Cells/ControlScrollBarType.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"
#include "Aspose.Cells/DropButtonStyle.h"
#include "Aspose.Cells/ShowDropButtonType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class TextBoxActiveXControl_Impl;

/// <summary>
/// Represents a text box ActiveX control.
/// </summary>
class TextBoxActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextBoxActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextBoxActiveXControl(TextBoxActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextBoxActiveXControl(const TextBoxActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TextBoxActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextBoxActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextBoxActiveXControl& operator=(const TextBoxActiveXControl& src);
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
    /// Gets and set the type of border used by the control.
    /// </summary>
    ASPOSE_CELLS_API ControlBorderType GetBorderStyle();
    /// <summary>
    /// Gets and set the type of border used by the control.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderStyle(ControlBorderType value);
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBorderOleColor();
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderOleColor(int32_t value);
    /// <summary>
    /// Gets and sets the special effect of the control.
    /// </summary>
    ASPOSE_CELLS_API ControlSpecialEffectType GetSpecialEffect();
    /// <summary>
    /// Gets and sets the special effect of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetSpecialEffect(ControlSpecialEffectType value);
    /// <summary>
    /// Gets and sets the maximum number of characters
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMaxLength();
    /// <summary>
    /// Gets and sets the maximum number of characters
    /// </summary>
    ASPOSE_CELLS_API void SetMaxLength(int32_t value);
    /// <summary>
    /// Indicates specifies whether the control has vertical scroll bars, horizontal scroll bars, both, or neither.
    /// </summary>
    ASPOSE_CELLS_API ControlScrollBarType GetScrollBars();
    /// <summary>
    /// Indicates specifies whether the control has vertical scroll bars, horizontal scroll bars, both, or neither.
    /// </summary>
    ASPOSE_CELLS_API void SetScrollBars(ControlScrollBarType value);
    /// <summary>
    /// Gets and sets a character to be displayed in place of the characters entered.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetPasswordChar();
    /// <summary>
    /// Gets and sets a character to be displayed in place of the characters entered.
    /// </summary>
    ASPOSE_CELLS_API void SetPasswordChar(char16_t value);
    /// <summary>
    /// Indicates whether the user can type into the control.
    /// </summary>
    ASPOSE_CELLS_API bool IsEditable();
    /// <summary>
    /// Indicates whether the user can type into the control.
    /// </summary>
    ASPOSE_CELLS_API void SetIsEditable(bool value);
    /// <summary>
    /// Indicates whether the control will only show complete lines of text without showing any partial lines.
    /// </summary>
    ASPOSE_CELLS_API bool GetIntegralHeight();
    /// <summary>
    /// Indicates whether the control will only show complete lines of text without showing any partial lines.
    /// </summary>
    ASPOSE_CELLS_API void SetIntegralHeight(bool value);
    /// <summary>
    /// Indicates whether dragging and dropping is enabled for the control.
    /// </summary>
    ASPOSE_CELLS_API bool IsDragBehaviorEnabled();
    /// <summary>
    /// Indicates whether dragging and dropping is enabled for the control.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDragBehaviorEnabled(bool value);
    /// <summary>
    /// Specifies the behavior of the ENTER key.
    /// True specifies that pressing ENTER will create a new line.
    /// False specifies that pressing ENTER will move the focus to the next object in the tab order.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnterKeyBehavior();
    /// <summary>
    /// Specifies the behavior of the ENTER key.
    /// True specifies that pressing ENTER will create a new line.
    /// False specifies that pressing ENTER will move the focus to the next object in the tab order.
    /// </summary>
    ASPOSE_CELLS_API void SetEnterKeyBehavior(bool value);
    /// <summary>
    /// Specifies selection behavior when entering the control.
    /// True specifies that the selection remains unchanged from last time the control was active.
    /// False specifies that all the text in the control will be selected when entering the control.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnterFieldBehavior();
    /// <summary>
    /// Specifies selection behavior when entering the control.
    /// True specifies that the selection remains unchanged from last time the control was active.
    /// False specifies that all the text in the control will be selected when entering the control.
    /// </summary>
    ASPOSE_CELLS_API void SetEnterFieldBehavior(bool value);
    /// <summary>
    /// Indicates whether tab characters are allowed in the text of the control.
    /// </summary>
    ASPOSE_CELLS_API bool GetTabKeyBehavior();
    /// <summary>
    /// Indicates whether tab characters are allowed in the text of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetTabKeyBehavior(bool value);
    /// <summary>
    /// Indicates whether selected text in the control appears highlighted when the control does not have focus.
    /// </summary>
    ASPOSE_CELLS_API bool GetHideSelection();
    /// <summary>
    /// Indicates whether selected text in the control appears highlighted when the control does not have focus.
    /// </summary>
    ASPOSE_CELLS_API void SetHideSelection(bool value);
    /// <summary>
    /// Indicates whether the focus will automatically move to the next control when the user enters the maximum number of characters.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoTab();
    /// <summary>
    /// Indicates whether the focus will automatically move to the next control when the user enters the maximum number of characters.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoTab(bool value);
    /// <summary>
    /// Indicates whether the control can display more than one line of text.
    /// </summary>
    ASPOSE_CELLS_API bool IsMultiLine();
    /// <summary>
    /// Indicates whether the control can display more than one line of text.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMultiLine(bool value);
    /// <summary>
    /// Indicates whether the contents of the control automatically wrap at the end of a line.
    /// </summary>
    ASPOSE_CELLS_API bool IsWordWrapped();
    /// <summary>
    /// Indicates whether the contents of the control automatically wrap at the end of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetIsWordWrapped(bool value);
    /// <summary>
    /// Gets and set text of the control.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets and set text of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets and set text of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Specifies the symbol displayed on the drop button
    /// </summary>
    ASPOSE_CELLS_API DropButtonStyle GetDropButtonStyle();
    /// <summary>
    /// Specifies the symbol displayed on the drop button
    /// </summary>
    ASPOSE_CELLS_API void SetDropButtonStyle(DropButtonStyle value);
    /// <summary>
    /// Specifies the symbol displayed on the drop button
    /// </summary>
    ASPOSE_CELLS_API ShowDropButtonType GetShowDropButtonTypeWhen();
    /// <summary>
    /// Specifies the symbol displayed on the drop button
    /// </summary>
    ASPOSE_CELLS_API void SetShowDropButtonTypeWhen(ShowDropButtonType value);
    /// <summary>
    /// Specifies the basic unit used to extend a selection.
    /// True specifies that the basic unit is a single character.
    /// false specifies that the basic unit is a whole word.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoWordSelected();
    /// <summary>
    /// Specifies the basic unit used to extend a selection.
    /// True specifies that the basic unit is a single character.
    /// false specifies that the basic unit is a whole word.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoWordSelected(bool value);
    
};

} } } }

#endif
