// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_METADATA_WORKBOOKMETADATA_H
#define ASPOSE_CELLS_METADATA_WORKBOOKMETADATA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Metadata {
    class MetadataOptions;
} } }

namespace Aspose { namespace Cells { namespace Properties {
    class BuiltInDocumentPropertyCollection;
    class CustomDocumentPropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Metadata {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Properties;

class WorkbookMetadata_Impl;

/// <summary>
/// Represents the meta data.
/// </summary>
class WorkbookMetadata {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WorkbookMetadata_Impl* _impl;
    
public:
    /// <summary>
    /// Create the meta data object.
    /// </summary>
    /// <param name="fileName"></param>
    /// <param name="options"></param>
    ASPOSE_CELLS_API WorkbookMetadata(const U16String& fileName, const MetadataOptions& options);
    /// <summary>
    /// Create the meta data object.
    /// </summary>
    /// <param name="fileName"></param>
    /// <param name="options"></param>
    ASPOSE_CELLS_API WorkbookMetadata(const char16_t* fileName, const MetadataOptions& options);
    /// <summary>
    /// Create the meta data object.
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="options"></param>
    ASPOSE_CELLS_API WorkbookMetadata(const Vector<uint8_t>& stream, const MetadataOptions& options);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WorkbookMetadata(WorkbookMetadata_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WorkbookMetadata(const WorkbookMetadata& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WorkbookMetadata();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WorkbookMetadata& operator=(const WorkbookMetadata& src);
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
    /// Gets the options of the metadata.
    /// </summary>
    ASPOSE_CELLS_API MetadataOptions GetOptions();
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the  built-in document properties of the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection GetBuiltInDocumentProperties();
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the custom document properties of the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection GetCustomDocumentProperties();
    /// <summary>
    /// Save the modified metadata to the file.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    ASPOSE_CELLS_API void Save(const U16String& fileName);
    /// <summary>
    /// Save the modified metadata to the file.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    ASPOSE_CELLS_API void Save(const char16_t* fileName);
    /// <summary>
    /// Save the modified metadata to the stream.
    /// </summary>
    /// <param name="stream">The stream.</param>
    ASPOSE_CELLS_API void Save(const Vector<uint8_t>& stream);
    
};

} } }

#endif
