// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATABARBORDER_H
#define ASPOSE_CELLS_DATABARBORDER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/DataBarBorderType.h"

namespace Aspose { namespace Cells {

class DataBarBorder_Impl;

/// <summary>
/// Represents the border of the data bars specified by a conditional formatting rule.
/// </summary>
class DataBarBorder {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataBarBorder_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataBarBorder(DataBarBorder_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataBarBorder(const DataBarBorder& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataBarBorder();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataBarBorder& operator=(const DataBarBorder& src);
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
    /// Gets or sets the border's color of data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets the border's color of data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the border's type of data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API DataBarBorderType GetType();
    /// <summary>
    /// Gets or sets the border's type of data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API void SetType(DataBarBorderType value);
    
};

} }

#endif
