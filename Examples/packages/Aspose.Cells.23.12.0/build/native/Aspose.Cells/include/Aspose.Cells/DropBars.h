// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_DROPBARS_H
#define ASPOSE_CELLS_CHARTS_DROPBARS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
    class Area;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells::Drawing;

class DropBars_Impl;

/// <summary>
/// Represents the up/down bars in a chart.
/// </summary>
class DropBars {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DropBars_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DropBars(DropBars_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DropBars(const DropBars& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DropBars();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DropBars& operator=(const DropBars& src);
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
    /// Gets the border <see cref="Line"/>.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    
};

} } }

#endif
