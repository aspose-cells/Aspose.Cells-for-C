// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_JSONLOADOPTIONS_H
#define ASPOSE_CELLS_JSONLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/LoadOptions.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Utility {
    class JsonLayoutOptions;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Utility;

class JsonLoadOptions_Impl;

/// <summary>
/// Represents the options of loading json files
/// </summary>
class JsonLoadOptions : public LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    JsonLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates an options of loading the file.
    /// </summary>
    ASPOSE_CELLS_API JsonLoadOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API JsonLoadOptions(JsonLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonLoadOptions(const JsonLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API JsonLoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~JsonLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API JsonLoadOptions& operator=(const JsonLoadOptions& src);
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
    /// Gets and sets the start cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetStartCell();
    /// <summary>
    /// Gets and sets the start cell.
    /// </summary>
    ASPOSE_CELLS_API void SetStartCell(const U16String& value);
    /// <summary>
    /// Gets and sets the start cell.
    /// </summary>
    ASPOSE_CELLS_API void SetStartCell(const char16_t* value);
    /// <summary>
    /// The options of import json.
    /// </summary>
    ASPOSE_CELLS_API JsonLayoutOptions GetLayoutOptions();
    /// <summary>
    /// The options of import json.
    /// </summary>
    ASPOSE_CELLS_API void SetLayoutOptions(const JsonLayoutOptions& value);
    /// <summary>
    /// Indicates whether importing each attribute of JsonObject object as one worksheet when all child nodes are array nodes.
    /// </summary>
    ASPOSE_CELLS_API bool GetMultipleWorksheets();
    /// <summary>
    /// Indicates whether importing each attribute of JsonObject object as one worksheet when all child nodes are array nodes.
    /// </summary>
    ASPOSE_CELLS_API void SetMultipleWorksheets(bool value);
    
};

} }

#endif
