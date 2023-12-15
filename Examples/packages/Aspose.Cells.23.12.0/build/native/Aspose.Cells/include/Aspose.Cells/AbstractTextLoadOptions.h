// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ABSTRACTTEXTLOADOPTIONS_H
#define ASPOSE_CELLS_ABSTRACTTEXTLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/LoadOptions.h"
#include "Aspose.Cells/EncodingType.h"

#include "Aspose.Cells/TxtLoadStyleStrategy.h"

namespace Aspose { namespace Cells {

class AbstractTextLoadOptions_Impl;

/// <summary>
/// Common options for loading text values
/// </summary>
class AbstractTextLoadOptions : public LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AbstractTextLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AbstractTextLoadOptions(AbstractTextLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AbstractTextLoadOptions(const AbstractTextLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API AbstractTextLoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AbstractTextLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AbstractTextLoadOptions& operator=(const AbstractTextLoadOptions& src);
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
    /// Gets and sets the default encoding. Only applies for csv file.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetEncoding();
    /// <summary>
    /// Gets and sets the default encoding. Only applies for csv file.
    /// </summary>
    ASPOSE_CELLS_API void SetEncoding(EncodingType value);
    /// <summary>
    /// Indicates the strategy to apply style for parsed values when converting string value to number or datetime.
    /// </summary>
    ASPOSE_CELLS_API TxtLoadStyleStrategy GetLoadStyleStrategy();
    /// <summary>
    /// Indicates the strategy to apply style for parsed values when converting string value to number or datetime.
    /// </summary>
    ASPOSE_CELLS_API void SetLoadStyleStrategy(TxtLoadStyleStrategy value);
    /// <summary>
    /// Gets or sets a value that indicates whether the string in text file is converted to numeric data.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertNumericData();
    /// <summary>
    /// Gets or sets a value that indicates whether the string in text file is converted to numeric data.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertNumericData(bool value);
    /// <summary>
    /// Gets or sets a value that indicates whether the string in text file is converted to date data.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertDateTimeData();
    /// <summary>
    /// Gets or sets a value that indicates whether the string in text file is converted to date data.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertDateTimeData(bool value);
    /// <summary>
    /// Indicates whether not parsing a string value if the length is 15.
    /// </summary>
    ASPOSE_CELLS_API bool GetKeepPrecision();
    /// <summary>
    /// Indicates whether not parsing a string value if the length is 15.
    /// </summary>
    ASPOSE_CELLS_API void SetKeepPrecision(bool value);
    
};

} }

#endif
