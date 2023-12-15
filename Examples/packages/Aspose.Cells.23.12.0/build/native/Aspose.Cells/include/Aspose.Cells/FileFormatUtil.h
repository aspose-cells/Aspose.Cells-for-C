// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILEFORMATUTIL_H
#define ASPOSE_CELLS_FILEFORMATUTIL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FileFormatType.h"
#include "Aspose.Cells/LoadFormat.h"
#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {
    class FileFormatInfo;
} }

namespace Aspose { namespace Cells {

class FileFormatUtil_Impl;

/// <summary>
/// Provides utility methods for converting file format enums to strings or file extensions and back.
/// </summary>
class FileFormatUtil {
public:
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a stream.
    /// </summary>
    /// <param name="stream"></param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const Vector<uint8_t>& stream);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a stream.
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const Vector<uint8_t>& stream, const U16String& password);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a stream.
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const Vector<uint8_t>& stream, const char16_t* password);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a stream.
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>Returns whether the password is corrected.</returns>
    ASPOSE_CELLS_API static bool VerifyPassword(const Vector<uint8_t>& stream, const U16String& password);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a stream.
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>Returns whether the password is corrected.</returns>
    ASPOSE_CELLS_API static bool VerifyPassword(const Vector<uint8_t>& stream, const char16_t* password);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a file.
    /// </summary>
    /// <param name="filePath">The file path.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const U16String& filePath);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a file.
    /// </summary>
    /// <param name="filePath">The file path.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const char16_t* filePath);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a file.
    /// </summary>
    /// <param name="filePath">The file path.</param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const U16String& filePath, const U16String& password);
    /// <summary>
    /// Detects and returns the information about a format of an excel stored in a file.
    /// </summary>
    /// <param name="filePath">The file path.</param>
    /// <param name="password">The password for encrypted ooxml files.</param>
    /// <returns>A <see cref="FileFormatInfo"/> object that contains the detected information.</returns>
    ASPOSE_CELLS_API static FileFormatInfo DetectFileFormat(const char16_t* filePath, const char16_t* password);
    /// <summary>
    /// Converting file format to save format.
    /// </summary>
    /// <param name="format">The file format type.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static SaveFormat FileFormatToSaveFormat(FileFormatType format);
    /// <summary>
    /// Converts a file name extension into a SaveFormat value.
    /// </summary>
    /// <param name="extension">The file extension. Can be with or without a leading dot. Case-insensitive.</param>
    /// <returns></returns>
    /// <remarks>If the extension cannot be recognized, returns <see cref="SaveFormat.Unknown"/>.</remarks>
    ASPOSE_CELLS_API static SaveFormat ExtensionToSaveFormat(const U16String& extension);
    /// <summary>
    /// Converts a file name extension into a SaveFormat value.
    /// </summary>
    /// <param name="extension">The file extension. Can be with or without a leading dot. Case-insensitive.</param>
    /// <returns></returns>
    /// <remarks>If the extension cannot be recognized, returns <see cref="SaveFormat.Unknown"/>.</remarks>
    ASPOSE_CELLS_API static SaveFormat ExtensionToSaveFormat(const char16_t* extension);
    /// <summary>
    /// Returns true if the extension is .xlt, .xltX, .xltm,.ots.
    /// </summary>
    /// <param name="extension"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API static bool IsTemplateFormat(const U16String& extension);
    /// <summary>
    /// Returns true if the extension is .xlt, .xltX, .xltm,.ots.
    /// </summary>
    /// <param name="extension"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API static bool IsTemplateFormat(const char16_t* extension);
    /// <summary>
    /// Converts a load format enumerated value into a file extension.
    /// </summary>
    /// <param name="loadFormat">The loaded file format.</param>
    /// <returns> The returned extension is a lower-case string with a leading dot.</returns>
    /// <remarks>If it can not be converted, returns null.</remarks>
    ASPOSE_CELLS_API static U16String LoadFormatToExtension(LoadFormat loadFormat);
    /// <summary>
    /// Converts a LoadFormat value to a SaveFormat value if possible.
    /// </summary>
    /// <param name="loadFormat">The load format.</param>
    /// <returns>The save format.</returns>
    ASPOSE_CELLS_API static SaveFormat LoadFormatToSaveFormat(LoadFormat loadFormat);
    /// <summary>
    /// Converts a save format enumerated value into a file extension.
    /// </summary>
    /// <param name="format">The save format.</param>
    /// <returns>The returned extension is a lower-case string with a leading dot. </returns>
    ASPOSE_CELLS_API static U16String SaveFormatToExtension(SaveFormat format);
    /// <summary>
    /// Converts a SaveFormat value to a LoadFormat value if possible.
    /// </summary>
    /// <param name="saveFormat">The save format.</param>
    /// <returns>The load format</returns>
    ASPOSE_CELLS_API static LoadFormat SaveFormatToLoadFormat(SaveFormat saveFormat);
    
};

} }

#endif
