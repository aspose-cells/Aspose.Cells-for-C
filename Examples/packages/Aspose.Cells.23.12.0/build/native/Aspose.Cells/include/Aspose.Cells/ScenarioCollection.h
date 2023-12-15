// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SCENARIOCOLLECTION_H
#define ASPOSE_CELLS_SCENARIOCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Scenario;
} }

namespace Aspose { namespace Cells {

class ScenarioCollection_Impl;

/// <summary>
/// Represents the list of scenarios.
/// </summary>
class ScenarioCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ScenarioCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ScenarioCollection(ScenarioCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ScenarioCollection(const ScenarioCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ScenarioCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ScenarioCollection& operator=(const ScenarioCollection& src);
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
    /// Gets and sets which scenario is selected.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetActiveIndex();
    /// <summary>
    /// Gets and sets which scenario is selected.
    /// </summary>
    ASPOSE_CELLS_API void SetActiveIndex(int32_t value);
    /// <summary>
    /// Indicates which scenario was last selected by the user to be run/shown.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLastSelected();
    /// <summary>
    /// Indicates which scenario was last selected by the user to be run/shown.
    /// </summary>
    ASPOSE_CELLS_API void SetLastSelected(int32_t value);
    /// <summary>
    /// Gets the <see cref="Scenario"/> object by the index.
    /// </summary>
    /// <param name="index">The specific index in the list.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Scenario Get(int32_t index);
    /// <summary>
    /// Adds a scenario.
    /// </summary>
    /// <param name="name">The name of scenario.</param>
    /// <returns>The index in the list of scenarios.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& name);
    /// <summary>
    /// Adds a scenario.
    /// </summary>
    /// <param name="name">The name of scenario.</param>
    /// <returns>The index in the list of scenarios.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
