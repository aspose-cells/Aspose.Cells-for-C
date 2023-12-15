// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_LISTBOXACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_LISTBOXACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlBorderType.h"
#include "Aspose.Cells/ControlListStyle.h"
#include "Aspose.Cells/ControlMatchEntryType.h"
#include "Aspose.Cells/ControlScrollBarType.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"
#include "Aspose.Cells/SelectionType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class ListBoxActiveXControl_Impl;

/// <summary>
/// Represents a ListBox ActiveX control.
/// </summary>
class ListBoxActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListBoxActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListBoxActiveXControl(ListBoxActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListBoxActiveXControl(const ListBoxActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ListBoxActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListBoxActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListBoxActiveXControl& operator=(const ListBoxActiveXControl& src);
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
    /// Indicates specifies whether the control has vertical scroll bars, horizontal scroll bars, both, or neither.
    /// </summary>
    ASPOSE_CELLS_API ControlScrollBarType GetScrollBars();
    /// <summary>
    /// Indicates specifies whether the control has vertical scroll bars, horizontal scroll bars, both, or neither.
    /// </summary>
    ASPOSE_CELLS_API void SetScrollBars(ControlScrollBarType value);
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
    /// Indicates how a ListBox or ComboBox searches its list as the user types.
    /// </summary>
    ASPOSE_CELLS_API ControlMatchEntryType GetMatchEntry();
    /// <summary>
    /// Indicates how a ListBox or ComboBox searches its list as the user types.
    /// </summary>
    ASPOSE_CELLS_API void SetMatchEntry(ControlMatchEntryType value);
    /// <summary>
    /// Gets and sets the visual appearance.
    /// </summary>
    ASPOSE_CELLS_API ControlListStyle GetListStyle();
    /// <summary>
    /// Gets and sets the visual appearance.
    /// </summary>
    ASPOSE_CELLS_API void SetListStyle(ControlListStyle value);
    /// <summary>
    /// Indicates whether the control permits multiple selections.
    /// </summary>
    ASPOSE_CELLS_API SelectionType GetSelectionType();
    /// <summary>
    /// Indicates whether the control permits multiple selections.
    /// </summary>
    ASPOSE_CELLS_API void SetSelectionType(SelectionType value);
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    /// <remarks>
    /// Only effects when <see cref="ListBoxActiveXControl.SelectionType"/> is SelectionType.Single;
    /// </remarks>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    /// <remarks>
    /// Only effects when <see cref="ListBoxActiveXControl.SelectionType"/> is SelectionType.Single;
    /// </remarks>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets and sets the value of the control.
    /// </summary>
    /// <remarks>
    /// Only effects when <see cref="ListBoxActiveXControl.SelectionType"/> is SelectionType.Single;
    /// </remarks>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
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
    /// Indicates whether column headings are displayed.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowColumnHeads();
    /// <summary>
    /// Indicates whether column headings are displayed.
    /// </summary>
    ASPOSE_CELLS_API void SetShowColumnHeads(bool value);
    /// <summary>
    /// Indicates whether the control will only show complete lines of text without showing any partial lines.
    /// </summary>
    ASPOSE_CELLS_API bool GetIntegralHeight();
    /// <summary>
    /// Indicates whether the control will only show complete lines of text without showing any partial lines.
    /// </summary>
    ASPOSE_CELLS_API void SetIntegralHeight(bool value);
    /// <summary>
    /// Gets and sets the width of the column.
    /// </summary>
    ASPOSE_CELLS_API double GetColumnWidths();
    /// <summary>
    /// Gets and sets the width of the column.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnWidths(double value);
    
};

} } } }

#endif
