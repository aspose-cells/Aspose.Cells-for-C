// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLTABLELOADOPTION_H
#define ASPOSE_CELLS_HTMLTABLELOADOPTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class HtmlTableLoadOption_Impl;

/// <summary>
/// Represents the option when import table from html.
/// </summary>
class HtmlTableLoadOption {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HtmlTableLoadOption_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API HtmlTableLoadOption();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HtmlTableLoadOption(HtmlTableLoadOption_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HtmlTableLoadOption(const HtmlTableLoadOption& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HtmlTableLoadOption();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HtmlTableLoadOption& operator=(const HtmlTableLoadOption& src);
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
    /// Get or set the index of table to import from html.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTableIndex();
    /// <summary>
    /// Get or set the index of table to import from html.
    /// </summary>
    ASPOSE_CELLS_API void SetTableIndex(int32_t value);
    /// <summary>
    /// Get or set the id of table to import from html
    /// </summary>
    ASPOSE_CELLS_API U16String GetId();
    /// <summary>
    /// Get or set the id of table to import from html
    /// </summary>
    ASPOSE_CELLS_API void SetId(const U16String& value);
    /// <summary>
    /// Get or set the id of table to import from html
    /// </summary>
    ASPOSE_CELLS_API void SetId(const char16_t* value);
    /// <summary>
    /// Get or set the name of table to import from html
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Get or set the name of table to import from html
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Get or set the name of table to import from html
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Get or set the original index of worksheet in the html.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetOriginalSheetIndex();
    /// <summary>
    /// Get or set the original index of worksheet in the html.
    /// </summary>
    ASPOSE_CELLS_API void SetOriginalSheetIndex(int32_t value);
    /// <summary>
    /// Get or set the target index of worksheet where the table is to be located.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTargetSheetIndex();
    /// <summary>
    /// Get or set the target index of worksheet where the table is to be located.
    /// </summary>
    ASPOSE_CELLS_API void SetTargetSheetIndex(int32_t value);
    
};

} }

#endif
