// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVEOPTIONS_H
#define ASPOSE_CELLS_SAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {
    class IWarningCallback;
} }

namespace Aspose { namespace Cells {

class SaveOptions_Impl;

/// <summary>
/// Represents all save options
/// </summary>
class SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SaveOptions(SaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SaveOptions& operator=(const SaveOptions& src);
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
    /// Gets the save file format.
    /// </summary>
    ASPOSE_CELLS_API SaveFormat GetSaveFormat();
    /// <summary>
    /// Make the workbook empty after saving the file.
    /// </summary>
    ASPOSE_CELLS_API bool GetClearData();
    /// <summary>
    /// Make the workbook empty after saving the file.
    /// </summary>
    ASPOSE_CELLS_API void SetClearData(bool value);
    /// <summary>
    /// The cached file folder is used to store some large data.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCachedFileFolder();
    /// <summary>
    /// The cached file folder is used to store some large data.
    /// </summary>
    ASPOSE_CELLS_API void SetCachedFileFolder(const U16String& value);
    /// <summary>
    /// The cached file folder is used to store some large data.
    /// </summary>
    ASPOSE_CELLS_API void SetCachedFileFolder(const char16_t* value);
    /// <summary>
    /// Indicates whether validate merged cells before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetValidateMergedAreas();
    /// <summary>
    /// Indicates whether validate merged cells before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetValidateMergedAreas(bool value);
    /// <summary>
    /// Indicates whether merge the areas of conditional formatting and validation before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetMergeAreas();
    /// <summary>
    /// Indicates whether merge the areas of conditional formatting and validation before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetMergeAreas(bool value);
    /// <summary>
    /// If true and the directory does not exist, the directory will be automatically created before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCreateDirectory();
    /// <summary>
    /// If true and the directory does not exist, the directory will be automatically created before saving the file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetCreateDirectory(bool value);
    /// <summary>
    /// Indicates whether sorting defined names before saving file.
    /// </summary>
    ASPOSE_CELLS_API bool GetSortNames();
    /// <summary>
    /// Indicates whether sorting defined names before saving file.
    /// </summary>
    ASPOSE_CELLS_API void SetSortNames(bool value);
    /// <summary>
    /// Indicates whether sorting external defined names before saving file.
    /// </summary>
    ASPOSE_CELLS_API bool GetSortExternalNames();
    /// <summary>
    /// Indicates whether sorting external defined names before saving file.
    /// </summary>
    ASPOSE_CELLS_API void SetSortExternalNames(bool value);
    /// <summary>
    /// Indicates whether refreshing chart cache data
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshChartCache();
    /// <summary>
    /// Indicates whether refreshing chart cache data
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshChartCache(bool value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API void SetWarningCallback(IWarningCallback* value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API IWarningCallback* GetWarningCallback();
    /// <summary>
    /// Indicates whether updating smart art setting.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// Only effects after calling Shape.GetResultOfSmartArt() method and the cached shapes exist in the template file.
    /// </remarks>
    ASPOSE_CELLS_API bool GetUpdateSmartArt();
    /// <summary>
    /// Indicates whether updating smart art setting.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// Only effects after calling Shape.GetResultOfSmartArt() method and the cached shapes exist in the template file.
    /// </remarks>
    ASPOSE_CELLS_API void SetUpdateSmartArt(bool value);
    
};

} }

#endif
