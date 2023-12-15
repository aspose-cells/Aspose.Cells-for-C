// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FINDOPTIONS_H
#define ASPOSE_CELLS_FINDOPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/LookAtType.h"
#include "Aspose.Cells/LookInType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class Style;
} }

namespace Aspose { namespace Cells {

class FindOptions_Impl;

/// <summary>
/// Represents find options.
/// </summary>
class FindOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FindOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API FindOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FindOptions(FindOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FindOptions(const FindOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FindOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FindOptions& operator=(const FindOptions& src);
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
    /// Indicates if the searched string is case sensitive.
    /// </summary>
    ASPOSE_CELLS_API bool GetCaseSensitive();
    /// <summary>
    /// Indicates if the searched string is case sensitive.
    /// </summary>
    ASPOSE_CELLS_API void SetCaseSensitive(bool value);
    /// <summary>
    /// Look at type.
    /// </summary>
    ASPOSE_CELLS_API LookAtType GetLookAtType();
    /// <summary>
    /// Look at type.
    /// </summary>
    ASPOSE_CELLS_API void SetLookAtType(LookAtType value);
    /// <summary>
    /// Gets and sets the searched range.
    /// </summary>
    /// <returns>
    /// Returns the searched range.
    /// </returns>
    ASPOSE_CELLS_API CellArea GetRange();
    /// <summary>
    /// Sets the searched range.
    /// </summary>
    /// <param name="ca">the searched range.</param>
    ASPOSE_CELLS_API void SetRange(const CellArea& ca);
    /// <summary>
    /// Indicates whether the searched range is set.
    /// </summary>
    ASPOSE_CELLS_API bool IsRangeSet();
    /// <summary>
    /// Whether search backward for cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetSearchBackward();
    /// <summary>
    /// Whether search backward for cells.
    /// </summary>
    ASPOSE_CELLS_API void SetSearchBackward(bool value);
    /// <summary>
    /// Indicates whether search order by rows or columns.
    /// </summary>
    ASPOSE_CELLS_API bool GetSeachOrderByRows();
    /// <summary>
    /// Indicates whether search order by rows or columns.
    /// </summary>
    ASPOSE_CELLS_API void SetSeachOrderByRows(bool value);
    /// <summary>
    /// Look in type.
    /// </summary>
    ASPOSE_CELLS_API LookInType GetLookInType();
    /// <summary>
    /// Look in type.
    /// </summary>
    ASPOSE_CELLS_API void SetLookInType(LookInType value);
    /// <summary>
    /// Indicates whether the searched key is regex.
    /// If true the searched key will be taken as regex and parsed. Otherwise the key will be parsed according to the rules in ms excel.
    /// </summary>
    ASPOSE_CELLS_API bool GetRegexKey();
    /// <summary>
    /// Indicates whether the searched key is regex.
    /// If true the searched key will be taken as regex and parsed. Otherwise the key will be parsed according to the rules in ms excel.
    /// </summary>
    ASPOSE_CELLS_API void SetRegexKey(bool value);
    /// <summary>
    /// Indicates whether searched cell value type should be same with the searched key.
    /// </summary>
    ASPOSE_CELLS_API bool GetValueTypeSensitive();
    /// <summary>
    /// Indicates whether searched cell value type should be same with the searched key.
    /// </summary>
    ASPOSE_CELLS_API void SetValueTypeSensitive(bool value);
    /// <summary>
    /// The format to search for.
    /// </summary>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// The format to search for.
    /// </summary>
    ASPOSE_CELLS_API void SetStyle(const Style& value);
    /// <summary>
    /// Gets or sets a value that indicates whether converting the searched string value to numeric data.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertNumericData();
    /// <summary>
    /// Gets or sets a value that indicates whether converting the searched string value to numeric data.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertNumericData(bool value);
    
};

} }

#endif
