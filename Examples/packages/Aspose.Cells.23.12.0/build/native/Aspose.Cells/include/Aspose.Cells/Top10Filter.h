// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TOP10FILTER_H
#define ASPOSE_CELLS_TOP10FILTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"

namespace Aspose { namespace Cells {

class Top10Filter_Impl;

/// <summary>
/// Represents the top 10 filter.
/// </summary>
class Top10Filter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Top10Filter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Top10Filter(Top10Filter_Impl* impl);
    /// <summary>
    /// Constructs from an IObject convertible to this.
    /// </summary>
    ASPOSE_CELLS_API Top10Filter(const IObject* obj);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Top10Filter(const Top10Filter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Top10Filter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Top10Filter& operator=(const Top10Filter& src);
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
    /// Indicates whether it's top filter.
    /// </summary>
    ASPOSE_CELLS_API bool IsTop();
    /// <summary>
    /// Indicates whether it's top filter.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTop(bool value);
    /// <summary>
    /// Indicates whether the items is percent.
    /// </summary>
    ASPOSE_CELLS_API bool IsPercent();
    /// <summary>
    /// Indicates whether the items is percent.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPercent(bool value);
    /// <summary>
    /// Gets and sets the items of the filter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetItems();
    /// <summary>
    /// Gets and sets the items of the filter.
    /// </summary>
    ASPOSE_CELLS_API void SetItems(int32_t value);
    
};

} }

#endif
