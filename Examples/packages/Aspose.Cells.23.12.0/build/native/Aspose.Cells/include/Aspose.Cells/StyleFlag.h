// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_STYLEFLAG_H
#define ASPOSE_CELLS_STYLEFLAG_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class StyleFlag_Impl;

/// <summary>
/// Represents flags which indicates applied formatting properties.
/// </summary>
class StyleFlag {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    StyleFlag_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs an object with all flags as false.
    /// </summary>
    ASPOSE_CELLS_API StyleFlag();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API StyleFlag(StyleFlag_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API StyleFlag(const StyleFlag& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~StyleFlag();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API StyleFlag& operator=(const StyleFlag& src);
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
    /// All properties will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetAll();
    /// <summary>
    /// All properties will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetAll(bool value);
    /// <summary>
    /// All borders settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetBorders();
    /// <summary>
    /// All borders settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetBorders(bool value);
    /// <summary>
    /// Left border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetLeftBorder();
    /// <summary>
    /// Left border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftBorder(bool value);
    /// <summary>
    /// Right border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetRightBorder();
    /// <summary>
    /// Right border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetRightBorder(bool value);
    /// <summary>
    /// Top border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetTopBorder();
    /// <summary>
    /// Top border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetTopBorder(bool value);
    /// <summary>
    /// Bottom border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetBottomBorder();
    /// <summary>
    /// Bottom border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomBorder(bool value);
    /// <summary>
    /// Diagonal down border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetDiagonalDownBorder();
    /// <summary>
    /// Diagonal down border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetDiagonalDownBorder(bool value);
    /// <summary>
    /// Diagonal up border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetDiagonalUpBorder();
    /// <summary>
    /// Diagonal up border settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetDiagonalUpBorder(bool value);
    /// <summary>
    /// Font settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFont();
    /// <summary>
    /// Font settings will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFont(bool value);
    /// <summary>
    /// Font size setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontSize();
    /// <summary>
    /// Font size setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontSize(bool value);
    /// <summary>
    /// Font name setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontName();
    /// <summary>
    /// Font name setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(bool value);
    /// <summary>
    /// Font color setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontColor();
    /// <summary>
    /// Font color setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontColor(bool value);
    /// <summary>
    /// Font bold setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontBold();
    /// <summary>
    /// Font bold setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontBold(bool value);
    /// <summary>
    /// Font italic setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontItalic();
    /// <summary>
    /// Font italic setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontItalic(bool value);
    /// <summary>
    /// Font underline setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontUnderline();
    /// <summary>
    /// Font underline setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontUnderline(bool value);
    /// <summary>
    /// Font strikeout setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontStrike();
    /// <summary>
    /// Font strikeout setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontStrike(bool value);
    /// <summary>
    /// Font script setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontScript();
    /// <summary>
    /// Font script setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetFontScript(bool value);
    /// <summary>
    /// Number format setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool Get_NumberFormat();
    /// <summary>
    /// Number format setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(bool value);
    /// <summary>
    /// Alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetAlignments();
    /// <summary>
    /// Alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetAlignments(bool value);
    /// <summary>
    /// Horizontal alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetHorizontalAlignment();
    /// <summary>
    /// Horizontal alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAlignment(bool value);
    /// <summary>
    /// Vertical alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetVerticalAlignment();
    /// <summary>
    /// Vertical alignment setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAlignment(bool value);
    /// <summary>
    /// Indent level setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetIndent();
    /// <summary>
    /// Indent level setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetIndent(bool value);
    /// <summary>
    /// Rotation setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetRotation();
    /// <summary>
    /// Rotation setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetRotation(bool value);
    /// <summary>
    /// Wrap text setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetWrapText();
    /// <summary>
    /// Wrap text setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetWrapText(bool value);
    /// <summary>
    /// Shrink to fit setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShrinkToFit();
    /// <summary>
    /// Shrink to fit setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShrinkToFit(bool value);
    /// <summary>
    /// Text direction setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetTextDirection();
    /// <summary>
    /// Text direction setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetTextDirection(bool value);
    /// <summary>
    /// Cell shading setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetCellShading();
    /// <summary>
    /// Cell shading setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetCellShading(bool value);
    /// <summary>
    /// Locked setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetLocked();
    /// <summary>
    /// Locked setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetLocked(bool value);
    /// <summary>
    /// Hide formula setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetHideFormula();
    /// <summary>
    /// Hide formula setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetHideFormula(bool value);
    /// <summary>
    /// Hide formula setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetQuotePrefix();
    /// <summary>
    /// Hide formula setting will be applied.
    /// </summary>
    ASPOSE_CELLS_API void SetQuotePrefix(bool value);
    
};

} }

#endif
