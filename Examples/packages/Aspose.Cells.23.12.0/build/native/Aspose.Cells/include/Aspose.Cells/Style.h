// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_STYLE_H
#define ASPOSE_CELLS_STYLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/BackgroundType.h"
#include "Aspose.Cells/BorderType.h"
#include "Aspose.Cells/CellBorderType.h"
#include "Aspose.Cells/GradientStyleType.h"
#include "Aspose.Cells/StyleModifyFlag.h"
#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextDirectionType.h"

namespace Aspose { namespace Cells {
    class ThemeColor;
    class BorderCollection;
    class Font;
    class CellsColor;
    class TwoColorGradient;
} }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;

class Style_Impl;

/// <summary>
/// Represents display style of excel document,such as font,color,alignment,border,etc.
/// The Style object contains all style attributes (font, number format, alignment, and so on) as properties.
/// </summary>
class Style {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Style_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Style(Style_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Style(const Style& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Style();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Style& operator=(const Style& src);
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
    /// Gets and sets the background theme color.
    /// </summary>
    /// <remarks>
    /// If the background color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API ThemeColor GetBackgroundThemeColor();
    /// <summary>
    /// Gets and sets the background theme color.
    /// </summary>
    /// <remarks>
    /// If the background color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API void SetBackgroundThemeColor(const ThemeColor& value);
    /// <summary>
    /// Gets and sets the foreground theme color.
    /// </summary>
    /// <remarks>
    /// If the foreground color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API ThemeColor GetForegroundThemeColor();
    /// <summary>
    /// Gets and sets the foreground theme color.
    /// </summary>
    /// <remarks>
    /// If the foreground color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API void SetForegroundThemeColor(const ThemeColor& value);
    /// <summary>
    /// Gets or sets the name of the style.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets or sets the name of the style.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the style.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets or sets the cell background pattern type.
    /// </summary>
    ASPOSE_CELLS_API BackgroundType GetPattern();
    /// <summary>
    /// Gets or sets the cell background pattern type.
    /// </summary>
    ASPOSE_CELLS_API void SetPattern(BackgroundType value);
    /// <summary>
    /// Sets the background color.
    /// </summary>
    /// <param name="pattern">The pattern.</param>
    /// <param name="color1">The foreground color.</param>
    /// <param name="color2">The background color. Only works when pattern is not BackgroundType.None and BackgroundType.Solid.</param>
    ASPOSE_CELLS_API void SetPatternColor(BackgroundType pattern, const Aspose::Cells::Color& color1, const Aspose::Cells::Color& color2);
    /// <summary>
    /// Gets the <see cref="BorderCollection"/> of the style.
    /// </summary>
    ASPOSE_CELLS_API BorderCollection GetBorders();
    /// <summary>
    /// Gets or sets a style's background color.
    /// </summary>
    /// <remarks>If you want to set a cell's color, please use Style.ForegroundColor property.
    /// Only if the cell style pattern is other than none or solid, this property will take effect.</remarks>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackgroundColor();
    /// <summary>
    /// Gets or sets a style's background color.
    /// </summary>
    /// <remarks>If you want to set a cell's color, please use Style.ForegroundColor property.
    /// Only if the cell style pattern is other than none or solid, this property will take effect.</remarks>
    ASPOSE_CELLS_API void SetBackgroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the background color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBackgroundArgbColor();
    /// <summary>
    /// Gets and sets the background color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundArgbColor(int32_t value);
    /// <summary>
    /// Gets or sets a style's foreground color.
    /// </summary>
    /// <remarks>It means no color setting if Color.Empty is returned.</remarks>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForegroundColor();
    /// <summary>
    /// Gets or sets a style's foreground color.
    /// </summary>
    /// <remarks>It means no color setting if Color.Empty is returned.</remarks>
    ASPOSE_CELLS_API void SetForegroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the foreground color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetForegroundArgbColor();
    /// <summary>
    /// Gets and sets the foreground color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundArgbColor(int32_t value);
    /// <summary>
    /// Copies data from another style object
    /// </summary>
    /// <param name="style">Source Style object</param>
    /// <remarks>
    /// This method does not copy the name of the style.
    /// If you want to copy the name, please call the following codes after copying style:
    /// destStyle.Name = style.Name.</remarks>
    ASPOSE_CELLS_API void Copy(const Style& style);
    /// <summary>
    /// Checks whether there are borders have been set for the style.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasBorders();
    /// <summary>
    /// Gets the parent style of this style.
    /// </summary>
    ASPOSE_CELLS_API Style GetParentStyle();
    /// <summary>
    /// Apply the named style to the styles of the cells which use this named style.
    /// It works like clicking the "ok" button after you finished modifying the style.
    /// Only applies for named style.
    /// </summary>
    ASPOSE_CELLS_API void Update();
    /// <summary>
    /// Indicate whether the number formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsNumberFormatApplied();
    /// <summary>
    /// Indicate whether the number formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsNumberFormatApplied(bool value);
    /// <summary>
    /// Indicate whether the font formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsFontApplied();
    /// <summary>
    /// Indicate whether the font formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsFontApplied(bool value);
    /// <summary>
    /// Indicate whether the alignment formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsAlignmentApplied();
    /// <summary>
    /// Indicate whether the alignment formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsAlignmentApplied(bool value);
    /// <summary>
    /// Indicate whether the border formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsBorderApplied();
    /// <summary>
    /// Indicate whether the border formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsBorderApplied(bool value);
    /// <summary>
    /// Indicate whether the fill formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsFillApplied();
    /// <summary>
    /// Indicate whether the fill formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsFillApplied(bool value);
    /// <summary>
    /// Indicate whether the protection formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API bool IsProtectionApplied();
    /// <summary>
    /// Indicate whether the protection formatting should be applied.
    /// </summary>
    /// <remarks>Only for named style.</remarks>
    ASPOSE_CELLS_API void SetIsProtectionApplied(bool value);
    /// <summary>
    /// Checks whether the specified properties of the style have been modified.
    /// Used for style of ConditionalFormattings to check whether the specified properties of this style should be used when applying the ConditionalFormattings on a cell.
    /// </summary>
    /// <param name="modifyFlag">Style modified flags</param>
    /// <returns>true if the specified properties have been modified</returns>
    ASPOSE_CELLS_API bool IsModified(StyleModifyFlag modifyFlag);
    /// <summary>
    /// Serves as a hash function for a Style object.
    /// </summary>
    /// <returns>A hash code for the current Object.</returns>
    /// <remarks>This method is only for internal use.</remarks>
    ASPOSE_CELLS_API int32_t GetHashCode();
    /// <summary>
    /// Represents the indent level for the cell or range. Can only be an integer from 0 to 250.
    /// </summary>
    /// <remarks>
    /// If text horizontal alignment type is set to value other than left or right, indent level will
    /// be reset to zero.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetIndentLevel();
    /// <summary>
    /// Represents the indent level for the cell or range. Can only be an integer from 0 to 250.
    /// </summary>
    /// <remarks>
    /// If text horizontal alignment type is set to value other than left or right, indent level will
    /// be reset to zero.
    /// </remarks>
    ASPOSE_CELLS_API void SetIndentLevel(int32_t value);
    /// <summary>
    /// Gets a <see cref="Font"/> object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Represents text rotation angle.
    /// </summary>
    /// <remarks><p>0: Not rotated.</p>
    /// <p>255: Top to Bottom.</p>
    /// <p>-90: Downward.</p>
    /// <p>90: Upward.</p>
    /// You can set 255 or value ranged from -90 to 90.</remarks>
    ASPOSE_CELLS_API int32_t GetRotationAngle();
    /// <summary>
    /// Represents text rotation angle.
    /// </summary>
    /// <remarks><p>0: Not rotated.</p>
    /// <p>255: Top to Bottom.</p>
    /// <p>-90: Downward.</p>
    /// <p>90: Upward.</p>
    /// You can set 255 or value ranged from -90 to 90.</remarks>
    ASPOSE_CELLS_API void SetRotationAngle(int32_t value);
    /// <summary>
    /// Gets or sets the horizontal alignment type of the text in a cell.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetHorizontalAlignment();
    /// <summary>
    /// Gets or sets the horizontal alignment type of the text in a cell.
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets or sets the vertical alignment type of the text in a cell.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetVerticalAlignment();
    /// <summary>
    /// Gets or sets the vertical alignment type of the text in a cell.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets or sets a value indicating whether the text within a cell is wrapped.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextWrapped();
    /// <summary>
    /// Gets or sets a value indicating whether the text within a cell is wrapped.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextWrapped(bool value);
    /// <summary>
    /// Gets or sets the display format of numbers and dates. The formatting patterns are different for different regions.
    /// </summary>
    /// <remarks>
    /// For example, the formatting patterns represented by numbers for en_US region:
    /// <list type="table">
    /// <listheader>
    /// <description>Value</description>
    /// <description>Type</description>
    /// <description>Format String</description>
    /// </listheader>
    /// <item>
    /// <description>0</description>
    /// <description>General</description>
    /// <description><c>General</c></description>
    /// </item>
    /// <item>
    /// <description>1</description>
    /// <description>Decimal</description>
    /// <description><c>0</c></description>
    /// </item>
    /// <item>
    /// <description>2</description>
    /// <description>Decimal</description>
    /// <description><c>0.00</c></description>
    /// </item>
    /// <item>
    /// <description>3</description>
    /// <description>Decimal</description>
    /// <description><c>#,##0</c></description>
    /// </item>
    /// <item>
    /// <description>4</description>
    /// <description>Decimal</description>
    /// <description><c>#,##0.00</c></description>
    /// </item>
    /// <item>
    /// <description>5</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0_);($#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>6</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0_);[Red]($#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>7</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0.00_);($#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>8</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0.00_);[Red]($#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>9</description>
    /// <description>Percentage</description>
    /// <description><c>0%</c></description>
    /// </item>
    /// <item>
    /// <description>10</description>
    /// <description>Percentage</description>
    /// <description><c>0.00%</c></description>
    /// </item>
    /// <item>
    /// <description>11</description>
    /// <description>Scientific</description>
    /// <description><c>0.00E+00</c></description>
    /// </item>
    /// <item>
    /// <description>12</description>
    /// <description>Fraction</description>
    /// <description><c># ?/?</c></description>
    /// </item>
    /// <item>
    /// <description>13</description>
    /// <description>Fraction</description>
    /// <description><c># ??/??</c></description>
    /// </item>
    /// <item>
    /// <description>14</description>
    /// <description>Date</description>
    /// <description><c>m/d/yyyy</c></description>
    /// </item>
    /// <item>
    /// <description>15</description>
    /// <description>Date</description>
    /// <description><c>d-mmm-yy</c></description>
    /// </item>
    /// <item>
    /// <description>16</description>
    /// <description>Date</description>
    /// <description><c>d-mmm</c></description>
    /// </item>
    /// <item>
    /// <description>17</description>
    /// <description>Date</description>
    /// <description><c>mmm-yy</c></description>
    /// </item>
    /// <item>
    /// <description>18</description>
    /// <description>Time</description>
    /// <description><c>h:mm AM/PM</c></description>
    /// </item>
    /// <item>
    /// <description>19</description>
    /// <description>Time</description>
    /// <description><c>h:mm:ss AM/PM</c></description>
    /// </item>
    /// <item>
    /// <description>20</description>
    /// <description>Time</description>
    /// <description><c>h:mm</c></description>
    /// </item>
    /// <item>
    /// <description>21</description>
    /// <description>Time</description>
    /// <description><c>h:mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>22</description>
    /// <description>Time</description>
    /// <description><c>m/d/yyyy h:mm</c></description>
    /// </item>
    /// <item>
    /// <description>37</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0_);(#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>38</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0_);[Red](#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>39</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0.00_);(#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>40</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0.00_);[Red](#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>41</description>
    /// <description>Accounting</description>
    /// <description><c>_(* #,##0_);_(* (#,##0);_(* "-"_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>42</description>
    /// <description>Currency</description>
    /// <description><c>_($* #,##0_);_($* (#,##0);_($* "-"_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>43</description>
    /// <description>Accounting</description>
    /// <description><c>_(* #,##0.00_);_(* (#,##0.00);_(* "-"??_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>44</description>
    /// <description>Currency</description>
    /// <description><c>_($* #,##0.00_);_($* (#,##0.00);_($* "-"??_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>45</description>
    /// <description>Time</description>
    /// <description><c>mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>46</description>
    /// <description>Time</description>
    /// <description><c>[h]:mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>47</description>
    /// <description>Time</description>
    /// <description><c>mm:ss.0</c></description>
    /// </item>
    /// <item>
    /// <description>48</description>
    /// <description>Scientific</description>
    /// <description><c>##0.0E+0</c></description>
    /// </item>
    /// <item>
    /// <description>49</description>
    /// <description>Text</description>
    /// <description><c>@</c></description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetNumber();
    /// <summary>
    /// Gets or sets the display format of numbers and dates. The formatting patterns are different for different regions.
    /// </summary>
    /// <remarks>
    /// For example, the formatting patterns represented by numbers for en_US region:
    /// <list type="table">
    /// <listheader>
    /// <description>Value</description>
    /// <description>Type</description>
    /// <description>Format String</description>
    /// </listheader>
    /// <item>
    /// <description>0</description>
    /// <description>General</description>
    /// <description><c>General</c></description>
    /// </item>
    /// <item>
    /// <description>1</description>
    /// <description>Decimal</description>
    /// <description><c>0</c></description>
    /// </item>
    /// <item>
    /// <description>2</description>
    /// <description>Decimal</description>
    /// <description><c>0.00</c></description>
    /// </item>
    /// <item>
    /// <description>3</description>
    /// <description>Decimal</description>
    /// <description><c>#,##0</c></description>
    /// </item>
    /// <item>
    /// <description>4</description>
    /// <description>Decimal</description>
    /// <description><c>#,##0.00</c></description>
    /// </item>
    /// <item>
    /// <description>5</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0_);($#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>6</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0_);[Red]($#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>7</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0.00_);($#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>8</description>
    /// <description>Currency</description>
    /// <description><c>$#,##0.00_);[Red]($#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>9</description>
    /// <description>Percentage</description>
    /// <description><c>0%</c></description>
    /// </item>
    /// <item>
    /// <description>10</description>
    /// <description>Percentage</description>
    /// <description><c>0.00%</c></description>
    /// </item>
    /// <item>
    /// <description>11</description>
    /// <description>Scientific</description>
    /// <description><c>0.00E+00</c></description>
    /// </item>
    /// <item>
    /// <description>12</description>
    /// <description>Fraction</description>
    /// <description><c># ?/?</c></description>
    /// </item>
    /// <item>
    /// <description>13</description>
    /// <description>Fraction</description>
    /// <description><c># ??/??</c></description>
    /// </item>
    /// <item>
    /// <description>14</description>
    /// <description>Date</description>
    /// <description><c>m/d/yyyy</c></description>
    /// </item>
    /// <item>
    /// <description>15</description>
    /// <description>Date</description>
    /// <description><c>d-mmm-yy</c></description>
    /// </item>
    /// <item>
    /// <description>16</description>
    /// <description>Date</description>
    /// <description><c>d-mmm</c></description>
    /// </item>
    /// <item>
    /// <description>17</description>
    /// <description>Date</description>
    /// <description><c>mmm-yy</c></description>
    /// </item>
    /// <item>
    /// <description>18</description>
    /// <description>Time</description>
    /// <description><c>h:mm AM/PM</c></description>
    /// </item>
    /// <item>
    /// <description>19</description>
    /// <description>Time</description>
    /// <description><c>h:mm:ss AM/PM</c></description>
    /// </item>
    /// <item>
    /// <description>20</description>
    /// <description>Time</description>
    /// <description><c>h:mm</c></description>
    /// </item>
    /// <item>
    /// <description>21</description>
    /// <description>Time</description>
    /// <description><c>h:mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>22</description>
    /// <description>Time</description>
    /// <description><c>m/d/yyyy h:mm</c></description>
    /// </item>
    /// <item>
    /// <description>37</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0_);(#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>38</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0_);[Red](#,##0)</c></description>
    /// </item>
    /// <item>
    /// <description>39</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0.00_);(#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>40</description>
    /// <description>Accounting</description>
    /// <description><c>#,##0.00_);[Red](#,##0.00)</c></description>
    /// </item>
    /// <item>
    /// <description>41</description>
    /// <description>Accounting</description>
    /// <description><c>_(* #,##0_);_(* (#,##0);_(* "-"_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>42</description>
    /// <description>Currency</description>
    /// <description><c>_($* #,##0_);_($* (#,##0);_($* "-"_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>43</description>
    /// <description>Accounting</description>
    /// <description><c>_(* #,##0.00_);_(* (#,##0.00);_(* "-"??_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>44</description>
    /// <description>Currency</description>
    /// <description><c>_($* #,##0.00_);_($* (#,##0.00);_($* "-"??_);_(@_)</c></description>
    /// </item>
    /// <item>
    /// <description>45</description>
    /// <description>Time</description>
    /// <description><c>mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>46</description>
    /// <description>Time</description>
    /// <description><c>[h]:mm:ss</c></description>
    /// </item>
    /// <item>
    /// <description>47</description>
    /// <description>Time</description>
    /// <description><c>mm:ss.0</c></description>
    /// </item>
    /// <item>
    /// <description>48</description>
    /// <description>Scientific</description>
    /// <description><c>##0.0E+0</c></description>
    /// </item>
    /// <item>
    /// <description>49</description>
    /// <description>Text</description>
    /// <description><c>@</c></description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API void SetNumber(int32_t value);
    /// <summary>
    /// Sets the borders of the style.
    /// </summary>
    /// <param name="borderType">The border(s) to be set, can be combination of <see cref="BorderType"/>.</param>
    /// <param name="borderStyle">The style of the border.</param>
    /// <param name="borderColor">The color of the border.</param>
    /// <returns>Whether current border settings have been changed.</returns>
    ASPOSE_CELLS_API bool SetBorder(BorderType borderType, CellBorderType borderStyle, const Aspose::Cells::Color& borderColor);
    /// <summary>
    /// Sets the borders of the style.
    /// </summary>
    /// <param name="borderType">The border(s) to be set, can be combination of <see cref="BorderType"/>.</param>
    /// <param name="borderStyle">The style of the border.</param>
    /// <param name="borderColor">The color of the border.</param>
    /// <returns>Whether current border settings have been changed.</returns>
    ASPOSE_CELLS_API bool SetBorder(BorderType borderType, CellBorderType borderStyle, const CellsColor& borderColor);
    /// <summary>
    /// Gets or sets a value indicating whether a cell can be modified or not.
    /// </summary>
    /// <remarks>Locking cells has no effect unless the worksheet is protected. </remarks>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// Gets or sets a value indicating whether a cell can be modified or not.
    /// </summary>
    /// <remarks>Locking cells has no effect unless the worksheet is protected. </remarks>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// Sets the Custom number format string of a cell.
    /// </summary>
    /// <param name="custom">Custom number format string, should be InvariantCulture pattern.</param>
    /// <param name="builtinPreference">If given Custom number format string matches one of the built-in number formats
    /// corresponding to current regional settings, whether set the number format as built-in instead of Custom.</param>
    ASPOSE_CELLS_API void SetCustom(const U16String& custom, bool builtinPreference);
    /// <summary>
    /// Sets the Custom number format string of a cell.
    /// </summary>
    /// <param name="custom">Custom number format string, should be InvariantCulture pattern.</param>
    /// <param name="builtinPreference">If given Custom number format string matches one of the built-in number formats
    /// corresponding to current regional settings, whether set the number format as built-in instead of Custom.</param>
    ASPOSE_CELLS_API void SetCustom(const char16_t* custom, bool builtinPreference);
    /// <summary>
    /// Represents the custom number format string of this style object.
    /// If the custom number format is not set(For example, the number format is builtin), "" will be returned.
    /// </summary>
    /// <remarks>
    /// The returned custom string is culture-independent.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetCustom();
    /// <summary>
    /// Represents the custom number format string of this style object.
    /// If the custom number format is not set(For example, the number format is builtin), "" will be returned.
    /// </summary>
    /// <remarks>
    /// The returned custom string is culture-independent.
    /// </remarks>
    ASPOSE_CELLS_API void SetCustom(const U16String& value);
    /// <summary>
    /// Represents the custom number format string of this style object.
    /// If the custom number format is not set(For example, the number format is builtin), "" will be returned.
    /// </summary>
    /// <remarks>
    /// The returned custom string is culture-independent.
    /// </remarks>
    ASPOSE_CELLS_API void SetCustom(const char16_t* value);
    /// <summary>
    /// Gets and sets the culture-dependent pattern string for number format.
    /// If no number format has been set for this object, null will be returned.
    /// If number format is builtin, the pattern string corresponding to the builtin number will be returned.
    /// </summary>
    /// <remarks>
    /// For builtin number format, both the pattern content(such as, one builtin date format is "m/d/y" for some locales,
    /// but for some other locales it becomes  "d/m/y") and the format specifier(such as,
    /// some locales is using character other than 'y' to represent the year part for date formatting)
    /// are culture-dependent;
    /// For user specified custom format, only format specifiers are changed according to the culture,
    /// other parts of the formatting pattern will not be modified.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetCultureCustom();
    /// <summary>
    /// Gets and sets the culture-dependent pattern string for number format.
    /// If no number format has been set for this object, null will be returned.
    /// If number format is builtin, the pattern string corresponding to the builtin number will be returned.
    /// </summary>
    /// <remarks>
    /// For builtin number format, both the pattern content(such as, one builtin date format is "m/d/y" for some locales,
    /// but for some other locales it becomes  "d/m/y") and the format specifier(such as,
    /// some locales is using character other than 'y' to represent the year part for date formatting)
    /// are culture-dependent;
    /// For user specified custom format, only format specifiers are changed according to the culture,
    /// other parts of the formatting pattern will not be modified.
    /// </remarks>
    ASPOSE_CELLS_API void SetCultureCustom(const U16String& value);
    /// <summary>
    /// Gets and sets the culture-dependent pattern string for number format.
    /// If no number format has been set for this object, null will be returned.
    /// If number format is builtin, the pattern string corresponding to the builtin number will be returned.
    /// </summary>
    /// <remarks>
    /// For builtin number format, both the pattern content(such as, one builtin date format is "m/d/y" for some locales,
    /// but for some other locales it becomes  "d/m/y") and the format specifier(such as,
    /// some locales is using character other than 'y' to represent the year part for date formatting)
    /// are culture-dependent;
    /// For user specified custom format, only format specifiers are changed according to the culture,
    /// other parts of the formatting pattern will not be modified.
    /// </remarks>
    ASPOSE_CELLS_API void SetCultureCustom(const char16_t* value);
    /// <summary>
    /// Gets the culture-independent pattern string for number format.
    /// If no number format has been set for this object, null will be returned.
    /// If number format is builtin, the pattern string corresponding to the builtin number will be returned.
    /// </summary>
    /// <remarks>
    /// For builtin number formats, the returned pattern content is still culture-dependent,
    /// such as, for some locales it returns "m/d/y" and for some other locales it returns "d/m/y".
    /// The difference from <see cref="CultureCustom"/> is(that is also what culture-independent means):
    /// the format specifiers and separators are kept as standard, such as '/' will always be used as datetime separator
    /// and  "y" will always be used as the "year" part no matter what other special character is used for the specific locale.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetInvariantCustom();
    /// <summary>
    /// Represents if the formula will be hidden when the worksheet is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsFormulaHidden();
    /// <summary>
    /// Represents if the formula will be hidden when the worksheet is protected.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFormulaHidden(bool value);
    /// <summary>
    /// Represents if text automatically shrinks to fit in the available column width.
    /// </summary>
    ASPOSE_CELLS_API bool GetShrinkToFit();
    /// <summary>
    /// Represents if text automatically shrinks to fit in the available column width.
    /// </summary>
    ASPOSE_CELLS_API void SetShrinkToFit(bool value);
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API TextDirectionType GetTextDirection();
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API void SetTextDirection(TextDirectionType value);
    /// <summary>
    /// Indicates if the cells justified or distributed alignment should be used on the last line of text.
    /// </summary>
    /// <remarks>
    /// This is typical for East Asian alignments but not typical in other contexts.
    /// </remarks>
    ASPOSE_CELLS_API bool IsJustifyDistributed();
    /// <summary>
    /// Indicates if the cells justified or distributed alignment should be used on the last line of text.
    /// </summary>
    /// <remarks>
    /// This is typical for East Asian alignments but not typical in other contexts.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsJustifyDistributed(bool value);
    /// <summary>
    /// Indicates whether the cell's value starts with single quote mark.
    /// </summary>
    ASPOSE_CELLS_API bool GetQuotePrefix();
    /// <summary>
    /// Indicates whether the cell's value starts with single quote mark.
    /// </summary>
    ASPOSE_CELLS_API void SetQuotePrefix(bool value);
    /// <summary>
    /// Indicates whether the cell shading is a gradient pattern.
    /// </summary>
    ASPOSE_CELLS_API bool IsGradient();
    /// <summary>
    /// Indicates whether the cell shading is a gradient pattern.
    /// </summary>
    ASPOSE_CELLS_API void SetIsGradient(bool value);
    /// <summary>
    /// Sets the specified fill to a two-color gradient.
    /// </summary>
    /// <param name="color1">One gradient color.</param>
    /// <param name="color2">Two gradient color.</param>
    /// <param name="gradientStyleType">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetTwoColorGradient(const Aspose::Cells::Color& color1, const Aspose::Cells::Color& color2, GradientStyleType gradientStyleType, int32_t variant);
    /// <summary>
    /// Get the two-color gradient setting.
    /// </summary>
    ASPOSE_CELLS_API TwoColorGradient GetTwoColorGradientSetting();
    /// <summary>
    /// Indicates whether the number format is a percent format.
    /// </summary>
    ASPOSE_CELLS_API bool IsPercent();
    /// <summary>
    /// Indicates whether the number format is a date format.
    /// </summary>
    ASPOSE_CELLS_API bool IsDateTime();
    /// <summary>
    /// Convert <see cref="Style"/> to JSON struct data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToJson();
    
};

} }

#endif
