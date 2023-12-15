// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TOP10_H
#define ASPOSE_CELLS_TOP10_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class Top10_Impl;

/// <summary>
/// Describe the Top10 conditional formatting rule.
/// This conditional formatting rule highlights cells whose
/// values fall in the top N or bottom N bracket, as specified.
/// </summary>
class Top10 {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Top10_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API Top10();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Top10(Top10_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Top10(const Top10& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Top10();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Top10& operator=(const Top10& src);
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
    /// Get or set whether a "top/bottom n" rule is a "top/bottom n percent" rule.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsPercent();
    /// <summary>
    /// Get or set whether a "top/bottom n" rule is a "top/bottom n percent" rule.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPercent(bool value);
    /// <summary>
    /// Get or set whether a "top/bottom n" rule is a "bottom n" rule.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsBottom();
    /// <summary>
    /// Get or set whether a "top/bottom n" rule is a "bottom n" rule.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsBottom(bool value);
    /// <summary>
    /// Get or set the value of "n" in a "top/bottom n" conditional formatting rule.
    /// If IsPercent is true, the value must between 0 and 100.
    /// Otherwise it must between 0 and 1000.
    /// Default value is 10.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRank();
    /// <summary>
    /// Get or set the value of "n" in a "top/bottom n" conditional formatting rule.
    /// If IsPercent is true, the value must between 0 and 100.
    /// Otherwise it must between 0 and 1000.
    /// Default value is 10.
    /// </summary>
    ASPOSE_CELLS_API void SetRank(int32_t value);
    
};

} }

#endif
