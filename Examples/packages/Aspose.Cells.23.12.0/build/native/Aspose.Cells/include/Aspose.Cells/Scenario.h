// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SCENARIO_H
#define ASPOSE_CELLS_SCENARIO_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ScenarioInputCellCollection;
} }

namespace Aspose { namespace Cells {

class Scenario_Impl;

/// <summary>
/// Represents an individual scenario.
/// </summary>
class Scenario {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Scenario_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Scenario(Scenario_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Scenario(const Scenario& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Scenario();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Scenario& operator=(const Scenario& src);
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
    /// Gets and sets the comment of scenario.
    /// </summary>
    ASPOSE_CELLS_API U16String GetComment();
    /// <summary>
    /// Gets and sets the comment of scenario.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const U16String& value);
    /// <summary>
    /// Gets and sets the comment of scenario.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const char16_t* value);
    /// <summary>
    /// Gets and sets the name of scenario.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of scenario.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of scenario.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets name of user who last changed the scenario.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUser();
    /// <summary>
    /// Indicates whether scenario is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Indicates whether scenario is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// Indicates whether scenario is locked for editing when the sheet is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// Indicates whether scenario is locked for editing when the sheet is protected.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// Gets the input cells of scenario.
    /// </summary>
    ASPOSE_CELLS_API ScenarioInputCellCollection GetInputCells();
    
};

} }

#endif
