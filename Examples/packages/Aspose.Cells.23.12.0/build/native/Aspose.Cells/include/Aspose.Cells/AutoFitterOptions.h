// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_AUTOFITTEROPTIONS_H
#define ASPOSE_CELLS_AUTOFITTEROPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/AutoFitMergedCellsType.h"
#include "Aspose.Cells/AutoFitWrappedTextType.h"
#include "Aspose.Cells/CellValueFormatStrategy.h"
#include "Aspose.Cells/DefaultEditLanguage.h"

namespace Aspose { namespace Cells {

class AutoFitterOptions_Impl;

/// <summary>
/// Represents all auto fitter options.
/// </summary>
class AutoFitterOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AutoFitterOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API AutoFitterOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AutoFitterOptions(AutoFitterOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AutoFitterOptions(const AutoFitterOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AutoFitterOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AutoFitterOptions& operator=(const AutoFitterOptions& src);
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
    /// Gets or sets default edit language.
    /// </summary>
    /// <remarks>
    /// It may display/render different layouts for text paragraph when different edit languages is set.
    /// Default is <see cref="Aspose.Cells.DefaultEditLanguage.Auto"/>.
    /// </remarks>
    ASPOSE_CELLS_API DefaultEditLanguage GetDefaultEditLanguage();
    /// <summary>
    /// Gets or sets default edit language.
    /// </summary>
    /// <remarks>
    /// It may display/render different layouts for text paragraph when different edit languages is set.
    /// Default is <see cref="Aspose.Cells.DefaultEditLanguage.Auto"/>.
    /// </remarks>
    ASPOSE_CELLS_API void SetDefaultEditLanguage(DefaultEditLanguage value);
    /// <summary>
    /// Gets and set the type of auto fitting row height of merged cells.
    /// </summary>
    /// <remarks>
    /// Excel defaults to ignore merged cells when fitting the row height, so Aspose.Cells works as MS Excel default.
    /// Please set this type to change the way of auto fitting row height of merged cells.
    /// </remarks>
    ASPOSE_CELLS_API AutoFitMergedCellsType GetAutoFitMergedCellsType();
    /// <summary>
    /// Gets and set the type of auto fitting row height of merged cells.
    /// </summary>
    /// <remarks>
    /// Excel defaults to ignore merged cells when fitting the row height, so Aspose.Cells works as MS Excel default.
    /// Please set this type to change the way of auto fitting row height of merged cells.
    /// </remarks>
    ASPOSE_CELLS_API void SetAutoFitMergedCellsType(AutoFitMergedCellsType value);
    /// <summary>
    /// Indicates whether only fit the rows which height are not customed.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyAuto();
    /// <summary>
    /// Indicates whether only fit the rows which height are not customed.
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyAuto(bool value);
    /// <summary>
    /// Ignores the hidden rows/columns.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreHidden();
    /// <summary>
    /// Ignores the hidden rows/columns.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreHidden(bool value);
    /// <summary>
    /// Gets and sets the max row height(in unit of Point) when autofitting rows.
    /// </summary>
    ASPOSE_CELLS_API double GetMaxRowHeight();
    /// <summary>
    /// Gets and sets the max row height(in unit of Point) when autofitting rows.
    /// </summary>
    ASPOSE_CELLS_API void SetMaxRowHeight(double value);
    /// <summary>
    /// Gets and sets the type of auto fitting wrapped text.
    /// </summary>
    ASPOSE_CELLS_API AutoFitWrappedTextType GetAutoFitWrappedTextType();
    /// <summary>
    /// Gets and sets the type of auto fitting wrapped text.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoFitWrappedTextType(AutoFitWrappedTextType value);
    /// <summary>
    /// Gets and sets the formatted strategy.
    /// </summary>
    /// <remarks>
    /// The default value is CellStyle for performance.
    /// </remarks>
    ASPOSE_CELLS_API CellValueFormatStrategy GetFormatStrategy();
    /// <summary>
    /// Gets and sets the formatted strategy.
    /// </summary>
    /// <remarks>
    /// The default value is CellStyle for performance.
    /// </remarks>
    ASPOSE_CELLS_API void SetFormatStrategy(CellValueFormatStrategy value);
    /// <summary>
    /// Indicates whether fit for rendering purpose.
    /// </summary>
    ASPOSE_CELLS_API bool GetForRendering();
    /// <summary>
    /// Indicates whether fit for rendering purpose.
    /// </summary>
    ASPOSE_CELLS_API void SetForRendering(bool value);
    
};

} }

#endif
