// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_FLOOR_H
#define ASPOSE_CELLS_CHARTS_FLOOR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Area.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells::Drawing;

class Floor_Impl;

/// <summary>
/// Encapsulates the object that represents the floor of a 3-D chart.
/// </summary>
class Floor : public Area {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Floor_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Floor(Floor_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Floor(const Floor& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Floor(const Area& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Floor();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Floor& operator=(const Floor& src);
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
    /// Gets or sets the border <see cref="Line"/>.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets or sets the border <see cref="Line"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetBorder(const Line& value);
    
};

} } }

#endif
