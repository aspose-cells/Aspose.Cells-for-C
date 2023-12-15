// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SOLIDFILL_H
#define ASPOSE_CELLS_DRAWING_SOLIDFILL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class SolidFill_Impl;

/// <summary>
/// Encapsulates the object that represents solid fill format
/// </summary>
class SolidFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SolidFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SolidFill(SolidFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SolidFill(const SolidFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SolidFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SolidFill& operator=(const SolidFill& src);
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
    /// Gets or sets the <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetCellsColor();
    /// <summary>
    /// Gets and sets the <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API void SetCellsColor(const CellsColor& value);
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets the hash code.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
};

} } }

#endif
