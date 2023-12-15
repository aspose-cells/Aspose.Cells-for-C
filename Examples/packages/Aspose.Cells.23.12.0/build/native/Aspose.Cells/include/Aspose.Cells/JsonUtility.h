// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_UTILITY_JSONUTILITY_H
#define ASPOSE_CELLS_UTILITY_JSONUTILITY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Cells;
    class Range;
    class JsonSaveOptions;
} }

namespace Aspose { namespace Cells { namespace Utility {
    class JsonLayoutOptions;
} } }

namespace Aspose { namespace Cells { namespace Utility {

using namespace Aspose::Cells;

class JsonUtility_Impl;

/// <summary>
/// Represents the utility class of processing json.
/// </summary>
class JsonUtility {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    JsonUtility_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonUtility();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API JsonUtility(JsonUtility_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonUtility(const JsonUtility& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~JsonUtility();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API JsonUtility& operator=(const JsonUtility& src);
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
    /// Import the json string.
    /// </summary>
    /// <param name="json">The json string.</param>
    /// <param name="cells">The Cells.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <param name="option">The options of import json string.</param>
    /// <returns>
    /// </returns>
    ASPOSE_CELLS_API static Vector<int32_t> ImportData(const U16String& json, const Cells& cells, int32_t row, int32_t column, const JsonLayoutOptions& option);
    /// <summary>
    /// Import the json string.
    /// </summary>
    /// <param name="json">The json string.</param>
    /// <param name="cells">The Cells.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <param name="option">The options of import json string.</param>
    /// <returns>
    /// </returns>
    ASPOSE_CELLS_API static Vector<int32_t> ImportData(const char16_t* json, const Cells& cells, int32_t row, int32_t column, const JsonLayoutOptions& option);
    /// <summary>
    /// Exporting the range to json file.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <param name="options">The options of exporting.</param>
    /// <returns>The json string value.</returns>
    ASPOSE_CELLS_API static U16String ExportRangeToJson(const Range& range, const JsonSaveOptions& options);
    
};

} } }

#endif
