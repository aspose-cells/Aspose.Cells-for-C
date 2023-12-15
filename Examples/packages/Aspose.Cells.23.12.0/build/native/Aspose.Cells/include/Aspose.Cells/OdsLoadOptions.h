// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ODSLOADOPTIONS_H
#define ASPOSE_CELLS_ODSLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/LoadOptions.h"

#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {

class OdsLoadOptions_Impl;

/// <summary>
/// Represents the options of loading ods file.
/// </summary>
class OdsLoadOptions : public LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OdsLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Represents the options of loading ods file.
    /// </summary>
    ASPOSE_CELLS_API OdsLoadOptions();
    /// <summary>
    /// Represents the options of loading ods file.
    /// </summary>
    /// <param name="type">The load format type.</param>
    ASPOSE_CELLS_API explicit OdsLoadOptions(LoadFormat type);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OdsLoadOptions(OdsLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsLoadOptions(const OdsLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API OdsLoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OdsLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OdsLoadOptions& operator=(const OdsLoadOptions& src);
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
    /// Indicates whether applying the default style of the Excel to hyperlink.
    /// </summary>
    ASPOSE_CELLS_API bool GetApplyExcelDefaultStyleToHyperlink();
    /// <summary>
    /// Indicates whether applying the default style of the Excel to hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetApplyExcelDefaultStyleToHyperlink(bool value);
    /// <summary>
    /// Indicates whether refresh pivot tables when loading file.
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshPivotTables();
    /// <summary>
    /// Indicates whether refresh pivot tables when loading file.
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshPivotTables(bool value);
    
};

} }

#endif
