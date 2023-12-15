// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_LEGENDENTRYCOLLECTION_H
#define ASPOSE_CELLS_CHARTS_LEGENDENTRYCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Charts {
    class LegendEntry;
} } }

namespace Aspose { namespace Cells { namespace Charts {

class LegendEntryCollection_Impl;

/// <summary>
/// Represents a collection of all the <see cref="LegendEntry"/> objects in the specified chart legend.
/// </summary>
class LegendEntryCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    LegendEntryCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API LegendEntryCollection(LegendEntryCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API LegendEntryCollection(const LegendEntryCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~LegendEntryCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API LegendEntryCollection& operator=(const LegendEntryCollection& src);
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
    /// Gets the <see cref="LegendEntry"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API LegendEntry Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
