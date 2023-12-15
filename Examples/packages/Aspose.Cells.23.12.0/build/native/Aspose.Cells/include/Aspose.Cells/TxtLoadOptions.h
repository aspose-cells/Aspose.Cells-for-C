// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TXTLOADOPTIONS_H
#define ASPOSE_CELLS_TXTLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/AbstractTextLoadOptions.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {

class TxtLoadOptions_Impl;

/// <summary>
/// Represents the options for loading text file.
/// </summary>
class TxtLoadOptions : public AbstractTextLoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TxtLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for loading text file.
    /// </summary>
    /// <remarks>The default load file type is CSV .</remarks>
    ASPOSE_CELLS_API TxtLoadOptions();
    /// <summary>
    /// Creates the options for loading text file.
    /// </summary>
    /// <param name="loadFormat">The loading format</param>
    ASPOSE_CELLS_API explicit TxtLoadOptions(LoadFormat loadFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TxtLoadOptions(TxtLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TxtLoadOptions(const TxtLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TxtLoadOptions(const AbstractTextLoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TxtLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TxtLoadOptions& operator=(const TxtLoadOptions& src);
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
    /// Gets and sets character separator of text file.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetSeparator();
    /// <summary>
    /// Gets and sets character separator of text file.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparator(char16_t value);
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSeparatorString();
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorString(const U16String& value);
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorString(const char16_t* value);
    /// <summary>
    /// True means that the file contains several encoding.
    /// </summary>
    ASPOSE_CELLS_API bool IsMultiEncoded();
    /// <summary>
    /// True means that the file contains several encoding.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMultiEncoded(bool value);
    /// <summary>
    /// Indicates whether the text is formula if it starts with "=".
    /// </summary>
    ASPOSE_CELLS_API bool GetHasFormula();
    /// <summary>
    /// Indicates whether the text is formula if it starts with "=".
    /// </summary>
    ASPOSE_CELLS_API void SetHasFormula(bool value);
    /// <summary>
    /// Whether there is text qualifier for cell value. Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasTextQualifier();
    /// <summary>
    /// Whether there is text qualifier for cell value. Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetHasTextQualifier(bool value);
    /// <summary>
    /// Specifies the text qualifier for cell values. Default qualifier is '"'.
    /// </summary>
    /// <remarks>When setting this property, <see cref="HasTextQualifier"/> will become true automatically.</remarks>
    ASPOSE_CELLS_API char16_t GetTextQualifier();
    /// <summary>
    /// Specifies the text qualifier for cell values. Default qualifier is '"'.
    /// </summary>
    /// <remarks>When setting this property, <see cref="HasTextQualifier"/> will become true automatically.</remarks>
    ASPOSE_CELLS_API void SetTextQualifier(char16_t value);
    /// <summary>
    /// Whether consecutive delimiters should be treated as one.
    /// </summary>
    ASPOSE_CELLS_API bool GetTreatConsecutiveDelimitersAsOne();
    /// <summary>
    /// Whether consecutive delimiters should be treated as one.
    /// </summary>
    ASPOSE_CELLS_API void SetTreatConsecutiveDelimitersAsOne(bool value);
    /// <summary>
    /// Indicates whether the leading single quote sign should be taken as part of the value of one cell.
    /// Default is true. If it is false, the leading single quote will be removed from corresponding cell's value
    /// and <see cref="Style.QuotePrefix"/> will be set as true for the cell.
    /// </summary>
    ASPOSE_CELLS_API bool GetTreatQuotePrefixAsValue();
    /// <summary>
    /// Indicates whether the leading single quote sign should be taken as part of the value of one cell.
    /// Default is true. If it is false, the leading single quote will be removed from corresponding cell's value
    /// and <see cref="Style.QuotePrefix"/> will be set as true for the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetTreatQuotePrefixAsValue(bool value);
    /// <summary>
    /// Whether extends data to next sheet when the rows or columns of data exceed limit.
    /// If this property is true, extra data will be extended to next sheet behind current one(if current sheet is the last one,
    /// new sheet will be appended to current workbook).
    /// If this property is false, the data exceeds limit will be ignored.
    /// Default is false;
    /// </summary>
    ASPOSE_CELLS_API bool GetExtendToNextSheet();
    /// <summary>
    /// Whether extends data to next sheet when the rows or columns of data exceed limit.
    /// If this property is true, extra data will be extended to next sheet behind current one(if current sheet is the last one,
    /// new sheet will be appended to current workbook).
    /// If this property is false, the data exceeds limit will be ignored.
    /// Default is false;
    /// </summary>
    ASPOSE_CELLS_API void SetExtendToNextSheet(bool value);
    
};

} }

#endif
