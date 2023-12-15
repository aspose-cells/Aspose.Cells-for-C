// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSODRAWINGTYPE_H
#define ASPOSE_CELLS_DRAWING_MSODRAWINGTYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Represents office drawing objects type.
/// </summary>
enum class MsoDrawingType {
    /// <summary>
    /// Group
    /// </summary>
    Group = 0,
    /// <summary>
    /// Line
    /// </summary>
    Line = 1,
    /// <summary>
    /// Rectangle
    /// </summary>
    Rectangle = 2,
    /// <summary>
    /// Oval
    /// </summary>
    Oval = 3,
    /// <summary>
    /// Arc
    /// </summary>
    Arc = 4,
    /// <summary>
    /// Chart
    /// </summary>
    Chart = 0x05,
    /// <summary>
    /// TextBox
    /// </summary>
    TextBox = 0x06,
    /// <summary>
    /// Button
    /// </summary>
    Button = 0x07,
    /// <summary>
    /// Picture
    /// </summary>
    Picture = 0x08,
    /// <summary>
    /// Polygon
    /// </summary>
    Polygon = 0x09,
    /// <summary>
    /// CheckBox
    /// </summary>
    CheckBox = 0x0B,
    /// <summary>
    /// RadioButton
    /// </summary>
    RadioButton = 0x0C,
    /// <summary>
    /// Label
    /// </summary>
    Label = 0x0E,
    /// <summary>
    /// DialogBox
    /// </summary>
    Dialog_Box = 0x0F,
    /// <summary>
    /// Spinner
    /// </summary>
    Spinner = 0x10,
    /// <summary>
    /// ScrollBar
    /// </summary>
    ScrollBar = 0x11,
    /// <summary>
    /// ListBox
    /// </summary>
    ListBox = 0x12,
    /// <summary>
    /// GroupBox
    /// </summary>
    GroupBox = 0x13,
    /// <summary>
    /// ComboBox
    /// </summary>
    ComboBox = 0x14,
    /// <summary>
    /// Comment
    /// </summary>
    Comment = 0x19,
    /// <summary>
    /// OleObject
    /// </summary>
    OleObject = 0x18,
    /// <summary>
    /// Only for preserving the drawing object in the template file.
    /// </summary>
    CellsDrawing = 0x1E,
    /// <summary>
    /// Only for preserving the drawing object in the xlsx file.
    /// </summary>
    Unknown = 0x1D,
    /// <summary>
    /// Slicer
    /// </summary>
    Slicer = 0x1F,
    /// <summary>
    /// Web extension
    /// </summary>
    WebExtension = 0x20,
    /// <summary>
    /// Smart Art
    /// </summary>
    SmartArt = 0x21,
    /// <summary>
    /// Custom xml shape ,such as Ink.
    /// </summary>
    CustomXml = 0x22,
    /// <summary>
    /// Timeline
    /// </summary>
    Timeline = 0x23,
    /// <summary>
    /// 3D Model
    /// </summary>
    Model3D,
};

} } }

#endif
