// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_BORDERCOLLECTION_H
#define ASPOSE_CELLS_BORDERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/BorderType.h"
#include "Aspose.Cells/CellBorderType.h"

namespace Aspose { namespace Cells {
    class Border;
} }

namespace Aspose { namespace Cells {

class BorderCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Border"/> objects.
/// </summary>
class BorderCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    BorderCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API BorderCollection(BorderCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API BorderCollection(const BorderCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~BorderCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API BorderCollection& operator=(const BorderCollection& src);
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
    /// Gets the <see cref="Border"/> element at the specified index.
    /// </summary>
    /// <param name="borderType">The border to be retrieved.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Border Get(BorderType borderType);
    /// <summary>
    /// Sets the <see cref="System.Drawing.Color"/> of all borders in the collection.
    /// </summary>
    /// <param name="color">Borders' <see cref="System.Drawing.Color"/>.</param>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& color);
    /// <summary>
    /// Sets the style of all borders of the collection.
    /// </summary>
    /// <param name="style">Borders' style</param>
    ASPOSE_CELLS_API void SetStyle(CellBorderType style);
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of Diagonal lines.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetDiagonalColor();
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of Diagonal lines.
    /// </summary>
    ASPOSE_CELLS_API void SetDiagonalColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the style of Diagonal lines.
    /// </summary>
    ASPOSE_CELLS_API CellBorderType GetDiagonalStyle();
    /// <summary>
    /// Gets or sets the style of Diagonal lines.
    /// </summary>
    ASPOSE_CELLS_API void SetDiagonalStyle(CellBorderType value);
    
};

} }

#endif
