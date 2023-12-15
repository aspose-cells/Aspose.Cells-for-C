// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_COLORHELPER_H
#define ASPOSE_CELLS_DRAWING_COLORHELPER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells {
    class Workbook;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ColorHelper_Impl;

/// <summary>
/// Provides helper functions about color.
/// </summary>
class ColorHelper {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ColorHelper_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ColorHelper(ColorHelper_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ColorHelper(const ColorHelper& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ColorHelper();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ColorHelper& operator=(const ColorHelper& src);
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
    /// Convert OLE_COLOR.
    /// </summary>
    /// <param name="oleColor">The value of OLE_COLOR.</param>
    /// <returns>The <see cref="Color"/> object.</returns>
    ASPOSE_CELLS_API static Aspose::Cells::Color FromOleColor(int32_t oleColor);
    /// <summary>
    /// Convert color to OLE_COLOR
    /// </summary>
    /// <param name="color">The <see cref="Color"/> object.</param>
    /// <param name="workbook"></param>
    /// <returns>The value of OLE_COLOR</returns>
    ASPOSE_CELLS_API static int32_t ToOleColor(const Aspose::Cells::Color& color, const Workbook& workbook);
    
};

} } }

#endif
