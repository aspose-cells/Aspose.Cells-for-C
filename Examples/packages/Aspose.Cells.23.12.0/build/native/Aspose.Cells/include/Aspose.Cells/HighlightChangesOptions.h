// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_HIGHLIGHTCHANGESOPTIONS_H
#define ASPOSE_CELLS_REVISIONS_HIGHLIGHTCHANGESOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Revisions {

class HighlightChangesOptions_Impl;

/// <summary>
/// Represents options of highlighting revsions or changes of shared Excel files.
/// </summary>
class HighlightChangesOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HighlightChangesOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Represents options of highlighting revsions or changes of shared Excel files.
    /// </summary>
    /// <param name="highlightOnScreen">
    /// Indicates whether highlighting changes on screen.
    /// </param>
    /// <param name="listOnNewSheet">
    /// Indicates whether listing changes on a new worksheet.
    /// </param>
    ASPOSE_CELLS_API HighlightChangesOptions(bool highlightOnScreen, bool listOnNewSheet);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HighlightChangesOptions(HighlightChangesOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HighlightChangesOptions(const HighlightChangesOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HighlightChangesOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HighlightChangesOptions& operator=(const HighlightChangesOptions& src);
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
    
};

} } }

#endif
