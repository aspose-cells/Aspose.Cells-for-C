// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILEFONTSOURCE_H
#define ASPOSE_CELLS_FILEFONTSOURCE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FontSourceBase.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FontSourceType.h"

namespace Aspose { namespace Cells {

class FileFontSource_Impl;

/// <summary>
/// Represents the single TrueType font file stored in the file system.
/// </summary>
class FileFontSource : public FontSourceBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FileFontSource_Impl* _impl;
    
public:
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="filePath">path to font file</param>
    ASPOSE_CELLS_API explicit FileFontSource(const U16String& filePath);
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="filePath">path to font file</param>
    ASPOSE_CELLS_API explicit FileFontSource(const char16_t* filePath);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FileFontSource(FileFontSource_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FileFontSource(const FileFontSource& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API FileFontSource(const FontSourceBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FileFontSource();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FileFontSource& operator=(const FileFontSource& src);
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
    /// Path to font file.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFilePath();
    /// <summary>
    /// Returns the type of the font source.
    /// </summary>
    ASPOSE_CELLS_API FontSourceType GetType();
    
};

} }

#endif
