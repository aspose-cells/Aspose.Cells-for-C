// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGICON_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGICON_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/IconSetType.h"

namespace Aspose { namespace Cells {
    class Cell;
} }

namespace Aspose { namespace Cells {

class ConditionalFormattingIcon_Impl;

/// <summary>
/// Represents  the custom  icon of conditional formatting rule.
/// </summary>
class ConditionalFormattingIcon {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingIcon_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIcon(ConditionalFormattingIcon_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIcon(const ConditionalFormattingIcon& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingIcon();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIcon& operator=(const ConditionalFormattingIcon& src);
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
    /// Gets the image data with the setting of cell.
    /// </summary>
    /// <param name="cell">The setting of cell.</param>
    /// <returns>Returns the image data of icon.</returns>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData(const Cell& cell);
    /// <summary>
    /// Gets the icon set data.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Gets and sets the icon set type.
    /// </summary>
    ASPOSE_CELLS_API IconSetType GetType();
    /// <summary>
    /// Gets and sets the icon set type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(IconSetType value);
    /// <summary>
    /// Gets and sets the icon's index in the icon set.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Gets and sets the icon's index in the icon set.
    /// </summary>
    ASPOSE_CELLS_API void SetIndex(int32_t value);
    /// <summary>
    /// Get the icon set data
    /// </summary>
    /// <param name="type">icon's type</param>
    /// <param name="index"> icon's index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static Vector<uint8_t> GetIconImageData(IconSetType type, int32_t index);
    
};

} }

#endif
