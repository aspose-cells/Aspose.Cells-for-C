// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMULASETTINGS_H
#define ASPOSE_CELLS_FORMULASETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CalcModeType.h"

namespace Aspose { namespace Cells {

class FormulaSettings_Impl;

/// <summary>
/// Settings of formulas and calculation.
/// </summary>
class FormulaSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FormulaSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FormulaSettings(FormulaSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FormulaSettings(const FormulaSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FormulaSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FormulaSettings& operator=(const FormulaSettings& src);
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
    /// Indicates whether the application is required to perform a full calculation when the workbook is opened.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCalculateOnOpen();
    /// <summary>
    /// Indicates whether the application is required to perform a full calculation when the workbook is opened.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculateOnOpen(bool value);
    /// <summary>
    /// Indicates whether recalculate the workbook before saving the document, when in manual calculation mode.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCalculateOnSave();
    /// <summary>
    /// Indicates whether recalculate the workbook before saving the document, when in manual calculation mode.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculateOnSave(bool value);
    /// <summary>
    /// Indicates whether calculates all formulas every time when a calculation is triggered.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API bool GetForceFullCalculation();
    /// <summary>
    /// Indicates whether calculates all formulas every time when a calculation is triggered.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most users' applications, we do not calculate any formula in the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetForceFullCalculation(bool value);
    /// <summary>
    /// Gets or sets the mode for workbook calculation in ms excel.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most user's application, we do not calculate any formula in the workbook automatically,
    /// no matter what mode has been set for this property.
    /// If user needs to calculate formulas, please always call methods on different objects according to requirement:
    /// <see cref="Workbook.CalculateFormula()"/>, <see cref="Worksheet.CalculateFormula(CalculationOptions, bool)"/>,
    /// <see cref="Cell.Calculate(CalculationOptions)"/>, ...etc.
    /// </remarks>
    ASPOSE_CELLS_API CalcModeType GetCalculationMode();
    /// <summary>
    /// Gets or sets the mode for workbook calculation in ms excel.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// For performance consideration for most user's application, we do not calculate any formula in the workbook automatically,
    /// no matter what mode has been set for this property.
    /// If user needs to calculate formulas, please always call methods on different objects according to requirement:
    /// <see cref="Workbook.CalculateFormula()"/>, <see cref="Worksheet.CalculateFormula(CalculationOptions, bool)"/>,
    /// <see cref="Cell.Calculate(CalculationOptions)"/>, ...etc.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculationMode(CalcModeType value);
    /// <summary>
    /// Specifies the version of the calculation engine used to calculate values in the workbook.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// In the case of ms excel, if the value of this property is less than the recalculation engine identifier associated
    /// with the application that opens the resultant file, the application will recalculate the results of all formulas
    /// on this workbook immediately after loading the file.
    /// For performance consideration for most users' applications, we do not calculate any formula on the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetCalculationId();
    /// <summary>
    /// Specifies the version of the calculation engine used to calculate values in the workbook.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// In the case of ms excel, if the value of this property is less than the recalculation engine identifier associated
    /// with the application that opens the resultant file, the application will recalculate the results of all formulas
    /// on this workbook immediately after loading the file.
    /// For performance consideration for most users' applications, we do not calculate any formula on the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculationId(const U16String& value);
    /// <summary>
    /// Specifies the version of the calculation engine used to calculate values in the workbook.
    /// </summary>
    /// <remarks>
    /// This property is only for saving the settings to resultant spreadsheet file
    /// so that other applications(such as ms excel) may act accordingly when loading and manipulating the resultant file.
    /// In the case of ms excel, if the value of this property is less than the recalculation engine identifier associated
    /// with the application that opens the resultant file, the application will recalculate the results of all formulas
    /// on this workbook immediately after loading the file.
    /// For performance consideration for most users' applications, we do not calculate any formula on the workbook automatically,
    /// no matter what value has been set for this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculationId(const char16_t* value);
    /// <summary>
    /// Indicates whether enable iterative calculation to resolve circular references.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableIterativeCalculation();
    /// <summary>
    /// Indicates whether enable iterative calculation to resolve circular references.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableIterativeCalculation(bool value);
    /// <summary>
    /// The maximum iterations to resolve a circular reference.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMaxIteration();
    /// <summary>
    /// The maximum iterations to resolve a circular reference.
    /// </summary>
    ASPOSE_CELLS_API void SetMaxIteration(int32_t value);
    /// <summary>
    /// The maximum change to resolve a circular reference.
    /// </summary>
    ASPOSE_CELLS_API double GetMaxChange();
    /// <summary>
    /// The maximum change to resolve a circular reference.
    /// </summary>
    ASPOSE_CELLS_API void SetMaxChange(double value);
    /// <summary>
    /// Whether the precision of calculated result be set as they are displayed while calculating formulas
    /// </summary>
    ASPOSE_CELLS_API bool GetPrecisionAsDisplayed();
    /// <summary>
    /// Whether the precision of calculated result be set as they are displayed while calculating formulas
    /// </summary>
    ASPOSE_CELLS_API void SetPrecisionAsDisplayed(bool value);
    /// <summary>
    /// Whether enable calculation chain for formulas. Default is false.
    /// </summary>
    /// <remarks>
    /// When there are lots of formulas in the workbook and user needs to calculate them repeatedly
    /// with modifying only a small part of them, it may be helpful for performance to enable the calculation chain.
    /// On the other hand, if the chain is enabled, maintaining the model of chain requires extra memory,
    /// and it also requires a bit more cpu time for some other operations such as changing cell's value or formulas.
    /// After changing this property from false to true, the calculation chain will be analyzed and built
    /// at the time of first calculation for the workbook, so the required time for the first calculation
    /// may be more than normal calculation without chain.
    /// </remarks>
    ASPOSE_CELLS_API bool GetEnableCalculationChain();
    /// <summary>
    /// Whether enable calculation chain for formulas. Default is false.
    /// </summary>
    /// <remarks>
    /// When there are lots of formulas in the workbook and user needs to calculate them repeatedly
    /// with modifying only a small part of them, it may be helpful for performance to enable the calculation chain.
    /// On the other hand, if the chain is enabled, maintaining the model of chain requires extra memory,
    /// and it also requires a bit more cpu time for some other operations such as changing cell's value or formulas.
    /// After changing this property from false to true, the calculation chain will be analyzed and built
    /// at the time of first calculation for the workbook, so the required time for the first calculation
    /// may be more than normal calculation without chain.
    /// </remarks>
    ASPOSE_CELLS_API void SetEnableCalculationChain(bool value);
    /// <summary>
    /// Indicates whether preserve those spaces and line breaks that are padded between formula tokens
    /// while getting and setting formulas.
    /// Default value is false.
    /// </summary>
    /// <remarks>Generally those spaces and line breaks are jsut for visual purpose,
    /// Preserving them or not does not affect the calculated result.
    /// For performance consideration, if there is no special requirement,
    /// it is better not to preserve them while processing formulas.</remarks>
    ASPOSE_CELLS_API bool GetPreservePaddingSpaces();
    /// <summary>
    /// Indicates whether preserve those spaces and line breaks that are padded between formula tokens
    /// while getting and setting formulas.
    /// Default value is false.
    /// </summary>
    /// <remarks>Generally those spaces and line breaks are jsut for visual purpose,
    /// Preserving them or not does not affect the calculated result.
    /// For performance consideration, if there is no special requirement,
    /// it is better not to preserve them while processing formulas.</remarks>
    ASPOSE_CELLS_API void SetPreservePaddingSpaces(bool value);
    
};

} }

#endif
