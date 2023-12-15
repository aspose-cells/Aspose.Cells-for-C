// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_TICKLABELITEM_H
#define ASPOSE_CELLS_CHARTS_TICKLABELITEM_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Charts {

class TickLabelItem_Impl;

/// <summary>
/// Include information of a Ticklabel item
/// </summary>
class ASPOSE_CELLS_API2 TickLabelItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TickLabelItem_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TickLabelItem(TickLabelItem_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TickLabelItem(const TickLabelItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TickLabelItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TickLabelItem& operator=(const TickLabelItem& src);
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
    /// X coordinates of Ticklabel item in ratio of chart width.
    /// </summary>
    ASPOSE_CELLS_API double GetX();
    /// <summary>
    /// Y coordinates of Ticklabel item in ratio of chart height.
    /// </summary>
    ASPOSE_CELLS_API double GetY();
    /// <summary>
    /// Width of Ticklabel item in ratio of chart width.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Height of Ticklabel item in ratio of chart height.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    
};

} } }

#endif
