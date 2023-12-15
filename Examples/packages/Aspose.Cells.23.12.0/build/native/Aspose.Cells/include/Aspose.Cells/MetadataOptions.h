// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_METADATA_METADATAOPTIONS_H
#define ASPOSE_CELLS_METADATA_METADATAOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/MetadataType.h"

namespace Aspose { namespace Cells { namespace Metadata {

using namespace Aspose::Cells;

class MetadataOptions_Impl;

/// <summary>
/// Represents the options of loading metadata of the file.
/// </summary>
class MetadataOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MetadataOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates an options of loading the metadata.
    /// </summary>
    /// <param name="metadataType">The type of metadata.</param>
    ASPOSE_CELLS_API explicit MetadataOptions(MetadataType metadataType);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MetadataOptions(MetadataOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MetadataOptions(const MetadataOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MetadataOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MetadataOptions& operator=(const MetadataOptions& src);
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
    /// Gets and sets the type of the metadata which is loading.
    /// </summary>
    ASPOSE_CELLS_API MetadataType GetMetadataType();
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPassword();
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// The key length.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetKeyLength();
    /// <summary>
    /// The key length.
    /// </summary>
    ASPOSE_CELLS_API void SetKeyLength(int32_t value);
    
};

} } }

#endif
