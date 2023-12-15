// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_SPINBUTTONACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_SPINBUTTONACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"

#include "Aspose.Cells/ControlScrollOrientation.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

class SpinButtonActiveXControl_Impl;

/// <summary>
/// Represents the SpinButton control.
/// </summary>
class SpinButtonActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SpinButtonActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SpinButtonActiveXControl(SpinButtonActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SpinButtonActiveXControl(const SpinButtonActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API SpinButtonActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SpinButtonActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SpinButtonActiveXControl& operator=(const SpinButtonActiveXControl& src);
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
    /// Gets and sets the minimum acceptable value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMin();
    /// <summary>
    /// Gets and sets the minimum acceptable value.
    /// </summary>
    ASPOSE_CELLS_API void SetMin(int32_t value);
    /// <summary>
    /// Gets and sets the maximum acceptable value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMax();
    /// <summary>
    /// Gets and sets the maximum acceptable value.
    /// </summary>
    ASPOSE_CELLS_API void SetMax(int32_t value);
    /// <summary>
    /// Gets and sets the value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPosition();
    /// <summary>
    /// Gets and sets the value.
    /// </summary>
    ASPOSE_CELLS_API void SetPosition(int32_t value);
    /// <summary>
    /// Gets and sets the amount by which the Position property changes
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSmallChange();
    /// <summary>
    /// Gets and sets the amount by which the Position property changes
    /// </summary>
    ASPOSE_CELLS_API void SetSmallChange(int32_t value);
    /// <summary>
    /// Gets and sets whether the SpinButton or ScrollBar is oriented vertically or horizontally.
    /// </summary>
    ASPOSE_CELLS_API ControlScrollOrientation GetOrientation();
    /// <summary>
    /// Gets and sets whether the SpinButton or ScrollBar is oriented vertically or horizontally.
    /// </summary>
    ASPOSE_CELLS_API void SetOrientation(ControlScrollOrientation value);
    
};

} } } }

#endif
