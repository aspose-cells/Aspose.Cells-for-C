// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WRITEPROTECTION_H
#define ASPOSE_CELLS_WRITEPROTECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class WriteProtection_Impl;

/// <summary>
/// Specifies write protection settings for a workbook.
/// </summary>
class WriteProtection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WriteProtection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API WriteProtection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WriteProtection(WriteProtection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WriteProtection(const WriteProtection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WriteProtection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WriteProtection& operator=(const WriteProtection& src);
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
    /// Gets and sets the author.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAuthor();
    /// <summary>
    /// Gets and sets the author.
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const U16String& value);
    /// <summary>
    /// Gets and sets the author.
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const char16_t* value);
    /// <summary>
    /// Indicates if the Read Only Recommended option is selected.
    /// </summary>
    ASPOSE_CELLS_API bool GetRecommendReadOnly();
    /// <summary>
    /// Indicates if the Read Only Recommended option is selected.
    /// </summary>
    ASPOSE_CELLS_API void SetRecommendReadOnly(bool value);
    /// <summary>
    /// Indicates whether this workbook is write protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsWriteProtected();
    /// <summary>
    /// Sets the protected password to modify the file.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Sets the protected password to modify the file.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// Returns true if the specified password is the same as the write-protection password the file was protected with.
    /// </summary>
    /// <param name="password">The specified password.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool ValidatePassword(const U16String& password);
    /// <summary>
    /// Returns true if the specified password is the same as the write-protection password the file was protected with.
    /// </summary>
    /// <param name="password">The specified password.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool ValidatePassword(const char16_t* password);
    
};

} }

#endif
