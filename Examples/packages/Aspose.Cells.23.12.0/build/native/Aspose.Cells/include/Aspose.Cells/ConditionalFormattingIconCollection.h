// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGICONCOLLECTION_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGICONCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/IconSetType.h"

namespace Aspose { namespace Cells {
    class ConditionalFormattingIcon;
} }

namespace Aspose { namespace Cells {

class ConditionalFormattingIconCollection_Impl;

/// <summary>
/// Represents  a collection of <see cref="ConditionalFormattingIcon"/> objects.
/// </summary>
class ConditionalFormattingIconCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingIconCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIconCollection(ConditionalFormattingIconCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIconCollection(const ConditionalFormattingIconCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingIconCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIconCollection& operator=(const ConditionalFormattingIconCollection& src);
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
    /// Gets the ConditionalFormattingIcon element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ConditionalFormattingIcon Get(int32_t index);
    /// <summary>
    /// Adds <see cref="ConditionalFormattingIcon"/> object.
    /// </summary>
    /// <param name="type">The value type.</param>
    /// <param name="index">The Index.</param>
    /// <returns>Returns the index of new object in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(IconSetType type, int32_t index);
    /// <summary>
    /// Adds <see cref="ConditionalFormattingIcon"/> object.
    /// </summary>
    /// <param name="cficon">Returns the index of new object in the list.</param>
    ASPOSE_CELLS_API int32_t Add(const ConditionalFormattingIcon& cficon);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
