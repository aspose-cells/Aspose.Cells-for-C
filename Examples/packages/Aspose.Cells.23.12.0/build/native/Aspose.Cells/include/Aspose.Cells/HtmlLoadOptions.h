// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLLOADOPTIONS_H
#define ASPOSE_CELLS_HTMLLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/AbstractTextLoadOptions.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {
    class HtmlTableLoadOptionCollection;
} }

namespace Aspose { namespace Cells {

class HtmlLoadOptions_Impl;

/// <summary>
/// Represents options when importing a html file.
/// </summary>
class HtmlLoadOptions : public AbstractTextLoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HtmlLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates an options of loading the file.
    /// </summary>
    ASPOSE_CELLS_API HtmlLoadOptions();
    /// <summary>
    /// Creates an options of loading the file.
    /// </summary>
    /// <param name="loadFormat">The loading format.</param>
    ASPOSE_CELLS_API explicit HtmlLoadOptions(LoadFormat loadFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HtmlLoadOptions(HtmlLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HtmlLoadOptions(const HtmlLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API HtmlLoadOptions(const AbstractTextLoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HtmlLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HtmlLoadOptions& operator=(const HtmlLoadOptions& src);
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
    /// Indicates whether importing formulas if the original html file contains formulas
    /// </summary>
    ASPOSE_CELLS_API bool GetLoadFormulas();
    /// <summary>
    /// Indicates whether importing formulas if the original html file contains formulas
    /// </summary>
    ASPOSE_CELLS_API void SetLoadFormulas(bool value);
    /// <summary>
    /// Indicates whether support the layout of <c>&lt;div&gt;</c> tag when the html file contains it.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetSupportDivTag();
    /// <summary>
    /// Indicates whether support the layout of <c>&lt;div&gt;</c> tag when the html file contains it.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetSupportDivTag(bool value);
    /// <summary>
    /// Indicates whether delete redundant spaces when the text wraps lines using <c>&lt;br&gt;</c> tag.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetDeleteRedundantSpaces();
    /// <summary>
    /// Indicates whether delete redundant spaces when the text wraps lines using <c>&lt;br&gt;</c> tag.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetDeleteRedundantSpaces(bool value);
    /// <summary>
    /// Indicates whether auto-fit columns and rows. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoFitColsAndRows();
    /// <summary>
    /// Indicates whether auto-fit columns and rows. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoFitColsAndRows(bool value);
    /// <summary>
    /// Indicates whether the text is formula if it starts with "=".
    /// </summary>
    ASPOSE_CELLS_API bool GetHasFormula();
    /// <summary>
    /// Indicates whether the text is formula if it starts with "=".
    /// </summary>
    ASPOSE_CELLS_API void SetHasFormula(bool value);
    /// <summary>
    /// Gets the program id of creating the file.
    /// Only for MHT files.
    /// </summary>
    ASPOSE_CELLS_API U16String GetProgId();
    /// <summary>
    /// Get the HtmlTableLoadOptionCollection instance
    /// </summary>
    ASPOSE_CELLS_API HtmlTableLoadOptionCollection GetTableLoadOptions();
    
};

} }

#endif
