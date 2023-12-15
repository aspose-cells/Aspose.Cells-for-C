// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_INDIVIDUALFONTCONFIGS_H
#define ASPOSE_CELLS_INDIVIDUALFONTCONFIGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class FontSourceBase;
} }

namespace Aspose { namespace Cells {

class IndividualFontConfigs_Impl;

/// <summary>
/// Font configs for each <see cref="Workbook"/> object.
/// </summary>
class IndividualFontConfigs {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    IndividualFontConfigs_Impl* _impl;
    
public:
    /// <summary>
    /// Ctor.
    /// </summary>
    ASPOSE_CELLS_API IndividualFontConfigs();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API IndividualFontConfigs(IndividualFontConfigs_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API IndividualFontConfigs(const IndividualFontConfigs& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~IndividualFontConfigs();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API IndividualFontConfigs& operator=(const IndividualFontConfigs& src);
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
    /// Font substitute names for given original font name.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substituteFontNames">List of font substitute names to be used if original font is not presented.</param>
    ASPOSE_CELLS_API void SetFontSubstitutes(const U16String& originalFontName, const Vector<U16String>& substituteFontNames);
    /// <summary>
    /// Font substitute names for given original font name.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substituteFontNames">List of font substitute names to be used if original font is not presented.</param>
    ASPOSE_CELLS_API void SetFontSubstitutes(const char16_t* originalFontName, const Vector<U16String>& substituteFontNames);
    /// <summary>
    /// Returns array containing font substitute names to be used if original font is not presented.
    /// </summary>
    /// <param name="originalFontName">originalFontName</param>
    /// <returns>An array containing font substitute names to be used if original font is not presented.</returns>
    ASPOSE_CELLS_API Vector<U16String> GetFontSubstitutes(const U16String& originalFontName);
    /// <summary>
    /// Returns array containing font substitute names to be used if original font is not presented.
    /// </summary>
    /// <param name="originalFontName">originalFontName</param>
    /// <returns>An array containing font substitute names to be used if original font is not presented.</returns>
    ASPOSE_CELLS_API Vector<U16String> GetFontSubstitutes(const char16_t* originalFontName);
    /// <summary>
    /// Sets the fonts folder
    /// </summary>
    /// <param name="fontFolder">The folder that contains TrueType fonts.</param>
    /// <param name="recursive">Determines whether or not to scan subfolders.</param>
    ASPOSE_CELLS_API void SetFontFolder(const U16String& fontFolder, bool recursive);
    /// <summary>
    /// Sets the fonts folder
    /// </summary>
    /// <param name="fontFolder">The folder that contains TrueType fonts.</param>
    /// <param name="recursive">Determines whether or not to scan subfolders.</param>
    ASPOSE_CELLS_API void SetFontFolder(const char16_t* fontFolder, bool recursive);
    /// <summary>
    /// Sets the fonts folders
    /// </summary>
    /// <param name="fontFolders">The folders that contains TrueType fonts.</param>
    /// <param name="recursive">Determines whether or not to scan subfolders.</param>
    ASPOSE_CELLS_API void SetFontFolders(const Vector<U16String>& fontFolders, bool recursive);
    /// <summary>
    /// Sets the fonts sources.
    /// </summary>
    /// <param name="sources">An array of sources that contain TrueType fonts.</param>
    ASPOSE_CELLS_API void SetFontSources(const Vector<FontSourceBase>& sources);
    /// <summary>
    /// Gets a copy of the array that contains the list of sources
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Vector<FontSourceBase> GetFontSources();
    
};

} }

#endif
