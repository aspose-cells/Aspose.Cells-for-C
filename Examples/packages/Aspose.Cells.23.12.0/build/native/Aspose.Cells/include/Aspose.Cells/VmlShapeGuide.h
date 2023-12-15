// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_VMLSHAPEGUIDE_H
#define ASPOSE_CELLS_DRAWING_VMLSHAPEGUIDE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BaseShapeGuide.h"

namespace Aspose { namespace Cells { namespace Drawing {

class VmlShapeGuide_Impl;

/// <summary>
/// just for vml
/// Encapsulates a shape guide specifies the presence of a shape
/// guide that will be used to govern the geometry of the specified shape
/// </summary>
class VmlShapeGuide : public BaseShapeGuide {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VmlShapeGuide_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VmlShapeGuide(VmlShapeGuide_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VmlShapeGuide(const VmlShapeGuide& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API VmlShapeGuide(const BaseShapeGuide& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VmlShapeGuide();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VmlShapeGuide& operator=(const VmlShapeGuide& src);
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
    
};

} } }

#endif
