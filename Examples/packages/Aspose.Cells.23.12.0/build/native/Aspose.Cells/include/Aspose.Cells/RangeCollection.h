// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RANGECOLLECTION_H
#define ASPOSE_CELLS_RANGECOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Range;
} }

namespace Aspose { namespace Cells {

class RangeCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Range"/> objects.
/// </summary>
class RangeCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RangeCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RangeCollection(RangeCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RangeCollection(const RangeCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RangeCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RangeCollection& operator=(const RangeCollection& src);
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
    /// Gets the <see cref="Range"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Range Get(int32_t index);
    /// <summary>
    /// Adds a <see cref="Range"/> item to the collection.
    /// </summary>
    /// <param name="range">Range object</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const Range& range);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
