// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EBOOKLOADOPTIONS_H
#define ASPOSE_CELLS_EBOOKLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/HtmlLoadOptions.h"

#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {

class EbookLoadOptions_Impl;

/// <summary>
/// Represents options when importing an ebook file.
/// </summary>
class EbookLoadOptions : public HtmlLoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    EbookLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates an options of loading the ebook file.
    /// </summary>
    ASPOSE_CELLS_API EbookLoadOptions();
    /// <summary>
    /// Creates an options of loading the ebook file.
    /// </summary>
    /// <param name="loadFormat">The loading format</param>
    ASPOSE_CELLS_API explicit EbookLoadOptions(LoadFormat loadFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API EbookLoadOptions(EbookLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API EbookLoadOptions(const EbookLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API EbookLoadOptions(const HtmlLoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~EbookLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API EbookLoadOptions& operator=(const EbookLoadOptions& src);
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

} }

#endif
