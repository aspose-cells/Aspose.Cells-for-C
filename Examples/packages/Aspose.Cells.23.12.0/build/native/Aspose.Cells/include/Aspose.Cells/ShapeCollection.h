// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPECOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/AutoShapeType.h"
#include "Aspose.Cells/ControlType.h"
#include "Aspose.Cells/MsoDrawingType.h"
#include "Aspose.Cells/MsoPresetTextEffect.h"
#include "Aspose.Cells/PlacementType.h"
#include "Aspose.Cells/PresetWordArtStyle.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Shape;
    class CheckBox;
    class TextBox;
    class Spinner;
    class ScrollBar;
    class RadioButton;
    class ListBox;
    class ComboBox;
    class GroupBox;
    class Button;
    class Label;
    class RectangleShape;
    class Oval;
    class LineShape;
    class ArcShape;
    class Picture;
    class OleObject;
    class GroupShape;
} } }

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing::ActiveXControls;

class ShapeCollection_Impl;

/// <summary>
/// Represents all the shape in a worksheet/chart.
/// </summary>
class ShapeCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeCollection(ShapeCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeCollection(const ShapeCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeCollection& operator=(const ShapeCollection& src);
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
    /// Gets the shape object at the specific index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape Get(int32_t index);
    /// <summary>
    /// Gets the shape object by the shape image
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape Get(const U16String& name);
    /// <summary>
    /// Gets the shape object by the shape image
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape Get(const char16_t* name);
    /// <summary>
    /// Adds and copy a shape to the worksheet.
    /// </summary>
    /// <param name="sourceShape"> Source shape.</param>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of checkbox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
    /// <returns>The new shape object index.</returns>
    ASPOSE_CELLS_API Shape AddCopy(const Shape& sourceShape, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left);
    /// <summary>
    /// Adds a checkbox to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of checkbox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
    /// <param name="height">Height of textbox, in unit of pixel.</param>
    /// <param name="width">Width of textbox, in unit of pixel.</param>
    /// <returns>The new CheckBox object index.</returns>
    ASPOSE_CELLS_API CheckBox AddCheckBox(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a text box to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of textbox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of textbox from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of textbox, in unit of pixel. </param>
    /// <param name="width">Represents the width of textbox, in unit of pixel. </param>
    /// <returns>A <see cref="TextBox"/> object.</returns>
    ASPOSE_CELLS_API TextBox AddTextBox(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Add an equation object to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"></param>
    /// <param name="top"></param>
    /// <param name="upperLeftColumn"></param>
    /// <param name="left"></param>
    /// <param name="height"></param>
    /// <param name="width"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API TextBox AddEquation(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a Spinner to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Spinner from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Spinner from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Spinner, in unit of pixel. </param>
    /// <param name="width">Represents the width of Spinner, in unit of pixel. </param>
    /// <returns>A Spinner object.</returns>
    ASPOSE_CELLS_API Spinner AddSpinner(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a ScrollBar to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of ScrollBar from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of ScrollBar from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of ScrollBar, in unit of pixel. </param>
    /// <param name="width">Represents the width of ScrollBar, in unit of pixel. </param>
    /// <returns>A ScrollBar object.</returns>
    ASPOSE_CELLS_API ScrollBar AddScrollBar(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a RadioButton to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of RadioButton from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of RadioButton from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of RadioButton, in unit of pixel. </param>
    /// <param name="width">Represents the width of RadioButton, in unit of pixel. </param>
    /// <returns>A RadioButton object.</returns>
    ASPOSE_CELLS_API RadioButton AddRadioButton(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a ListBox to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of ListBox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of ListBox from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of ListBox, in unit of pixel. </param>
    /// <param name="width">Represents the width of ListBox, in unit of pixel. </param>
    /// <returns>A ListBox object.</returns>
    ASPOSE_CELLS_API ListBox AddListBox(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a ComboBox to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of ComboBox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of ComboBox from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of ComboBox, in unit of pixel. </param>
    /// <param name="width">Represents the width of ComboBox, in unit of pixel. </param>
    /// <returns>A ComboBox object.</returns>
    ASPOSE_CELLS_API ComboBox AddComboBox(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a GroupBox to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of GroupBox from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of GroupBox from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of GroupBox, in unit of pixel. </param>
    /// <param name="width">Represents the width of GroupBox, in unit of pixel. </param>
    /// <returns>A GroupBox object.</returns>
    ASPOSE_CELLS_API GroupBox AddGroupBox(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a Button to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Button from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Button from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Button, in unit of pixel. </param>
    /// <param name="width">Represents the width of Button, in unit of pixel. </param>
    /// <returns>A Button object.</returns>
    ASPOSE_CELLS_API Button AddButton(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a Label to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Label from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Label from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Label, in unit of pixel. </param>
    /// <param name="width">Represents the width of Label, in unit of pixel. </param>
    /// <returns>A Label object.</returns>
    ASPOSE_CELLS_API Label AddLabel(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a label to the chart.
    /// </summary>
    /// <param name="top">Represents the vertical offset of label from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the vertical offset of label from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="height">Represents the height of label, in units of 1/4000 of the chart area.</param>
    /// <param name="width">Represents the width of label, in units of 1/4000 of the chart area.</param>
    /// <returns>A new Label object.</returns>
    ASPOSE_CELLS_API Label AddLabelInChart(int32_t top, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a textbox to the chart.
    /// </summary>
    /// <param name="top">Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="height">Represents the height of textbox, in units of 1/4000 of the chart area.</param>
    /// <param name="width">Represents the width of textbox, in units of 1/4000 of the chart area.</param>
    /// <returns>A TextBox object.</returns>
    ASPOSE_CELLS_API TextBox AddTextBoxInChart(int32_t top, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Inserts a WordArt object to the chart
    /// </summary>
    /// <param name="effect">The mso preset text effect type.</param>
    /// <param name="text">The WordArt text.</param>
    /// <param name="fontName">The font name.</param>
    /// <param name="size">The font size</param>
    /// <param name="fontBold">Indicates whether font is bold.</param>
    /// <param name="fontItalic">Indicates whether font is italic.</param>
    /// <param name="top">Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="height">Represents the height of shape, in units of 1/4000 of the chart area.</param>
    /// <param name="width">Represents the width of shape, in units of 1/4000 of the chart area.</param>
    /// <returns>Returns a Shape object that represents the new WordArt object.</returns>
    ASPOSE_CELLS_API Shape AddTextEffectInChart(MsoPresetTextEffect effect, const U16String& text, const U16String& fontName, int32_t size, bool fontBold, bool fontItalic, int32_t top, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Inserts a WordArt object to the chart
    /// </summary>
    /// <param name="effect">The mso preset text effect type.</param>
    /// <param name="text">The WordArt text.</param>
    /// <param name="fontName">The font name.</param>
    /// <param name="size">The font size</param>
    /// <param name="fontBold">Indicates whether font is bold.</param>
    /// <param name="fontItalic">Indicates whether font is italic.</param>
    /// <param name="top">Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="height">Represents the height of shape, in units of 1/4000 of the chart area.</param>
    /// <param name="width">Represents the width of shape, in units of 1/4000 of the chart area.</param>
    /// <returns>Returns a Shape object that represents the new WordArt object.</returns>
    ASPOSE_CELLS_API Shape AddTextEffectInChart(MsoPresetTextEffect effect, const char16_t* text, const char16_t* fontName, int32_t size, bool fontBold, bool fontItalic, int32_t top, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Inserts a WordArt object.
    /// </summary>
    /// <param name="effect">The mso preset text effect type.</param>
    /// <param name="text">The WordArt text.</param>
    /// <param name="fontName">The font name.</param>
    /// <param name="size">The font size</param>
    /// <param name="fontBold">Indicates whether font is bold.</param>
    /// <param name="fontItalic">Indicates whether font is italic.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of shape, in unit of pixel. </param>
    /// <returns>Returns a Shape object that represents the new WordArt object.</returns>
    ASPOSE_CELLS_API Shape AddTextEffect(MsoPresetTextEffect effect, const U16String& text, const U16String& fontName, int32_t size, bool fontBold, bool fontItalic, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Inserts a WordArt object.
    /// </summary>
    /// <param name="effect">The mso preset text effect type.</param>
    /// <param name="text">The WordArt text.</param>
    /// <param name="fontName">The font name.</param>
    /// <param name="size">The font size</param>
    /// <param name="fontBold">Indicates whether font is bold.</param>
    /// <param name="fontItalic">Indicates whether font is italic.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of shape, in unit of pixel. </param>
    /// <returns>Returns a Shape object that represents the new WordArt object.</returns>
    ASPOSE_CELLS_API Shape AddTextEffect(MsoPresetTextEffect effect, const char16_t* text, const char16_t* fontName, int32_t size, bool fontBold, bool fontItalic, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds preset WordArt since Excel 2007.s
    /// </summary>
    /// <param name="style">The preset WordArt Style.</param>
    /// <param name="text">The text.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of shape, in unit of pixel. </param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape AddWordArt(PresetWordArtStyle style, const U16String& text, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds preset WordArt since Excel 2007.s
    /// </summary>
    /// <param name="style">The preset WordArt Style.</param>
    /// <param name="text">The text.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of shape, in unit of pixel. </param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape AddWordArt(PresetWordArtStyle style, const char16_t* text, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a RectangleShape to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of RectangleShape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of RectangleShape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of RectangleShape, in unit of pixel. </param>
    /// <param name="width">Represents the width of RectangleShape, in unit of pixel. </param>
    /// <returns>A RectangleShape object.</returns>
    ASPOSE_CELLS_API RectangleShape AddRectangle(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a Oval to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Oval from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Oval from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Oval, in unit of pixel. </param>
    /// <param name="width">Represents the width of Oval, in unit of pixel. </param>
    /// <returns>A Oval object.</returns>
    ASPOSE_CELLS_API Oval AddOval(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a LineShape to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of LineShape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of LineShape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of LineShape, in unit of pixel. </param>
    /// <param name="width">Represents the width of LineShape, in unit of pixel. </param>
    /// <returns>A LineShape object.</returns>
    ASPOSE_CELLS_API LineShape AddLine(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a free floating shape to the worksheet.Only applies for line/image shape.
    /// </summary>
    /// <param name="type">The shape type.</param>
    /// <param name="top">Represents the vertical  offset of shape from the worksheet's top row, in unit of pixel.</param>
    /// <param name="left">Represents the horizontal offset of shape from the worksheet's left column, in unit of pixel.</param>
    /// <param name="height">Represents the height of LineShape, in unit of pixel. </param>
    /// <param name="width">Represents the width of LineShape, in unit of pixel. </param>
    /// <param name="imageData">The image data,only applies for the picture.</param>
    /// <param name="isOriginalSize">Whether the shape use original size if the shape is image.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape AddFreeFloatingShape(MsoDrawingType type, int32_t top, int32_t left, int32_t height, int32_t width, const Vector<uint8_t>& imageData, bool isOriginalSize);
    /// <summary>
    /// Add a shape to chart .All unit is 1/4000 of chart area.
    /// </summary>
    /// <param name="type">The drawing type.</param>
    /// <param name="placement">the placement type.</param>
    /// <param name="left">In unit of 1/4000 chart area width.</param>
    /// <param name="top">In unit of 1/4000 chart area height.</param>
    /// <param name="right">In unit of 1/4000 chart area width.</param>
    /// <param name="bottom">In unit of 1/4000 chart area height.</param>
    /// <param name="imageData">If the shape is not a picture or ole object,imageData should be null.</param>
    ASPOSE_CELLS_API Shape AddShapeInChart(MsoDrawingType type, PlacementType placement, int32_t left, int32_t top, int32_t right, int32_t bottom, const Vector<uint8_t>& imageData);
    /// <summary>
    /// Add a shape to chart .All unit is 1/4000 of chart area.
    /// </summary>
    /// <param name="type">The drawing type.</param>
    /// <param name="placement">the placement type.</param>
    /// <param name="left">In unit of 1/4000 chart area width.</param>
    /// <param name="top">In unit of 1/4000 chart area height.</param>
    /// <param name="right">In unit of 1/4000 chart area width.</param>
    /// <param name="bottom">In unit of 1/4000 chart area height.</param>
    ASPOSE_CELLS_API Shape AddShapeInChart(MsoDrawingType type, PlacementType placement, int32_t left, int32_t top, int32_t right, int32_t bottom);
    /// <summary>
    /// Add a shape to chart. All unit is percent scale of chart area.
    /// </summary>
    /// <param name="type">The drawing type.</param>
    /// <param name="placement">the placement type.</param>
    /// <param name="left">Unit is percent scale of chart area width.</param>
    /// <param name="top">Unit is percent scale of chart area height.</param>
    /// <param name="right">Unit is percent scale of chart area width.</param>
    /// <param name="bottom">Unit is percent scale of chart area height.</param>
    ASPOSE_CELLS_API Shape AddShapeInChartByScale(MsoDrawingType type, PlacementType placement, double left, double top, double right, double bottom);
    /// <summary>
    /// Add a shape to chart .All unit is 1/4000 of chart area.
    /// </summary>
    /// <param name="type">The drawing type.</param>
    /// <param name="placement">the placement type.</param>
    /// <param name="left">Unit is percent scale of chart area width.</param>
    /// <param name="top">Unit is percent scale of chart area height.</param>
    /// <param name="right">Unit is percent scale of chart area width.</param>
    /// <param name="bottom">Unit is percent scale of chart area height.</param>
    /// <param name="imageData">If the shape is not a picture or ole object,imageData should be null.</param>
    ASPOSE_CELLS_API Shape AddShapeInChartByScale(MsoDrawingType type, PlacementType placement, double left, double top, double right, double bottom, const Vector<uint8_t>& imageData);
    /// <summary>
    /// Adds a ArcShape to the worksheet.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of ArcShape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of ArcShape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of ArcShape, in unit of pixel. </param>
    /// <param name="width">Represents the width of ArcShape, in unit of pixel. </param>
    /// <returns>A ArcShape object.</returns>
    ASPOSE_CELLS_API ArcShape AddArc(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a Shape to the worksheet.
    /// </summary>
    /// <param name="type">Mso drawing type.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of Shape, in unit of pixel. </param>
    /// <returns>A Shape object.</returns>
    /// <remarks>The type could not be Chart/Comment/Picture/OleObject/Polygon/DialogBox</remarks>
    ASPOSE_CELLS_API Shape AddShape(MsoDrawingType type, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a AutoShape to the worksheet.
    /// </summary>
    /// <param name="type">Auto shape type.</param>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of Shape, in unit of pixel. </param>
    /// <returns>A Shape object.</returns>
    /// <remarks>The type could not be Chart/Comment/Picture/OleObject/Polygon/DialogBox</remarks>
    ASPOSE_CELLS_API Shape AddAutoShape(AutoShapeType type, int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Adds a AutoShape to the chart.
    /// </summary>
    /// <param name="type">Auto shape type.</param>
    /// <param name="top">Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the vertical offset of textbox from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="height">Represents the height of textbox, in units of 1/4000 of the chart area.</param>
    /// <param name="width">Represents the width of textbox, in units of 1/4000 of the chart area.</param>
    /// <returns>Returns a shape object.</returns>
    /// <remarks>The type could not be Chart/Comment/Picture/OleObject/Polygon/DialogBox</remarks>
    ASPOSE_CELLS_API Shape AddAutoShapeInChart(AutoShapeType type, int32_t top, int32_t left, int32_t height, int32_t width);
    /// <summary>
    /// Creates an Activex Control.
    /// </summary>
    /// <param name="type">The type of the control.</param>
    /// <param name="topRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of Shape from its left row, in unit of pixel. </param>
    /// <param name="leftColumn">Upper left column index.</param>
    /// <param name="left">Represents the horizontal offset of Shape from its left column, in unit of pixel. </param>
    /// <param name="height">Represents the height of Shape, in unit of pixel. </param>
    /// <param name="width">Represents the width of Shape, in unit of pixel. </param>
    /// <returns></returns>
    ASPOSE_CELLS_API Shape AddActiveXControl(ControlType type, int32_t topRow, int32_t top, int32_t leftColumn, int32_t left, int32_t width, int32_t height);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddPicture(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn, const Vector<uint8_t>& stream);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <param name="widthScale">Scale of image width, a percentage.</param>
    /// <param name="heightScale">Scale of image height, a percentage.</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddPicture(int32_t upperLeftRow, int32_t upperLeftColumn, const Vector<uint8_t>& stream, int32_t widthScale, int32_t heightScale);
    /// <summary>
    /// Adds svg image.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical  offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">The horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">The height of shape, in unit of pixel. </param>
    /// <param name="width">The width of shape, in unit of pixel. </param>
    /// <param name="svgData">The svg image data.</param>
    /// <param name="compatibleImageData">Converted image data from svg in order to be compatible with Excel 2016 or lower versions.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddSvg(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width, const Vector<uint8_t>& svgData, const Vector<uint8_t>& compatibleImageData);
    /// <summary>
    /// Adds svg image.
    /// </summary>
    /// <param name="upperLeftRow"> Upper left row index.</param>
    /// <param name="top">Represents the vertical offset of shape from its left row, in unit of pixel. </param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="left">The horizontal offset of shape from its left column, in unit of pixel. </param>
    /// <param name="height">The height of shape, in unit of pixel. </param>
    /// <param name="width">The width of shape, in unit of pixel. </param>
    /// <param name="imageByteData">The image byte data.</param>
    /// <param name="compatibleImageData">Converted image data from svg in order to be compatible with Excel 2016 or lower versions.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddIcons(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width, const Vector<uint8_t>& imageByteData, const Vector<uint8_t>& compatibleImageData);
    /// <summary>
    /// Add a linked picture.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">The height of the shape. In unit of pixels</param>
    /// <param name="width">The width of the shape. In unit of pixels</param>
    /// <param name="sourceFullName">
    /// The path and name of the source file for the linked image</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddLinkedPicture(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const U16String& sourceFullName);
    /// <summary>
    /// Add a linked picture.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">The height of the shape. In unit of pixels</param>
    /// <param name="width">The width of the shape. In unit of pixels</param>
    /// <param name="sourceFullName">
    /// The path and name of the source file for the linked image</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddLinkedPicture(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const char16_t* sourceFullName);
    /// <summary>
    /// Add a linked picture.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">The height of the shape. In unit of pixels</param>
    /// <param name="width">The width of the shape. In unit of pixels</param>
    /// <param name="sourceFullName">
    /// The path and name of the source file for the linked image</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API OleObject AddOleObjectWithLinkedImage(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const U16String& sourceFullName);
    /// <summary>
    /// Add a linked picture.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">The height of the shape. In unit of pixels</param>
    /// <param name="width">The width of the shape. In unit of pixels</param>
    /// <param name="sourceFullName">
    /// The path and name of the source file for the linked image</param>
    /// <returns><see cref="Picture"/> Picture object.</returns>
    ASPOSE_CELLS_API OleObject AddOleObjectWithLinkedImage(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const char16_t* sourceFullName);
    /// <summary>
    /// Adds a picture to the chart.
    /// </summary>
    /// <param name="top">Represents the vertical offset of shape from the upper left corner in units of 1/4000 of the chart area. </param>
    /// <param name="left">Represents the horizontal offset of shape from the upper left corner in units of 1/4000 of the chart area.</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <param name="widthScale">Scale of image width, a percentage.</param>
    /// <param name="heightScale">Scale of image height, a percentage.</param>
    /// <returns>Returns a Picture object.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture AddPictureInChart(int32_t top, int32_t left, const Vector<uint8_t>& stream, int32_t widthScale, int32_t heightScale);
    /// <summary>
    /// Adds an OleObject.
    /// </summary>
    /// <param name="upperLeftRow"></param>
    /// <param name="top"></param>
    /// <param name="upperLeftColumn"></param>
    /// <param name="left"></param>
    /// <param name="height"></param>
    /// <param name="width"></param>
    /// <param name="imageData"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API OleObject AddOleObject(int32_t upperLeftRow, int32_t top, int32_t upperLeftColumn, int32_t left, int32_t height, int32_t width, const Vector<uint8_t>& imageData);
    /// <summary>
    /// Copy all comments in the range.
    /// </summary>
    /// <param name="shapes">The source shapes.</param>
    /// <param name="ca">The source range.</param>
    /// <param name="destRow">The dest range start row.</param>
    /// <param name="destColumn">The dest range start column.</param>
    ASPOSE_CELLS_API void CopyCommentsInRange(const ShapeCollection& shapes, const CellArea& ca, int32_t destRow, int32_t destColumn);
    /// <summary>
    /// Copy shapes in the range to destination range.
    /// </summary>
    /// <param name="sourceShapes">Source shapes.</param>
    /// <param name="ca">The source range.</param>
    /// <param name="destRow">The dest row index of the dest range.</param>
    /// <param name="destColumn">The dest column of the dest range.</param>
    /// <param name="isContained">Whether only copy the shapes which are contained in the range.
    /// If true,only copies the shapes in the range.
    /// Otherwise,it works as MS Office.</param>
    ASPOSE_CELLS_API void CopyInRange(const ShapeCollection& sourceShapes, const CellArea& ca, int32_t destRow, int32_t destColumn, bool isContained);
    /// <summary>
    /// Delete shapes in the range.Comment shapes will not be deleted.
    /// </summary>
    /// <param name="ca">The range.If the shapes are contained in the range, they will be removed.</param>
    ASPOSE_CELLS_API void DeleteInRange(const CellArea& ca);
    /// <summary>
    /// Delete a shape. If the shape is in the group or is a comment shape, it will not be deleted.
    /// </summary>
    /// <param name="shape"></param>
    ASPOSE_CELLS_API void DeleteShape(const Shape& shape);
    /// <summary>
    /// Group the shapes.
    /// </summary>
    /// <param name="groupItems">the group items.</param>
    /// <returns>Return the group shape.</returns>
    /// <remarks>
    /// The shape in the groupItems should not be grouped.
    /// The shape must be in this Shapes collection.</remarks>
    ASPOSE_CELLS_API GroupShape Group(const Vector<Shape>& groupItems);
    /// <summary>
    /// Ungroups the shape items.
    /// </summary>
    /// <param name="group">The group shape.</param>
    /// <remarks>If the group shape is grouped by another group shape,nothing will be done.</remarks>
    ASPOSE_CELLS_API void Ungroup(const GroupShape& group);
    /// <summary>
    /// Remove the shape.
    /// </summary>
    /// <param name="index">The index of the shape.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Remove the shape.
    /// </summary>
    /// <param name="shape"></param>
    ASPOSE_CELLS_API void Remove(const Shape& shape);
    /// <summary>
    /// Clear all shapes.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Update the selected value by the value of the linked cell of the shapes.
    /// </summary>
    ASPOSE_CELLS_API void UpdateSelectedValue();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
