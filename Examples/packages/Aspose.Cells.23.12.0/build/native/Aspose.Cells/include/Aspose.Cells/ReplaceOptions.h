// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REPLACEOPTIONS_H
#define ASPOSE_CELLS_REPLACEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class FontSetting;
} }

namespace Aspose { namespace Cells {

class ReplaceOptions_Impl;

/// <summary>
/// Represent the replace options.
/// </summary>
class ReplaceOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ReplaceOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ReplaceOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ReplaceOptions(ReplaceOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ReplaceOptions(const ReplaceOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ReplaceOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ReplaceOptions& operator=(const ReplaceOptions& src);
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
    /// Indicates whether to match entire cells contents
    /// </summary>
    ASPOSE_CELLS_API bool GetMatchEntireCellContents();
    /// <summary>
    /// Indicates whether to match entire cells contents
    /// </summary>
    ASPOSE_CELLS_API void SetMatchEntireCellContents(bool value);
    /// <summary>
    /// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
    /// </summary>
    ASPOSE_CELLS_API bool GetRegexKey();
    /// <summary>
    /// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
    /// </summary>
    ASPOSE_CELLS_API void SetRegexKey(bool value);
    /// <summary>
    /// The rich formatted settings for the replaced text.
    /// </summary>
    ASPOSE_CELLS_API Vector<FontSetting> GetFontSettings();
    /// <summary>
    /// The rich formatted settings for the replaced text.
    /// </summary>
    ASPOSE_CELLS_API void SetFontSettings(const Vector<FontSetting>& value);
    
};

} }

#endif
