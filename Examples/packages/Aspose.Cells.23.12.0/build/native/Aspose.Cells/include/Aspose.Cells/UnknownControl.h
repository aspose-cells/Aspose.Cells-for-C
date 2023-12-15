// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_UNKNOWNCONTROL_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_UNKNOWNCONTROL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ControlType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

using namespace Aspose::Cells;

class UnknownControl_Impl;

/// <summary>
/// Unknow control.
/// </summary>
class UnknownControl : public ActiveXControl {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    UnknownControl_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API UnknownControl(UnknownControl_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API UnknownControl(const UnknownControl& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API UnknownControl(const ActiveXControl& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~UnknownControl();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API UnknownControl& operator=(const UnknownControl& src);
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
    /// Gets the related data.
    /// </summary>
    /// <param name="relId">The relationship id.</param>
    /// <returns>Returns the related data.</returns>
    ASPOSE_CELLS_API Vector<uint8_t> GetRelationshipData(const U16String& relId);
    /// <summary>
    /// Gets the related data.
    /// </summary>
    /// <param name="relId">The relationship id.</param>
    /// <returns>Returns the related data.</returns>
    ASPOSE_CELLS_API Vector<uint8_t> GetRelationshipData(const char16_t* relId);
    /// <summary>
    /// Gets and sets the binary data of the control.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetData();
    /// <summary>
    /// Gets the type of the ActiveX control.
    /// </summary>
    ASPOSE_CELLS_API ControlType GetType();
    
};

} } } }

#endif
