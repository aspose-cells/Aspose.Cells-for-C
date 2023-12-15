// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGVALUECOLLECTION_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGVALUECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FormatConditionValueType.h"

namespace Aspose { namespace Cells {
    class ConditionalFormattingValue;
} }

namespace Aspose { namespace Cells {

class ConditionalFormattingValueCollection_Impl;

/// <summary>
/// Describes a collection of CFValueObject.
/// Use only for icon sets.
/// </summary>
class ConditionalFormattingValueCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingValueCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValueCollection(ConditionalFormattingValueCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValueCollection(const ConditionalFormattingValueCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingValueCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValueCollection& operator=(const ConditionalFormattingValueCollection& src);
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
    /// Get the CFValueObject element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ConditionalFormattingValue Get(int32_t index);
    /// <summary>
    /// Adds <see cref="ConditionalFormattingValue"/> object.
    /// </summary>
    /// <param name="type">The value type.</param>
    /// <param name="value">The value.</param>
    /// <returns>Returns the index of new object in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(FormatConditionValueType type, const U16String& value);
    /// <summary>
    /// Adds <see cref="ConditionalFormattingValue"/> object.
    /// </summary>
    /// <param name="type">The value type.</param>
    /// <param name="value">The value.</param>
    /// <returns>Returns the index of new object in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(FormatConditionValueType type, const char16_t* value);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
