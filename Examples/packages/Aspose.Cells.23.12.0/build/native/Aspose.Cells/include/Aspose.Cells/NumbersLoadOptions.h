// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_NUMBERS_NUMBERSLOADOPTIONS_H
#define ASPOSE_CELLS_NUMBERS_NUMBERSLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/LoadOptions.h"

#include "Aspose.Cells/LoadNumbersTableType.h"

namespace Aspose { namespace Cells { namespace Numbers {

using namespace Aspose::Cells;

class NumbersLoadOptions_Impl;

/// <summary>
/// Represents the options of loading Apple Numbers files.
/// </summary>
class NumbersLoadOptions : public LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NumbersLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructor.
    /// </summary>
    ASPOSE_CELLS_API NumbersLoadOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NumbersLoadOptions(NumbersLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NumbersLoadOptions(const NumbersLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API NumbersLoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NumbersLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NumbersLoadOptions& operator=(const NumbersLoadOptions& src);
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
    /// Gets and sets the type of loading multiple tables in one worksheet.
    /// </summary>
    ASPOSE_CELLS_API LoadNumbersTableType GetLoadTableType();
    /// <summary>
    /// Gets and sets the type of loading multiple tables in one worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetLoadTableType(LoadNumbersTableType value);
    
};

} } }

#endif
