// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_PROPERTYTYPE_H
#define ASPOSE_CELLS_PROPERTIES_PROPERTYTYPE_H

namespace Aspose { namespace Cells { namespace Properties {

/// <summary>
/// Specifies data type of a document property.
/// </summary>
enum class PropertyType {
    /// <summary>
    /// The property is a boolean value.
    /// </summary>
    Boolean,
    /// <summary>
    /// The property is a date time value.
    /// </summary>
    DateTime,
    /// <summary>
    /// The property is a floating number.
    /// </summary>
    Double,
    /// <summary>
    /// The property is an integer number.
    /// </summary>
    Number,
    /// <summary>
    /// The property is a string value.
    /// </summary>
    String,
    /// <summary>
    /// The property is a byte array.
    /// </summary>
    Blob,
};

} } }

#endif
