// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_IMAGEACTIVEXCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_IMAGEACTIVEXCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/ControlBorderType.h"
#include "Aspose.Cells/ControlPictureAlignmentType.h"
#include "Aspose.Cells/ControlPictureSizeMode.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class ImageActiveXControl_Impl;

/// <summary>
/// Represents the image control.
/// </summary>
class ImageActiveXControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ImageActiveXControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ImageActiveXControl(ImageActiveXControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ImageActiveXControl(const ImageActiveXControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ImageActiveXControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ImageActiveXControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ImageActiveXControl& operator=(const ImageActiveXControl& src);
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
    /// Indicates whether the control will automatically resize to display its entire contents.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSize();
    /// <summary>
    /// Indicates whether the control will automatically resize to display its entire contents.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSize(bool value);
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBorderOleColor();
    /// <summary>
    /// Gets and sets the ole color of the background.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderOleColor(int32_t value);
    /// <summary>
    /// Gets and set the type of border used by the control.
    /// </summary>
    ASPOSE_CELLS_API ControlBorderType GetBorderStyle();
    /// <summary>
    /// Gets and set the type of border used by the control.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderStyle(ControlBorderType value);
    /// <summary>
    /// Gets and sets how to display the picture.
    /// </summary>
    ASPOSE_CELLS_API ControlPictureSizeMode GetPictureSizeMode();
    /// <summary>
    /// Gets and sets how to display the picture.
    /// </summary>
    ASPOSE_CELLS_API void SetPictureSizeMode(ControlPictureSizeMode value);
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
    /// Gets and sets the alignment of the picture inside the Form or Image.
    /// </summary>
    ASPOSE_CELLS_API ControlPictureAlignmentType GetPictureAlignment();
    /// <summary>
    /// Gets and sets the alignment of the picture inside the Form or Image.
    /// </summary>
    ASPOSE_CELLS_API void SetPictureAlignment(ControlPictureAlignmentType value);
    /// <summary>
    /// Indicates whether the picture is tiled across the background.
    /// </summary>
    ASPOSE_CELLS_API bool IsTiled();
    /// <summary>
    /// Indicates whether the picture is tiled across the background.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTiled(bool value);
    
};

} } } }

#endif
