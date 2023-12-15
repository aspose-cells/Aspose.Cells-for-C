// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPE_H
#define ASPOSE_CELLS_DRAWING_SHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/AutoShapeType.h"
#include "Aspose.Cells/ImageType.h"
#include "Aspose.Cells/MsoDrawingType.h"
#include "Aspose.Cells/PlacementType.h"
#include "Aspose.Cells/ShapeAnchorType.h"
#include "Aspose.Cells/ShapeLockType.h"
#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextDirectionType.h"
#include "Aspose.Cells/TextOrientationType.h"
#include "Aspose.Cells/TextOverflowType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GroupShape;
    class LineFormat;
    class FillFormat;
    class ShadowEffect;
    class ReflectionEffect;
    class GlowEffect;
    class ThreeDFormat;
    class MsoFormatPicture;
    class TextEffectFormat;
    class ShapePathCollection;
    class Geometry;
} } }

namespace Aspose { namespace Cells {
    class Hyperlink;
    class Worksheet;
    class Font;
    class StyleFlag;
    class FontSetting;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class FontSettingCollection;
    class TextOptions;
} } } }

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {
    class ActiveXControl;
} } } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing::ActiveXControls;
using namespace Aspose::Cells::Drawing::Texts;
using namespace Aspose::Cells::Rendering;

class Shape_Impl;

