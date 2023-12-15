// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FOLDERFONTSOURCE_H
#define ASPOSE_CELLS_FOLDERFONTSOURCE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FontSourceBase.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FontSourceType.h"

namespace Aspose { namespace Cells {

class FolderFontSource_Impl;

/// <summary>
/// Represents the folder that contains TrueType font files.
/// </summary>
class FolderFontSource : public FontSourceBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FolderFontSource_Impl* _impl;
    
public:
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="folderPath">path to fonts folder</param>
    /// <param name="scanSubfolders">Determines whether or not to scan subfolders.</param>
    ASPOSE_CELLS_API FolderFontSource(const U16String& folderPath, bool scanSubfolders);
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="folderPath">path to fonts folder</param>
    /// <param name="scanSubfolders">Determines whether or not to scan subfolders.</param>
    ASPOSE_CELLS_API FolderFontSource(const char16_t* folderPath, bool scanSubfolders);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FolderFontSource(FolderFontSource_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FolderFontSource(const FolderFontSource& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API FolderFontSource(const FontSourceBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FolderFontSource();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FolderFontSource& operator=(const FolderFontSource& src);
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
    /// Path to fonts folder.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFolderPath();
    /// <summary>
    /// Determines whether or not to scan the subfolders.
    /// </summary>
    ASPOSE_CELLS_API bool GetScanSubFolders();
    /// <summary>
    /// Returns the type of the font source.
    /// </summary>
    ASPOSE_CELLS_API FontSourceType GetType();
    
};

} }

#endif
