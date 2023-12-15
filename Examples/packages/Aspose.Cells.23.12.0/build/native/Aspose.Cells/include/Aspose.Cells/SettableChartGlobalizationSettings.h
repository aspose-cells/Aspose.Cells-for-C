// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SETTABLECHARTGLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_SETTABLECHARTGLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/DisplayUnitType.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Charts;

class SettableChartGlobalizationSettings_Impl;

/// <summary>
/// Implementation of PivotGlobalizationSettings that supports user to set/change pre-defined texts.
/// </summary>
class SettableChartGlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SettableChartGlobalizationSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SettableChartGlobalizationSettings();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SettableChartGlobalizationSettings(SettableChartGlobalizationSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SettableChartGlobalizationSettings(const SettableChartGlobalizationSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SettableChartGlobalizationSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SettableChartGlobalizationSettings& operator=(const SettableChartGlobalizationSettings& src);
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
    /// Gets the name of Series in the Chart.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetSeriesName();
    /// <summary>
    /// Sets the name of Series in the Chart.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetSeriesName(const U16String& name);
    /// <summary>
    /// Sets the name of Series in the Chart.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetSeriesName(const char16_t* name);
    /// <summary>
    /// Gets the name of Chart Title.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetChartTitleName();
    /// <summary>
    /// Sets the name of Chart Title.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetChartTitleName(const U16String& name);
    /// <summary>
    /// Sets the name of Chart Title.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetChartTitleName(const char16_t* name);
    /// <summary>
    /// Gets the name of increase for Legend.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetLegendIncreaseName();
    /// <summary>
    /// Sets the name of increase for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendIncreaseName(const U16String& name);
    /// <summary>
    /// Sets the name of increase for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendIncreaseName(const char16_t* name);
    /// <summary>
    /// Gets the name of Decrease for Legend.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetLegendDecreaseName();
    /// <summary>
    /// Sets the name of Decrease for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendDecreaseName(const U16String& name);
    /// <summary>
    /// Sets the name of Decrease for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendDecreaseName(const char16_t* name);
    /// <summary>
    /// Gets the name of Total for Legend.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetLegendTotalName();
    /// <summary>
    /// Sets the name of Total for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendTotalName(const U16String& name);
    /// <summary>
    /// Sets the name of Total for Legend.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetLegendTotalName(const char16_t* name);
    /// <summary>
    /// Gets the name of Title for Axis.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetAxisTitleName();
    /// <summary>
    /// Sets the name of Title for Axis.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetAxisTitleName(const U16String& name);
    /// <summary>
    /// Sets the name of Title for Axis.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetAxisTitleName(const char16_t* name);
    /// <summary>
    /// Gets the name of "Other" labels for Chart.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetOtherName();
    /// <summary>
    /// Sets the name of "Other" labels for Chart.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetOtherName(const U16String& name);
    /// <summary>
    /// Sets the name of "Other" labels for Chart.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetOtherName(const char16_t* name);
    /// <summary>
    /// Gets the Name of Axis Unit.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetAxisUnitName(DisplayUnitType type);
    /// <summary>
    /// Sets the Name of Axis Unit.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetAxisUnitName(DisplayUnitType type, const U16String& name);
    /// <summary>
    /// Sets the Name of Axis Unit.
    /// </summary>
    /// <param name="name">local dependent name</param>
    ASPOSE_CELLS_API void SetAxisUnitName(DisplayUnitType type, const char16_t* name);
    
};

} }

#endif
