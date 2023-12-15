// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_COMBOBOXACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_COMBOBOXACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlBorderType.h"
#include "Aspose.Cells/ControlListStyle.h"
#include "Aspose.Cells/ControlMatchEntryType.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"
#include "Aspose.Cells/DropButtonStyle.h"
#include "Aspose.Cells/ShowDropButtonType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class ComboBoxActiveXControl_Impl;

/// <summary>
/// Represents a ComboBox ActiveX control.
/// </summary>
class ComboBoxActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ComboBoxActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ComboBoxActiveXControl(ComboBoxActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ComboBoxActiveXControl(const ComboBoxActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ComboBoxActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ComboBoxActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ComboBoxActiveXControl& operator=(const ComboBoxActiveXControl& src);
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
    /// Gets and sets the maximum number of characters
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMaxLength();
    /// <summary>
    /// Gets and sets the maximum number of characters
    /// </summary>
    ASPOSE_CELLS_API void SetMaxLength(int32_t value);
    /// <summary>
    /// Gets and set the width in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetListWidth();
    /// <summary>
    /// Gets and set the width in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetListWidth(double value);
    /// <summary>
    /// Represents how the Value property is determined for a ComboBox or ListBox
    /// when the MultiSelect properties value (fmMultiSelectSingle).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBoundColumn();
    /// <summary>
    /// Represents how the Value property is determined for a ComboBox or ListBox
    /// when the MultiSelect properties value (fmMultiSelectSingle).
    /// </summary>
    ASPOSE_CELLS_API void SetBoundColumn(int32_t value);
    /// <summary>
    /// Represents the column in a ComboBox or ListBox to display to the user.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTextColumn();
    /// <summary>
    /// Represents the column in a ComboBox or ListBox to display to the user.
    /// </summary>
    ASPOSE_CELLS_API void SetTextColumn(int32_t value);
    /// <summary>
    /// Represents the number of columns to display in a ComboBox or ListBox.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumnCount();
    /// <summary>
    /// Represents the number of columns to display in a ComboBox or ListBox.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnCount(int32_t value);
    /// <summary>
    /// Represents the maximum number of rows to display in the list.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetListRows();
    /// <summary>
    /// Represents the maximum number of rows to display in the list.
    /// </summary>
    ASPOSE_CELLS_API void SetListRows(int32_t value);
    /// <summary>
    /// Indicates how a ListBox or ComboBox searches its list as the user types.
    /// </summary>
    ASPOSE_CELLS_API ControlMatchEntryType GetMatchEntry();
    /// <summary>
    /// Indicates how a ListBox or ComboBox searches its list as the user types.
    /// </summary>
    ASPOSE_CELLS_API void SetMatchEntry(ControlMatchEntryType value);
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
    /// Gets and sets the visual appearance.
    /// </summary>
    ASPOSE_CELLS_API ControlListStyle GetListStyle();
    /// <summary>
    /// Gets and sets the visual appearance.
    /// </summary>
    ASPOSE_CELLS_API void SetListStyle(ControlListStyle value);
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
    /// Indicates whether the user can type into the control.
    /// </summary>
    ASPOSE_CELLS_API bool IsEditable();
    /// <summary>
    /// Indicates whether the user can type into the control.
    /// </summary>
    ASPOSE_CELLS_API void SetIsEditable(bool value);
    /// <summary>
    /// Indicates whether column headings are displayed.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowColumnHeads();
    /// <summary>
    /// Indicates whether column headings are displayed.
    /// </summary>
    ASPOSE_CELLS_API void SetShowColumnHeads(bool value);
    /// <summary>
    /// Indicates whether dragging and dropping is enabled for the control.
    /// </summary>
    ASPOSE_CELLS_API bool IsDragBehaviorEnabled();
    /// <summary>
    /// Indicates whether dragging and dropping is enabled for the control.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDragBehaviorEnabled(bool value);
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
    /// Indicates whether the user can select a line of text by clicking in the region to the left of the text.
    /// </summary>
    ASPOSE_CELLS_API bool GetSelectionMargin();
    /// <summary>
    /// Indicates whether the user can select a line of text by clicking in the region to the left of the text.
    /// </summary>
    ASPOSE_CELLS_API void SetSelectionMargin(bool value);
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    /// <summary>
    /// Indicates whether selected text in the control appears highlighted when the control does not have focus.
    /// </summary>
    ASPOSE_CELLS_API bool GetHideSelection();
    /// <summary>
    /// Indicates whether selected text in the control appears highlighted when the control does not have focus.
    /// </summary>
    ASPOSE_CELLS_API void SetHideSelection(bool value);
    /// <summary>
    /// Gets and sets the width of the column.
    /// </summary>
    ASPOSE_CELLS_API double GetColumnWidths();
    /// <summary>
    /// Gets and sets the width of the column.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnWidths(double value);
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
