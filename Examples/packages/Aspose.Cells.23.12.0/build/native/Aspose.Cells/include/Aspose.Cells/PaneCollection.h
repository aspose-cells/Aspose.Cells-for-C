// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PANECOLLECTION_H
#define ASPOSE_CELLS_PANECOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/RectangleAlignmentType.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;

class PaneCollection_Impl;

/// <summary>
/// Represents all Pane objects shown in the specified window.
/// </summary>
class PaneCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PaneCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PaneCollection(PaneCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PaneCollection(const PaneCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PaneCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PaneCollection& operator=(const PaneCollection& src);
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
    /// Gets and sets the first visible row of the bottom pane.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstVisibleRowOfBottomPane();
    /// <summary>
    /// Gets and sets the first visible row of the bottom pane.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstVisibleRowOfBottomPane(int32_t value);
    /// <summary>
    /// Gets and sets the first visible column of the right pane.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstVisibleColumnOfRightPane();
    /// <summary>
    /// Gets and sets the first visible column of the right pane.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstVisibleColumnOfRightPane(int32_t value);
    /// <summary>
    /// Gets and sets the active pane.
    /// </summary>
    ASPOSE_CELLS_API RectangleAlignmentType GetAcitvePaneType();
    /// <summary>
    /// Gets and sets the active pane.
    /// </summary>
    ASPOSE_CELLS_API void SetAcitvePaneType(RectangleAlignmentType value);
    
};

} }

#endif
