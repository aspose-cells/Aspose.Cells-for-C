// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VALIDATION_H
#define ASPOSE_CELLS_VALIDATION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/OperatorType.h"
#include "Aspose.Cells/ValidationAlertType.h"
#include "Aspose.Cells/ValidationType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class CopyOptions;
} }

namespace Aspose { namespace Cells {

class Validation_Impl;

/// <summary>
/// Represents data validation.settings.
/// </summary>
class Validation {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Validation_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Validation(Validation_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Validation(const Validation& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Validation();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Validation& operator=(const Validation& src);
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
    /// Represents the operator for the data validation.
    /// </summary>
    ASPOSE_CELLS_API OperatorType GetOperator();
    /// <summary>
    /// Represents the operator for the data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetOperator(OperatorType value);
    /// <summary>
    /// Represents the validation alert style.
    /// </summary>
    ASPOSE_CELLS_API ValidationAlertType GetAlertStyle();
    /// <summary>
    /// Represents the validation alert style.
    /// </summary>
    ASPOSE_CELLS_API void SetAlertStyle(ValidationAlertType value);
    /// <summary>
    /// Represents the data validation type.
    /// </summary>
    ASPOSE_CELLS_API ValidationType GetType();
    /// <summary>
    /// Represents the data validation type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ValidationType value);
    /// <summary>
    /// Represents the data validation input message.
    /// </summary>
    ASPOSE_CELLS_API U16String GetInputMessage();
    /// <summary>
    /// Represents the data validation input message.
    /// </summary>
    ASPOSE_CELLS_API void SetInputMessage(const U16String& value);
    /// <summary>
    /// Represents the data validation input message.
    /// </summary>
    ASPOSE_CELLS_API void SetInputMessage(const char16_t* value);
    /// <summary>
    /// Represents the title of the data-validation input dialog box.
    /// </summary>
    ASPOSE_CELLS_API U16String GetInputTitle();
    /// <summary>
    /// Represents the title of the data-validation input dialog box.
    /// </summary>
    ASPOSE_CELLS_API void SetInputTitle(const U16String& value);
    /// <summary>
    /// Represents the title of the data-validation input dialog box.
    /// </summary>
    ASPOSE_CELLS_API void SetInputTitle(const char16_t* value);
    /// <summary>
    /// Represents the data validation error message.
    /// </summary>
    ASPOSE_CELLS_API U16String GetErrorMessage();
    /// <summary>
    /// Represents the data validation error message.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorMessage(const U16String& value);
    /// <summary>
    /// Represents the data validation error message.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorMessage(const char16_t* value);
    /// <summary>
    /// Represents the title of the data-validation error dialog box.
    /// </summary>
    ASPOSE_CELLS_API U16String GetErrorTitle();
    /// <summary>
    /// Represents the title of the data-validation error dialog box.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorTitle(const U16String& value);
    /// <summary>
    /// Represents the title of the data-validation error dialog box.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorTitle(const char16_t* value);
    /// <summary>
    /// Indicates whether the data validation input message will be displayed whenever the user selects a cell in the data validation range.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowInput();
    /// <summary>
    /// Indicates whether the data validation input message will be displayed whenever the user selects a cell in the data validation range.
    /// </summary>
    ASPOSE_CELLS_API void SetShowInput(bool value);
    /// <summary>
    /// Indicates whether the data validation error message will be displayed whenever the user enters invalid data.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowError();
    /// <summary>
    /// Indicates whether the data validation error message will be displayed whenever the user enters invalid data.
    /// </summary>
    ASPOSE_CELLS_API void SetShowError(bool value);
    /// <summary>
    /// Indicates whether blank values are permitted by the range data validation.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreBlank();
    /// <summary>
    /// Indicates whether blank values are permitted by the range data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreBlank(bool value);
    /// <summary>
    /// Gets the value or expression associated with this validation.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The value or expression associated with this validation.</returns>
    ASPOSE_CELLS_API U16String GetFormula1(bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the value or expression associated with this validation.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The value or expression associated with this validation.</returns>
    ASPOSE_CELLS_API U16String GetFormula2(bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the value or expression associated with this validation for specific cell.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The value or expression associated with this validation.</returns>
    ASPOSE_CELLS_API U16String GetFormula1(bool isR1C1, bool isLocal, int32_t row, int32_t column);
    /// <summary>
    /// Gets the value or expression associated with this validation for specific cell.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The value or expression associated with this validation.</returns>
    ASPOSE_CELLS_API U16String GetFormula2(bool isR1C1, bool isLocal, int32_t row, int32_t column);
    /// <summary>
    /// Sets the value or expression associated with this validation.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula1(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this validation.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula1(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this validation.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula2(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this validation.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula2(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormula1();
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula1(const U16String& value);
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula1(const char16_t* value);
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormula2();
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula2(const U16String& value);
    /// <summary>
    /// Represents the value or expression associated with the data validation.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula2(const char16_t* value);
    /// <summary>
    /// Indicates whether data validation displays a drop-down list that contains acceptable values.
    /// </summary>
    ASPOSE_CELLS_API bool GetInCellDropDown();
    /// <summary>
    /// Indicates whether data validation displays a drop-down list that contains acceptable values.
    /// </summary>
    ASPOSE_CELLS_API void SetInCellDropDown(bool value);
    /// <summary>
    /// Gets all <see cref="CellArea"/> which contain the data validation settings.
    /// </summary>
    ASPOSE_CELLS_API Vector<CellArea> GetAreas();
    /// <summary>
    /// Applies the validation to the area.
    /// </summary>
    /// <param name="cellArea">The area.</param>
    /// <remarks>
    /// It is equivalent to use <see cref="AddArea(Aspose.Cells.CellArea,bool,bool)"/>
    /// with checking intersection and edge.
    /// </remarks>
    ASPOSE_CELLS_API void AddArea(const CellArea& cellArea);
    /// <summary>
    /// Applies the validation to the area.
    /// </summary>
    /// <param name="cellArea">The area.</param>
    /// <param name="checkIntersection">Whether check the intersection of given area with existing validations' areas.
    /// If one validation has been applied in given area(or part of it),
    /// then the existing validation should be removed at first from given area.
    /// Otherwise corruption may be caused for the generated Validations.
    /// If user is sure that the added area does not intersect with any existing area,
    /// this parameter can be set as false for performance consideration.</param>
    /// <param name="checkEdge">Whether check the edge of this validation's applied areas.
    /// Validation's internal settings depend on the top-left one of its applied ranges,
    /// so if given area will become the new top-left one of the applied ranges,
    /// the internal settings should be changed and rebuilt, otherwise unexpected result may be caused.
    /// If user is sure that the added area is not the top-left one,
    /// this parameter can be set as false for performance consideration.</param>
    /// <remarks>
    /// In this method, we will remove all old validations in given area.
    /// For the top-left one of Validation's applied ranges, firstly its StartRow is smallest,
    /// secondly its StartColumn is the smallest one of those areas who have the same smallest StartRow.
    /// </remarks>
    ASPOSE_CELLS_API void AddArea(const CellArea& cellArea, bool checkIntersection, bool checkEdge);
    /// <summary>
    /// Applies the validation to given areas.
    /// </summary>
    /// <param name="areas">The areas.</param>
    /// <param name="checkIntersection">Whether check the intersection of given area with existing validations' areas.
    /// If one validation has been applied in given area(or part of it),
    /// then the existing validation should be removed at first from given area.
    /// Otherwise corruption may be caused for the generated Validations.
    /// If user is sure that all the added areas do not intersect with any existing area,
    /// this parameter can be set as false for performance consideration.</param>
    /// <param name="checkEdge">Whether check the edge of this validation's applied areas.
    /// Validation's internal settings depend on the top-left one of its applied ranges,
    /// so if one of given areas will become the new top-left one of the applied ranges,
    /// the internal settings should be changed and rebuilt, otherwise unexpected result may be caused.
    /// If user is sure that no one of those added areas is the top-left,
    /// this parameter can be set as false for performance consideration.</param>
    /// <remarks>
    /// In this method, we will remove all old validations in given area.
    /// For the top-left one of Validation's applied ranges, firstly its StartRow is smallest,
    /// secondly its StartColumn is the smallest one of those areas who have the same smallest StartRow.
    /// </remarks>
    ASPOSE_CELLS_API void AddAreas(const Vector<CellArea>& areas, bool checkIntersection, bool checkEdge);
    /// <summary>
    /// Remove the validation settings in the range.
    /// </summary>
    /// <param name="cellArea">the areas where this validation settings should be removed.</param>
    ASPOSE_CELLS_API void RemoveArea(const CellArea& cellArea);
    /// <summary>
    /// Removes this validation from given areas.
    /// </summary>
    /// <param name="areas">the areas where this validation settings should be removed.</param>
    ASPOSE_CELLS_API void RemoveAreas(const Vector<CellArea>& areas);
    /// <summary>
    /// Remove the validation settings in the cell.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column"> The column index.</param>
    ASPOSE_CELLS_API void RemoveACell(int32_t row, int32_t column);
    /// <summary>
    /// Copy validation.
    /// </summary>
    /// <param name="source">The source validation.</param>
    /// <param name="copyOption">The copy option.</param>
    ASPOSE_CELLS_API void Copy(const Validation& source, const CopyOptions& copyOption);
    
};

} }

#endif
