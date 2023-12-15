// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKDOWNSAVEOPTIONS_H
#define ASPOSE_CELLS_MARKDOWNSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/EncodingType.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CellValueFormatStrategy.h"

namespace Aspose { namespace Cells {
    class LightCellsDataProvider;
} }

namespace Aspose { namespace Cells {

class MarkdownSaveOptions_Impl;

/// <summary>
/// Represents the save options for markdown.
/// </summary>
class MarkdownSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MarkdownSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving markdown document
    /// </summary>
    ASPOSE_CELLS_API MarkdownSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MarkdownSaveOptions(MarkdownSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MarkdownSaveOptions(const MarkdownSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API MarkdownSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MarkdownSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MarkdownSaveOptions& operator=(const MarkdownSaveOptions& src);
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
    /// Gets and sets the default encoding.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetEncoding();
    /// <summary>
    /// Gets and sets the default encoding.
    /// </summary>
    ASPOSE_CELLS_API void SetEncoding(EncodingType value);
    /// <summary>
    /// Gets and sets the format strategy when exporting the cell value as string.
    /// </summary>
    ASPOSE_CELLS_API CellValueFormatStrategy GetFormatStrategy();
    /// <summary>
    /// Gets and sets the format strategy when exporting the cell value as string.
    /// </summary>
    ASPOSE_CELLS_API void SetFormatStrategy(CellValueFormatStrategy value);
    /// <summary>
    /// The Data provider to provide cells data for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataProvider* GetLightCellsDataProvider();
    /// <summary>
    /// The Data provider to provide cells data for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataProvider(LightCellsDataProvider* value);
    /// <summary>
    /// Gets and sets the line separator.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLineSeparator();
    /// <summary>
    /// Gets and sets the line separator.
    /// </summary>
    ASPOSE_CELLS_API void SetLineSeparator(const U16String& value);
    /// <summary>
    /// Gets and sets the line separator.
    /// </summary>
    ASPOSE_CELLS_API void SetLineSeparator(const char16_t* value);
    
};

} }

#endif
