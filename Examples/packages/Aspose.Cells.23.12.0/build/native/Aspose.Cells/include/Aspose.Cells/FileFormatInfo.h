// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILEFORMATINFO_H
#define ASPOSE_CELLS_FILEFORMATINFO_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/FileFormatType.h"
#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {

class FileFormatInfo_Impl;

/// <summary>
/// Contains data returned by <see cref="FileFormatUtil"/> file format detection methods.
/// </summary>
class FileFormatInfo {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FileFormatInfo_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API FileFormatInfo();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FileFormatInfo(FileFormatInfo_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FileFormatInfo(const FileFormatInfo& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FileFormatInfo();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FileFormatInfo& operator=(const FileFormatInfo& src);
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
    /// Gets whether the file is protected by Microsoft Rights Management Server.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtectedByRMS();
    /// <summary>
    /// Returns true if the document is encrypted and requires a password to open.
    /// </summary>
    ASPOSE_CELLS_API bool IsEncrypted();
    /// <summary>
    /// Gets the detected file format.
    /// </summary>
    ASPOSE_CELLS_API FileFormatType GetFileFormatType();
    /// <summary>
    /// Gets the detected load format.
    /// </summary>
    ASPOSE_CELLS_API LoadFormat GetLoadFormat();
    
};

} }

#endif