/// <summary>
/// Represents the msodrawing object.
/// </summary>
class ASPOSE_CELLS_API2 Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Shape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Shape(Shape_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Shape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Shape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Shape& operator=(const Shape& src);
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
    /// Gets and sets the name of macro.
    /// </summary>
    ASPOSE_CELLS_API U16String GetMacroName();
    /// <summary>
    /// Gets and sets the name of macro.
    /// </summary>
    ASPOSE_CELLS_API void SetMacroName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of macro.
    /// </summary>
    ASPOSE_CELLS_API void SetMacroName(const char16_t* value);
    /// <summary>
    /// Indicates whether the shape only contains an equation.
    /// </summary>
    ASPOSE_CELLS_API bool IsEquation();
    /// <summary>
    /// Indicates whether the shape is smart art.
    /// </summary>
    /// <remarks>
    /// Only for ooxml file.
    /// </remarks>
    ASPOSE_CELLS_API bool IsSmartArt();
    /// <summary>
    /// Brings the shape to the front or sends the shape to back.
    /// </summary>
    /// <param name="orders">
    /// If it's less than zero, sets the shape to back.
    /// If it's greater than zero, brings the shape to front.
    /// </param>
    ASPOSE_CELLS_API void ToFrontOrBack(int32_t orders);
    /// <summary>
    /// Returns the position of a shape in the z-order.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetZOrderPosition();
    /// <summary>
    /// Returns the position of a shape in the z-order.
    /// </summary>
    ASPOSE_CELLS_API void SetZOrderPosition(int32_t value);
    /// <summary>
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the <see cref="Shape"/> object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAlternativeText();
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the <see cref="Shape"/> object.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const U16String& value);
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the <see cref="Shape"/> object.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const char16_t* value);
    /// <summary>
    /// Specifies the title (caption) of the current shape object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTitle();
    /// <summary>
    /// Specifies the title (caption) of the current shape object.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const U16String& value);
    /// <summary>
    /// Specifies the title (caption) of the current shape object.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const char16_t* value);
    /// <summary>
    /// Gets line style
    /// </summary>
    ASPOSE_CELLS_API LineFormat GetLine();
    /// <summary>
    /// Returns a <see cref="FillFormat"/> object that contains fill formatting properties for the specified shape.
    /// </summary>
    ASPOSE_CELLS_API FillFormat GetFill();
    /// <summary>
    /// Represents a <see cref="Drawing.ShadowEffect"/> object that specifies shadow effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect GetShadowEffect();
    /// <summary>
    /// Represents a <see cref="ReflectionEffect"/> object that specifies reflection effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API ReflectionEffect GetReflection();
    /// <summary>
    /// Represents a <see cref="GlowEffect"/> object that specifies glow effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API GlowEffect GetGlow();
    /// <summary>
    /// Gets and sets the radius of blur to apply to the edges, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetSoftEdges();
    /// <summary>
    /// Gets and sets the radius of blur to apply to the edges, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetSoftEdges(double value);
    /// <summary>
    /// Gets and sets 3d format of the shape.
    /// </summary>
    ASPOSE_CELLS_API ThreeDFormat GetThreeDFormat();
    /// <summary>
    /// Gets and sets the options of the picture format.
    /// </summary>
    ASPOSE_CELLS_API MsoFormatPicture GetFormatPicture();
    /// <summary>
    /// Indicates whether the object is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Indicates whether the object is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// True means that don't allow changes in aspect ratio.
    /// </summary>
    ASPOSE_CELLS_API bool IsLockAspectRatio();
    /// <summary>
    /// True means that don't allow changes in aspect ratio.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLockAspectRatio(bool value);
    /// <summary>
    /// Gets the value of locked property.
    /// </summary>
    /// <param name="type">The type of the shape locked property.</param>
    /// <returns>Returns  the value of locked property.</returns>
    ASPOSE_CELLS_API bool GetLockedProperty(ShapeLockType type);
    /// <summary>
    /// Set the locked property.
    /// </summary>
    /// <param name="type">The locked type.</param>
    /// <param name="value">The value of the property.</param>
    ASPOSE_CELLS_API void SetLockedProperty(ShapeLockType type, bool value);
    /// <summary>
    /// Gets and sets the rotation of the shape.
    /// </summary>
    ASPOSE_CELLS_API double GetRotationAngle();
    /// <summary>
    /// Gets and sets the rotation of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotationAngle(double value);
    /// <summary>
    /// Adds a hyperlink to the shape.
    /// </summary>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns>Return the new hyperlink object.</returns>
    ASPOSE_CELLS_API Hyperlink AddHyperlink(const U16String& address);
    /// <summary>
    /// Adds a hyperlink to the shape.
    /// </summary>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns>Return the new hyperlink object.</returns>
    ASPOSE_CELLS_API Hyperlink AddHyperlink(const char16_t* address);
    /// <summary>
    /// Remove the hyperlink of the shape.
    /// </summary>
    ASPOSE_CELLS_API void RemoveHyperlink();
    /// <summary>
    /// Gets the hyperlink of the shape.
    /// </summary>
    ASPOSE_CELLS_API Hyperlink GetHyperlink();
    /// <summary>
    /// Moves the shape to a specified range.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    ASPOSE_CELLS_API void MoveToRange(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn);
    /// <summary>
    /// Moves the picture to the top-right corner.
    /// </summary>
    /// <param name="topRow">the row index.</param>
    /// <param name="rightColumn">the column index.</param>
    ASPOSE_CELLS_API void AlignTopRightCorner(int32_t topRow, int32_t rightColumn);
    /// <summary>
    /// Gets the identifier of this shape.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetId();
    /// <summary>
    /// Specifies an optional string that an application can use to Identify the particular shape.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSpid();
    /// <summary>
    /// Specifies an optional number that an application can use to associate the particular shape with a defined shape type.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSpt();
    /// <summary>
    /// Gets the <see cref="Worksheet"/> object which contains this shape.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Indicates whether the shape is a group.
    /// </summary>
    ASPOSE_CELLS_API bool IsGroup();
    /// <summary>
    /// Indicates whether the shape is grouped.
    /// </summary>
    ASPOSE_CELLS_API bool IsInGroup();
    /// <summary>
    /// Indicates whether this shape is a word art.
    /// </summary>
    /// <remarks>
    /// Only for the Legacy Shape of xls file.
    /// </remarks>
    ASPOSE_CELLS_API bool IsWordArt();
    /// <summary>
    /// Returns a TextEffectFormat object that contains text-effect formatting properties for the specified shape.
    /// Applies to Shape objects that represent WordArt.
    /// </summary>
    ASPOSE_CELLS_API TextEffectFormat GetTextEffect();
    /// <summary>
    /// True if the object is locked, False if the object can be modified when the sheet is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// True if the object is locked, False if the object can be modified when the sheet is protected.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// True if the object is printable
    /// </summary>
    ASPOSE_CELLS_API bool IsPrintable();
    /// <summary>
    /// True if the object is printable
    /// </summary>
    ASPOSE_CELLS_API void SetIsPrintable(bool value);
    /// <summary>
    /// Gets mso drawing type.
    /// </summary>
    ASPOSE_CELLS_API MsoDrawingType GetMsoDrawingType();
    /// <summary>
    /// Gets and sets the auto shape type.
    /// </summary>
    ASPOSE_CELLS_API AutoShapeType GetAutoShapeType();
    /// <summary>
    /// Gets and sets the auto shape type.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoShapeType(AutoShapeType value);
    /// <summary>
    /// Gets and set the shape anchor placeholder.
    /// </summary>
    ASPOSE_CELLS_API ShapeAnchorType GetAnchorType();
    /// <summary>
    /// Gets and set the shape anchor placeholder.
    /// </summary>
    ASPOSE_CELLS_API void SetAnchorType(ShapeAnchorType value);
    /// <summary>
    /// Represents the way the drawing object is attached to the cells below it.
    /// The property controls the placement of an object on a worksheet.
    /// </summary>
    ASPOSE_CELLS_API PlacementType GetPlacement();
    /// <summary>
    /// Represents the way the drawing object is attached to the cells below it.
    /// The property controls the placement of an object on a worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetPlacement(PlacementType value);
    /// <summary>
    /// Represents upper left corner row index.
    /// </summary>
    /// <remarks>If the shape is in the shape or in the group , UpperLeftRow will be ignored.</remarks>
    ASPOSE_CELLS_API int32_t GetUpperLeftRow();
    /// <summary>
    /// Represents upper left corner row index.
    /// </summary>
    /// <remarks>If the shape is in the shape or in the group , UpperLeftRow will be ignored.</remarks>
    ASPOSE_CELLS_API void SetUpperLeftRow(int32_t value);
    /// <summary>
    /// Gets or sets the shape's vertical offset from its upper left corner row.
    /// </summary>
    /// <remarks>The range of value is 0 to 256.</remarks>
    ASPOSE_CELLS_API int32_t GetUpperDeltaY();
    /// <summary>
    /// Gets or sets the shape's vertical offset from its upper left corner row.
    /// </summary>
    /// <remarks>The range of value is 0 to 256.</remarks>
    ASPOSE_CELLS_API void SetUpperDeltaY(int32_t value);
    /// <summary>
    /// Represents upper left corner column index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetUpperLeftColumn();
    /// <summary>
    /// Represents upper left corner column index.
    /// </summary>
    ASPOSE_CELLS_API void SetUpperLeftColumn(int32_t value);
    /// <summary>
    /// Gets or sets the shape's horizontal offset from its upper left corner column.
    /// </summary>
    /// <remarks>The range of value is 0 to 1024.</remarks>
    ASPOSE_CELLS_API int32_t GetUpperDeltaX();
    /// <summary>
    /// Gets or sets the shape's horizontal offset from its upper left corner column.
    /// </summary>
    /// <remarks>The range of value is 0 to 1024.</remarks>
    ASPOSE_CELLS_API void SetUpperDeltaX(int32_t value);
    /// <summary>
    /// Represents lower right corner row index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLowerRightRow();
    /// <summary>
    /// Represents lower right corner row index.
    /// </summary>
    ASPOSE_CELLS_API void SetLowerRightRow(int32_t value);
    /// <summary>
    /// Gets or sets the shape's vertical offset from its lower right corner row.
    /// </summary>
    /// <remarks>The range of value is 0 to 256.</remarks>
    ASPOSE_CELLS_API int32_t GetLowerDeltaY();
    /// <summary>
    /// Gets or sets the shape's vertical offset from its lower right corner row.
    /// </summary>
    /// <remarks>The range of value is 0 to 256.</remarks>
    ASPOSE_CELLS_API void SetLowerDeltaY(int32_t value);
    /// <summary>
    /// Represents lower right corner column index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLowerRightColumn();
    /// <summary>
    /// Represents lower right corner column index.
    /// </summary>
    ASPOSE_CELLS_API void SetLowerRightColumn(int32_t value);
    /// <summary>
    /// Gets or sets the shape's horizontal  offset from its lower right corner column.
    /// </summary>
    /// <remarks>The range of value is 0 to 1024.</remarks>
    ASPOSE_CELLS_API int32_t GetLowerDeltaX();
    /// <summary>
    /// Gets or sets the shape's horizontal  offset from its lower right corner column.
    /// </summary>
    /// <remarks>The range of value is 0 to 1024.</remarks>
    ASPOSE_CELLS_API void SetLowerDeltaX(int32_t value);
    /// <summary>
    /// Represents the width of the shape's horizontal  offset from its lower right corner column, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRight();
    /// <summary>
    /// Represents the width of the shape's horizontal  offset from its lower right corner column, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetRight(int32_t value);
    /// <summary>
    /// Represents the width of the shape's vertical offset from its lower bottom corner row, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBottom();
    /// <summary>
    /// Represents the width of the shape's vertical offset from its lower bottom corner row, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetBottom(int32_t value);
    /// <summary>
    /// Represents the width of shape, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Represents the width of shape, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(int32_t value);
    /// <summary>
    /// Represents the width of the shape, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API double GetWidthInch();
    /// <summary>
    /// Represents the width of the shape, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthInch(double value);
    /// <summary>
    /// Represents the width of the shape, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API double GetWidthPt();
    /// <summary>
    /// Represents the width of the shape, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthPt(double value);
    /// <summary>
    /// Represents the width of the shape, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetWidthCM();
    /// <summary>
    /// Represents the width of the shape, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthCM(double value);
    /// <summary>
    /// Represents the height of shape, in unit of pixel.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Represents the height of shape, in unit of pixel.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(int32_t value);
    /// <summary>
    /// Represents the height of the shape, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetHeightInch();
    /// <summary>
    /// Represents the height of the shape, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightInch(double value);
    /// <summary>
    /// Represents the height of the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeightPt();
    /// <summary>
    /// Represents the height of the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightPt(double value);
    /// <summary>
    /// Represents the height of the shape, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetHeightCM();
    /// <summary>
    /// Represents the height of the shape, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightCM(double value);
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLeft();
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetLeft(int32_t value);
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftInch();
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftInch(double value);
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftCM();
    /// <summary>
    /// Represents the horizontal offset of shape from its left column, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftCM(double value);
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of pixels.
    /// </summary>
    /// <remarks>If the shape is in the chart, represents the vertical offset of shape from its top border.</remarks>
    ASPOSE_CELLS_API int32_t GetTop();
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of pixels.
    /// </summary>
    /// <remarks>If the shape is in the chart, represents the vertical offset of shape from its top border.</remarks>
    ASPOSE_CELLS_API void SetTop(int32_t value);
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetTopInch();
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetTopInch(double value);
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetTopCM();
    /// <summary>
    /// Represents the vertical offset of shape from its top row, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetTopCM(double value);
    /// <summary>
    /// Gets and sets the vertical offset of shape from worksheet top border, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTopToCorner();
    /// <summary>
    /// Gets and sets the vertical offset of shape from worksheet top border, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetTopToCorner(int32_t value);
    /// <summary>
    /// Gets and sets the horizonal offset of shape from worksheet left border.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLeftToCorner();
    /// <summary>
    /// Gets and sets the horizonal offset of shape from worksheet left border.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftToCorner(int32_t value);
    /// <summary>
    /// Gets and sets the horizontal offset of shape from worksheet left border,in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets and sets the horizontal offset of shape from worksheet left border,in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets and sets the vertical offset of shape from worksheet top border,in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets and sets the vertical offset of shape from worksheet top border,in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetY(int32_t value);
    /// <summary>
    /// Gets and sets the width scale, in unit of percent of the original picture width.
    /// If the shape is not picture ,the WidthScale property only returns 100;
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidthScale();
    /// <summary>
    /// Gets and sets the width scale, in unit of percent of the original picture width.
    /// If the shape is not picture ,the WidthScale property only returns 100;
    /// </summary>
    ASPOSE_CELLS_API void SetWidthScale(int32_t value);
    /// <summary>
    /// Gets and sets the height scale,in unit of percent of the original picture height.
    /// If the shape is not picture ,the HeightScale property only returns 100;
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeightScale();
    /// <summary>
    /// Gets and sets the height scale,in unit of percent of the original picture height.
    /// If the shape is not picture ,the HeightScale property only returns 100;
    /// </summary>
    ASPOSE_CELLS_API void SetHeightScale(int32_t value);
    /// <summary>
    /// Represents the vertical offset of shape from the top border of the parent shape,
    /// in unit of 1/4000 of height of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API int32_t GetTopInShape();
    /// <summary>
    /// Represents the vertical offset of shape from the top border of the parent shape,
    /// in unit of 1/4000 of height of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API void SetTopInShape(int32_t value);
    /// <summary>
    /// Represents the horizontal offset of shape from the left border of the parent shape,
    /// in unit of 1/4000 of width of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API int32_t GetLeftInShape();
    /// <summary>
    /// Represents the horizontal offset of shape from the left border of the parent shape,
    /// in unit of 1/4000 of width of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API void SetLeftInShape(int32_t value);
    /// <summary>
    /// Represents the width of the shape, in unit of 1/4000 of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API int32_t GetWidthInShape();
    /// <summary>
    /// Represents the width of the shape, in unit of 1/4000 of the parent shape.
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API void SetWidthInShape(int32_t value);
    /// <summary>
    /// Represents the vertical offset of shape from the top border of the parent shape, in unit of 1/4000 of height of the parent shape..
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API int32_t GetHeightInShape();
    /// <summary>
    /// Represents the vertical offset of shape from the top border of the parent shape, in unit of 1/4000 of height of the parent shape..
    /// </summary>
    /// <remarks>Only Applies when this shape in the group or chart.</remarks>
    ASPOSE_CELLS_API void SetHeightInShape(int32_t value);
    /// <summary>
    /// Gets the group shape which contains this shape.
    /// </summary>
    ASPOSE_CELLS_API GroupShape GetGroup();
    /// <summary>
    /// Gets the auto shape type.
    /// </summary>
    ASPOSE_CELLS_API AutoShapeType GetType();
    /// <summary>
    /// Gets and sets the line border of the shape is visible.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasLine();
    /// <summary>
    /// Gets and sets the line border of the shape is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetHasLine(bool value);
    /// <summary>
    /// Indicates whether the fill format is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsFilled();
    /// <summary>
    /// Indicates whether the fill format is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFilled(bool value);
    /// <summary>
    /// Gets and sets whether shape is horizontally flipped .
    /// </summary>
    ASPOSE_CELLS_API bool IsFlippedHorizontally();
    /// <summary>
    /// Gets and sets whether shape is horizontally flipped .
    /// </summary>
    ASPOSE_CELLS_API void SetIsFlippedHorizontally(bool value);
    /// <summary>
    /// Gets and sets whether shape is vertically flipped .
    /// </summary>
    ASPOSE_CELLS_API bool IsFlippedVertically();
    /// <summary>
    /// Gets and sets whether shape is vertically flipped .
    /// </summary>
    ASPOSE_CELLS_API void SetIsFlippedVertically(bool value);
    /// <summary>
    /// Get the actual bottom row.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetActualLowerRightRow();
    /// <summary>
    /// Creates the shape image and saves it to a stream in the specified format.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    /// <param name="imageType">The type in which to save the image.</param>
    /// <remarks>
    /// <p>The following formats are supported:
    /// .bmp, .gif, .jpg, .jpeg, .tiff, .emf.</p>
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const Vector<uint8_t>& stream, Aspose::Cells::Drawing::ImageType imageType);
    /// <summary>
    /// Saves the shape to a file.
    /// </summary>
    ASPOSE_CELLS_API void ToImage(const U16String& imageFile, const ImageOrPrintOptions& options);
    /// <summary>
    /// Saves the shape to a file.
    /// </summary>
    ASPOSE_CELLS_API void ToImage(const char16_t* imageFile, const ImageOrPrintOptions& options);
    /// <summary>
    /// Saves the shape to a stream.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(const ImageOrPrintOptions& options);
    /// <summary>
    /// Indicates whether shape is relative to original picture size.
    /// </summary>
    ASPOSE_CELLS_API bool GetRelativeToOriginalPictureSize();
    /// <summary>
    /// Indicates whether shape is relative to original picture size.
    /// </summary>
    ASPOSE_CELLS_API void SetRelativeToOriginalPictureSize(bool value);
    /// <summary>
    /// Gets or sets the worksheet range linked to the control's value.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLinkedCell();
    /// <summary>
    /// Gets or sets the worksheet range linked to the control's value.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedCell(const U16String& value);
    /// <summary>
    /// Gets or sets the worksheet range linked to the control's value.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedCell(const char16_t* value);
    /// <summary>
    /// Gets or sets the worksheet range used to fill the specified combo box.
    /// </summary>
    ASPOSE_CELLS_API U16String GetInputRange();
    /// <summary>
    /// Gets or sets the worksheet range used to fill the specified combo box.
    /// </summary>
    ASPOSE_CELLS_API void SetInputRange(const U16String& value);
    /// <summary>
    /// Gets or sets the worksheet range used to fill the specified combo box.
    /// </summary>
    ASPOSE_CELLS_API void SetInputRange(const char16_t* value);
    /// <summary>
    /// Gets the range linked to the control's value.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The range linked to the control's value.</returns>
    ASPOSE_CELLS_API U16String GetLinkedCell(bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the range linked to the control's value.
    /// </summary>
    /// <param name="formula">The range linked to the control's value.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetLinkedCell(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the range linked to the control's value.
    /// </summary>
    /// <param name="formula">The range linked to the control's value.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetLinkedCell(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the range used to fill the control.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The range used to fill the control.</returns>
    ASPOSE_CELLS_API U16String GetInputRange(bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the range used to fill the control.
    /// </summary>
    /// <param name="formula">The range used to fill the control.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetInputRange(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the range used to fill the control.
    /// </summary>
    /// <param name="formula">The range used to fill the control.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetInputRange(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Update the selected value by the value of the linked cell.
    /// </summary>
    ASPOSE_CELLS_API void UpdateSelectedValue();
    /// <summary>
    /// Gets and sets the preset text shape type.
    /// </summary>
    ASPOSE_CELLS_API AutoShapeType GetTextShapeType();
    /// <summary>
    /// Gets and sets the preset text shape type.
    /// </summary>
    ASPOSE_CELLS_API void SetTextShapeType(AutoShapeType value);
    /// <summary>
    /// Gets and sets the setting of the shape's text.
    /// </summary>
    ASPOSE_CELLS_API FontSettingCollection GetTextBody();
    /// <summary>
    /// Represents the font of shape.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Represents the font of shape.
    /// </summary>
    ASPOSE_CELLS_API void SetFont(const Aspose::Cells::Font& value);
    /// <summary>
    /// Represents the text options of the shape.
    /// </summary>
    ASPOSE_CELLS_API TextOptions GetTextOptions();
    /// <summary>
    /// Represents the text options of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetTextOptions(const TextOptions& value);
    /// <summary>
    /// Recalculate the text area
    /// </summary>
    /// <returns>Text's Size in an array(width and height).</returns>
    ASPOSE_CELLS_API Vector<int32_t> CalculateTextSize();
    /// <summary>
    /// Represents the string in this TextBox object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Represents the string in this TextBox object.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Represents the string in this TextBox object.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Whether or not the text is rich text.
    /// </summary>
    ASPOSE_CELLS_API bool IsRichText();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this textbox.
    /// </summary>
    ASPOSE_CELLS_API U16String GetHtmlText();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this textbox.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlText(const U16String& value);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this textbox.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlText(const char16_t* value);
    /// <summary>
    /// Formats some characters with the font setting.
    /// </summary>
    /// <param name="startIndex">The start index.</param>
    /// <param name="length">The length.</param>
    /// <param name="font">The font setting.</param>
    /// <param name="flag">The flag of the font setting.</param>
    ASPOSE_CELLS_API void FormatCharacters(int32_t startIndex, int32_t length, const Aspose::Cells::Font& font, const StyleFlag& flag);
    /// <summary>
    /// Returns a Characters object that represents a range of characters within the text.
    /// </summary>
    /// <param name="startIndex">The index of the start of the character.</param>
    /// <param name="length">The number of characters.</param>
    /// <returns>Characters object.</returns>
    /// <remarks>This method only works on shape with title.</remarks>
    ASPOSE_CELLS_API FontSetting Characters(int32_t startIndex, int32_t length);
    /// <summary>
    /// Returns all Characters objects
    /// that represents a range of characters within the text .
    /// </summary>
    /// <returns>All Characters objects </returns>
    ASPOSE_CELLS_API Vector<FontSetting> GetRichFormattings();
    /// <summary>
    /// Gets and sets the text vertical overflow type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API TextOverflowType GetTextVerticalOverflow();
    /// <summary>
    /// Gets and sets the text vertical overflow type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalOverflow(TextOverflowType value);
    /// <summary>
    /// Gets and sets the text horizontal overflow type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API TextOverflowType GetTextHorizontalOverflow();
    /// <summary>
    /// Gets and sets the text horizontal overflow type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API void SetTextHorizontalOverflow(TextOverflowType value);
    /// <summary>
    /// Gets and sets the text wrapped type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextWrapped();
    /// <summary>
    /// Gets and sets the text wrapped type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextWrapped(bool value);
    /// <summary>
    /// Gets and sets the text orientation type of the shape.
    /// </summary>
    ASPOSE_CELLS_API TextOrientationType GetTextOrientationType();
    /// <summary>
    /// Gets and sets the text orientation type of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetTextOrientationType(TextOrientationType value);
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the shape.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextHorizontalAlignment();
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetTextHorizontalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets and sets the text vertical alignment type of the shape.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextVerticalAlignment();
    /// <summary>
    /// Gets and sets the text vertical alignment type of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets/Sets the direction of the text flow for this object.
    /// </summary>
    ASPOSE_CELLS_API TextDirectionType GetTextDirection();
    /// <summary>
    /// Gets/Sets the direction of the text flow for this object.
    /// </summary>
    ASPOSE_CELLS_API void SetTextDirection(TextDirectionType value);
    /// <summary>
    /// Gets the data of control.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetControlData();
    /// <summary>
    /// Gets the ActiveX control.
    /// </summary>
    ASPOSE_CELLS_API ActiveXControl GetActiveXControl();
    /// <summary>
    /// Remove activeX control.
    /// </summary>
    ASPOSE_CELLS_API void RemoveActiveXControl();
    /// <summary>
    /// Gets the paths of a custom geometric shape.
    /// </summary>
    ASPOSE_CELLS_API ShapePathCollection GetPaths();
    /// <summary>
    /// Gets the geometry
    /// </summary>
    ASPOSE_CELLS_API Geometry GetGeometry();
    /// <summary>
    /// Get the actual position and size of the shape (after applying rotation, flip, etc.)
    /// </summary>
    /// <returns>Return the position and size in the order of x, y, w, h</returns>
    /// <remarks>Note:The interface is not fully functional, especially the location information is not correct.It is recommended not to use this interface until the function is complete.</remarks>
    ASPOSE_CELLS_API Vector<float> GetActualBox();
    /// <summary>
    /// Converting smart art to grouped shapes.
    /// </summary>
    ASPOSE_CELLS_API GroupShape GetResultOfSmartArt();
    
};

} } }

#endif
