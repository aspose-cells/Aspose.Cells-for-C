// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_BEVEL_H
#define ASPOSE_CELLS_DRAWING_BEVEL_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/BevelPresetType.h"

namespace Aspose { namespace Cells { namespace Drawing {

class Bevel_Impl;

/// <summary>
/// Represents a bevel of a shape
/// </summary>
class Bevel {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Bevel_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Bevel(Bevel_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Bevel(const Bevel& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Bevel();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Bevel& operator=(const Bevel& src);
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
    /// Gets and sets the width of the bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets and sets the width of the bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Gets and sets the height of the bevel, or how far above the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    /// <summary>
    /// Gets and sets the height of the bevel, or how far above the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(double value);
    /// <summary>
    /// Gets and sets the preset bevel type.
    /// </summary>
    ASPOSE_CELLS_API BevelPresetType GetType();
    /// <summary>
    /// Gets and sets the preset bevel type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(BevelPresetType value);
    
};

} } }

#endif
