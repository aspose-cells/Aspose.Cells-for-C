// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICERCACHECROSSFILTERTYPE_H
#define ASPOSE_CELLS_SLICERS_SLICERCACHECROSSFILTERTYPE_H

namespace Aspose { namespace Cells { namespace Slicers {

/// <summary>
/// Represent the type of SlicerCacheCrossFilterType
/// </summary>
enum class SlicerCacheCrossFilterType {
    /// <summary>
    /// The table style element of the slicer style for slicer items
    /// with no data is not applied to slicer items with no data, and slicer items
    /// with no data are not sorted separately in the list of slicer items in the slicer view
    /// </summary>
    None,
    /// <summary>
    /// The table style element of the slicer style for slicer items with
    /// no data is applied to slicer items with no data, and slicer items
    /// with no data are sorted at the bottom in the list of slicer items in the slicer view
    /// </summary>
    ShowItemsWithDataAtTop,
    /// <summary>
    /// The table style element of the slicer style for slicer items with no data
    /// is applied to slicer items with no data, and slicer items with no data
    /// are not sorted separately in the list of slicer items in the slicer view.
    /// </summary>
    ShowItemsWithNoData,
};

} } }

#endif
