// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_METADATA_METADATATYPE_H
#define ASPOSE_CELLS_METADATA_METADATATYPE_H

namespace Aspose { namespace Cells { namespace Metadata {

/// <summary>
/// Represents the type of metadata.
/// </summary>
enum class MetadataType {
    /// <summary>
    /// Encrypts the file.
    /// </summary>
    Encryption = 0x01,
    /// <summary>
    /// Decrypts the file.
    /// </summary>
    Decryption = 0x02,
    /// <summary>
    /// Load the properties of the file.
    /// </summary>
    Document_Properties = 0x04,
};

inline MetadataType operator&(MetadataType a, MetadataType b) {
    return static_cast<MetadataType>(static_cast<int>(a) & static_cast<int>(b));
}

} } }

#endif
