// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ERRORCHECKOPTION_H
#define ASPOSE_CELLS_ERRORCHECKOPTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ErrorCheckType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells {

class ErrorCheckOption_Impl;

/// <summary>
/// Error check setting applied on certain ranges.
/// </summary>
class ErrorCheckOption {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ErrorCheckOption_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOption(ErrorCheckOption_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOption(const ErrorCheckOption& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ErrorCheckOption();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOption& operator=(const ErrorCheckOption& src);
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
    /// Checks whether given error type will be checked.
    /// </summary>
    /// <param name="errorCheckType">error type can be checked</param>
    /// <returns>return true if given error type will be checked(green triangle will be shown for cell if the check failed).</returns>
    ASPOSE_CELLS_API bool IsErrorCheck(ErrorCheckType errorCheckType);
    /// <summary>
    /// Sets whether given error type will be checked.
    /// </summary>
    /// <param name="errorCheckType">error type can be checked.</param>
    /// <param name="isCheck">true if given error type needs to be checked(green triangle will be shown for cell if the check failed).</param>
    ASPOSE_CELLS_API void SetErrorCheck(ErrorCheckType errorCheckType, bool isCheck);
    /// <summary>
    /// Gets the count of ranges that influenced by this setting.
    /// </summary>
    /// <returns>the count of ranges that influenced by this setting.</returns>
    ASPOSE_CELLS_API int32_t GetCountOfRange();
    /// <summary>
    /// Adds one influenced range by this setting.
    /// </summary>
    /// <param name="ca">the range to be added.</param>
    /// <returns>the index of the added range in the range list of this setting.</returns>
    ASPOSE_CELLS_API int32_t AddRange(const CellArea& ca);
    /// <summary>
    /// Gets the influenced range of this setting by given index.
    /// </summary>
    /// <param name="index">the index of range</param>
    /// <returns>return influenced range at given index.</returns>
    ASPOSE_CELLS_API CellArea GetRange(int32_t index);
    /// <summary>
    /// Removes one range by given index.
    /// </summary>
    /// <param name="index">the index of the range to be removed.</param>
    ASPOSE_CELLS_API void RemoveRange(int32_t index);
    
};

} }

#endif
