// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_OOXMLSAVEOPTIONS_H
#define ASPOSE_CELLS_OOXMLSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

#include "Aspose.Cells/OoxmlCompressionType.h"
#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {
    class LightCellsDataProvider;
} }

namespace Aspose { namespace Cells {

class OoxmlSaveOptions_Impl;

/// <summary>
/// Represents the options of saving office open xml file.
/// </summary>
class OoxmlSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OoxmlSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving office open xml file.
    /// </summary>
    ASPOSE_CELLS_API OoxmlSaveOptions();
    /// <summary>
    /// Creates the options for saving office open xml file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be one of following types: <see cref="SaveFormat.Xlsx"/>, <see cref="SaveFormat.Xltx"/>,
    /// <see cref="SaveFormat.Xlam"/>, <see cref="SaveFormat.Xlsm"/> or <see cref="SaveFormat.Xltm"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Xlsx"/> automatically.</param>
    ASPOSE_CELLS_API explicit OoxmlSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OoxmlSaveOptions(OoxmlSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OoxmlSaveOptions(const OoxmlSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API OoxmlSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OoxmlSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OoxmlSaveOptions& operator=(const OoxmlSaveOptions& src);
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
    /// Indicates if export cell name to Excel2007 .xlsx (.xlsm, .xltx, .xltm) file.
    /// If the output file may be accessed by SQL Server DTS, this value must be true.
    /// Setting the value to false will highly increase the performance and reduce the file size when creating large file.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportCellName();
    /// <summary>
    /// Indicates if export cell name to Excel2007 .xlsx (.xlsm, .xltx, .xltm) file.
    /// If the output file may be accessed by SQL Server DTS, this value must be true.
    /// Setting the value to false will highly increase the performance and reduce the file size when creating large file.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetExportCellName(bool value);
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataProvider* GetLightCellsDataProvider();
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataProvider(LightCellsDataProvider* value);
    /// <summary>
    /// Indicates whether update scaling factor before saving the file
    /// if the PageSetup.FitToPagesWide and PageSetup.FitToPagesTall properties control how the worksheet is scaled.
    /// </summary>
    /// <remarks>
    /// The default value is false for performance.
    /// </remarks>
    ASPOSE_CELLS_API bool GetUpdateZoom();
    /// <summary>
    /// Indicates whether update scaling factor before saving the file
    /// if the PageSetup.FitToPagesWide and PageSetup.FitToPagesTall properties control how the worksheet is scaled.
    /// </summary>
    /// <remarks>
    /// The default value is false for performance.
    /// </remarks>
    ASPOSE_CELLS_API void SetUpdateZoom(bool value);
    /// <summary>
    /// Always use ZIP64 extensions when writing zip archives, even when unnecessary.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableZip64();
    /// <summary>
    /// Always use ZIP64 extensions when writing zip archives, even when unnecessary.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableZip64(bool value);
    /// <summary>
    /// Indicates whether embedding Ooxml files of OleObject as ole object.
    /// </summary>
    /// <remarks>
    /// Only for OleObject.
    /// </remarks>
    ASPOSE_CELLS_API bool GetEmbedOoxmlAsOleObject();
    /// <summary>
    /// Indicates whether embedding Ooxml files of OleObject as ole object.
    /// </summary>
    /// <remarks>
    /// Only for OleObject.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmbedOoxmlAsOleObject(bool value);
    /// <summary>
    /// Gets and sets the compression type for ooxml file.
    /// </summary>
    /// <remarks>The default value is OoxmlCompressionType.Level2.</remarks>
    ASPOSE_CELLS_API OoxmlCompressionType GetCompressionType();
    /// <summary>
    /// Gets and sets the compression type for ooxml file.
    /// </summary>
    /// <remarks>The default value is OoxmlCompressionType.Level2.</remarks>
    ASPOSE_CELLS_API void SetCompressionType(OoxmlCompressionType value);
    
};

} }

#endif
