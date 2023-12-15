// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXCONTROLBASE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXCONTROLBASE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlMousePointerType.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells {
    class Workbook;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class ActiveXControlBase_Impl;

/// <summary>
/// Represents the ActiveX control.
/// </summary>
class ActiveXControlBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ActiveXControlBase_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControlBase(ActiveXControlBase_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControlBase(const ActiveXControlBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ActiveXControlBase();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ActiveXControlBase& operator=(const ActiveXControlBase& src);
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
    /// Gets the <see cref="Workbook"/> object.
    /// </summary>
    ASPOSE_CELLS_API Workbook GetWorkbook();
    /// <summary>
    /// Gets and sets a custom icon to display as the mouse pointer for the control.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetMouseIcon();
    /// <summary>
    /// Gets and sets a custom icon to display as the mouse pointer for the control.
    /// </summary>
    ASPOSE_CELLS_API void SetMouseIcon(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets and sets the type of icon displayed as the mouse pointer for the control.
    /// </summary>
    ASPOSE_CELLS_API ControlMousePointerType GetMousePointer();
    /// <summary>
    /// Gets and sets the type of icon displayed as the mouse pointer for the control.
    /// </summary>
    ASPOSE_CELLS_API void SetMousePointer(ControlMousePointerType value);
    /// <summary>
    /// Gets and sets the linked cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLinkedCell();
    /// <summary>
    /// Gets and sets the linked cell.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedCell(const U16String& value);
    /// <summary>
    /// Gets and sets the linked cell.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedCell(const char16_t* value);
    /// <summary>
    /// Gets and sets the list fill range.
    /// </summary>
    ASPOSE_CELLS_API U16String GetListFillRange();
    /// <summary>
    /// Gets and sets the list fill range.
    /// </summary>
    ASPOSE_CELLS_API void SetListFillRange(const U16String& value);
    /// <summary>
    /// Gets and sets the list fill range.
    /// </summary>
    ASPOSE_CELLS_API void SetListFillRange(const char16_t* value);
    /// <summary>
    /// Gets the type of the ActiveX control.
    /// </summary>
    ASPOSE_CELLS_API virtual ControlType GetType();
    /// <summary>
    /// Gets and sets the width of the control in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets and sets the width of the control in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Gets and sets the height of the control in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    /// <summary>
    /// Gets and sets the height of the control in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(double value);
    /// <summary>
    /// Gets and sets the ole color of the foreground.
    /// </summary>
    /// <remarks>
    /// Not applies to Image control.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetForeOleColor();
    /// <summary>
    /// Gets and sets the ole color of the foreground.
    /// </summary>
    /// <remarks>
    /// Not applies to Image control.
    /// </remarks>
    ASPOSE_CELLS_API void SetForeOleColor(int32_t value);
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBackOleColor();
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API void SetBackOleColor(int32_t value);
    /// <summary>
    /// Indicates whether this control is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Indicates whether this control is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Indicates whether to show a shadow.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether to show a shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets and sets the binary data of the control.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetData();
    
};

} } } }

#endif
