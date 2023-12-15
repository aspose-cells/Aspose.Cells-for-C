// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HORIZONTALPAGEBREAK_H
#define ASPOSE_CELLS_HORIZONTALPAGEBREAK_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class HorizontalPageBreak_Impl;

/// <summary>
/// Encapsulates the object that represents a horizontal page break.
/// </summary>
class HorizontalPageBreak {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HorizontalPageBreak_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreak(HorizontalPageBreak_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreak(const HorizontalPageBreak& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HorizontalPageBreak();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreak& operator=(const HorizontalPageBreak& src);
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
    /// Gets the start column index of this horizontal page break.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartColumn();
    /// <summary>
    /// Gets the end column index of this horizontal page break.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndColumn();
    /// <summary>
    /// Gets the zero based row index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    
};

} }

#endif
