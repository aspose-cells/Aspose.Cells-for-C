// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XLSBSAVEOPTIONS_H
#define ASPOSE_CELLS_XLSBSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

#include "Aspose.Cells/OoxmlCompressionType.h"

namespace Aspose { namespace Cells {
    class LightCellsDataProvider;
} }

namespace Aspose { namespace Cells {

class XlsbSaveOptions_Impl;

/// <summary>
/// Represents the options for saving xlsb file.
/// </summary>
class XlsbSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XlsbSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates xlsb file save options.
    /// </summary>
    ASPOSE_CELLS_API XlsbSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XlsbSaveOptions(XlsbSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XlsbSaveOptions(const XlsbSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API XlsbSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XlsbSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XlsbSaveOptions& operator=(const XlsbSaveOptions& src);
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
    /// Gets and sets the compression type for ooxml file.
    /// </summary>
    /// <remarks>The default value is OoxmlCompressionType.Level6.</remarks>
    ASPOSE_CELLS_API OoxmlCompressionType GetCompressionType();
    /// <summary>
    /// Gets and sets the compression type for ooxml file.
    /// </summary>
    /// <remarks>The default value is OoxmlCompressionType.Level6.</remarks>
    ASPOSE_CELLS_API void SetCompressionType(OoxmlCompressionType value);
    /// <summary>
    /// Indicates whether exporting all column indexes for cells.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportAllColumnIndexes();
    /// <summary>
    /// Indicates whether exporting all column indexes for cells.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportAllColumnIndexes(bool value);
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataProvider* GetLightCellsDataProvider();
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataProvider(LightCellsDataProvider* value);
    
};

} }

#endif
