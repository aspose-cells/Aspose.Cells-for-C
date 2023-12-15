// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_SCROLLBARACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_SCROLLBARACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SpinButtonActiveXControl.h"

#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

class ScrollBarActiveXControl_Impl;

/// <summary>
/// Represents the ScrollBar control.
/// </summary>
class ScrollBarActiveXControl : public SpinButtonActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ScrollBarActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ScrollBarActiveXControl(ScrollBarActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ScrollBarActiveXControl(const ScrollBarActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ScrollBarActiveXControl(const SpinButtonActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ScrollBarActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ScrollBarActiveXControl& operator=(const ScrollBarActiveXControl& src);
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
    /// Gets and sets the amount by which the Position property changes
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLargeChange();
    /// <summary>
    /// Gets and sets the amount by which the Position property changes
    /// </summary>
    ASPOSE_CELLS_API void SetLargeChange(int32_t value);
    
};

} } } }

#endif
