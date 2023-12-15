// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAGSETTING_H
#define ASPOSE_CELLS_MARKUP_SMARTTAGSETTING_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {
    class SmartTagCollection;
} } }

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class SmartTagSetting_Impl;

/// <summary>
/// Represents all <see cref="SmartTagCollection"/> object in the worksheet.
/// </summary>
class SmartTagSetting {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTagSetting_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTagSetting(SmartTagSetting_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagSetting(const SmartTagSetting& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTagSetting();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTagSetting& operator=(const SmartTagSetting& src);
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
    /// Adds a <see cref="SmartTagCollection"/> object to a cell.
    /// </summary>
    /// <param name="row">The row of the cell.</param>
    /// <param name="column">The column of the cell.</param>
    /// <returns>Returns index of a <see cref="SmartTagCollection"/> object in the worksheet.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column);
    /// <summary>
    /// Add a cell smart tags.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName);
    /// <summary>
    /// Add a cell smart tags.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName);
    /// <summary>
    /// Gets a <see cref="SmartTagCollection"/> object by the index.
    /// </summary>
    /// <param name="index">The index of the <see cref="SmartTagCollection"/> object in the list.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API SmartTagCollection Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="SmartTagCollection"/> object of the cell.
    /// </summary>
    /// <param name="row">The row index of the cell.</param>
    /// <param name="column">The column index of the cell</param>
    /// <returns>Returns the <see cref="SmartTagCollection"/> object of the cell.
    /// Returns null if there is no any smart tags on the cell.
    /// </returns>
    ASPOSE_CELLS_API SmartTagCollection Get(int32_t row, int32_t column);
    /// <summary>
    /// Gets the <see cref="SmartTagCollection"/> object of the cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns>Returns the <see cref="SmartTagCollection"/> object of the cell.
    /// Returns null if there is no any smart tags on the cell.
    /// </returns>
    ASPOSE_CELLS_API SmartTagCollection Get(const U16String& cellName);
    /// <summary>
    /// Gets the <see cref="SmartTagCollection"/> object of the cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns>Returns the <see cref="SmartTagCollection"/> object of the cell.
    /// Returns null if there is no any smart tags on the cell.
    /// </returns>
    ASPOSE_CELLS_API SmartTagCollection Get(const char16_t* cellName);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
