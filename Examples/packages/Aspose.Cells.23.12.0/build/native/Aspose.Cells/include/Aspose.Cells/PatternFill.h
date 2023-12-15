// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_PATTERNFILL_H
#define ASPOSE_CELLS_DRAWING_PATTERNFILL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/FillPattern.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class PatternFill_Impl;

/// <summary>
/// Encapsulates the object that represents pattern fill format
/// </summary>
class PatternFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PatternFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PatternFill(PatternFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PatternFill(const PatternFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PatternFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PatternFill& operator=(const PatternFill& src);
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
    /// Gets or sets the fill pattern type
    /// </summary>
    ASPOSE_CELLS_API FillPattern GetPattern();
    /// <summary>
    /// Gets or sets the fill pattern type
    /// </summary>
    ASPOSE_CELLS_API void SetPattern(FillPattern value);
    /// <summary>
    /// Gets or sets the background <see cref="System.Drawing.Color"/> of the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackgroundColor();
    /// <summary>
    /// Gets or sets the background <see cref="System.Drawing.Color"/> of the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the foreground <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetBackgroundCellsColor();
    /// <summary>
    /// Gets and sets the foreground <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundCellsColor(const CellsColor& value);
    /// <summary>
    /// Gets or sets the foreground <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForegroundColor();
    /// <summary>
    /// Gets or sets the foreground <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the foreground <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetForegroundCellsColor();
    /// <summary>
    /// Gets and sets the foreground <see cref="CellsColor"/> object.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundCellsColor(const CellsColor& value);
    /// <summary>
    /// Gets or sets the transparency of foreground color.
    /// </summary>
    ASPOSE_CELLS_API double GetForeTransparency();
    /// <summary>
    /// Gets or sets the transparency of foreground color.
    /// </summary>
    ASPOSE_CELLS_API void SetForeTransparency(double value);
    /// <summary>
    /// Gets or sets the transparency of background color.
    /// </summary>
    ASPOSE_CELLS_API double GetBackTransparency();
    /// <summary>
    /// Gets or sets the transparency of background color.
    /// </summary>
    ASPOSE_CELLS_API void SetBackTransparency(double value);
    
};

} } }

#endif
