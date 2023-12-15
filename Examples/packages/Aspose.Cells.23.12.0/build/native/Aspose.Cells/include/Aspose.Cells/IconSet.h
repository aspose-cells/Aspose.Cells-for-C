// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ICONSET_H
#define ASPOSE_CELLS_ICONSET_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/IconSetType.h"

namespace Aspose { namespace Cells {
    class ConditionalFormattingIconCollection;
    class ConditionalFormattingValueCollection;
} }

namespace Aspose { namespace Cells {

class IconSet_Impl;

/// <summary>
/// Describe the IconSet conditional formatting rule.
/// This conditional formatting rule applies icons to cells
/// according to their values.
/// </summary>
class IconSet {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    IconSet_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API IconSet(IconSet_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API IconSet(const IconSet& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~IconSet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API IconSet& operator=(const IconSet& src);
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
    /// Get the<see cref="ConditionalFormattingIcon"/> from the collection
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIconCollection GetCfIcons();
    /// <summary>
    /// Get the CFValueObjects instance.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValueCollection GetCfvos();
    /// <summary>
    /// Get or Set the icon set type to display.
    /// Setting the type will auto check if the current Cfvos's count is
    /// accord with the new type. If not accord, old Cfvos will be cleaned and
    /// default Cfvos will be added.
    /// </summary>
    ASPOSE_CELLS_API IconSetType GetType();
    /// <summary>
    /// Get or Set the icon set type to display.
    /// Setting the type will auto check if the current Cfvos's count is
    /// accord with the new type. If not accord, old Cfvos will be cleaned and
    /// default Cfvos will be added.
    /// </summary>
    ASPOSE_CELLS_API void SetType(IconSetType value);
    /// <summary>
    /// Indicates whether the icon set is custom.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsCustom();
    /// <summary>
    /// Get or set the flag indicating whether to show the values of the cells on which this icon set is applied.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowValue();
    /// <summary>
    /// Get or set the flag indicating whether to show the values of the cells on which this icon set is applied.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetShowValue(bool value);
    /// <summary>
    /// Get or set the flag indicating whether to reverses the default order of the icons in this icon set.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetReverse();
    /// <summary>
    /// Get or set the flag indicating whether to reverses the default order of the icons in this icon set.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetReverse(bool value);
    
};

} }

#endif
