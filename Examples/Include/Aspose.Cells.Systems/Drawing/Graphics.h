#ifndef _SYSTEM_DRAWING_GRAPHICS_H_
#define _SYSTEM_DRAWING_GRAPHICS_H_

#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/SizeF.h"
#include "Aspose.Cells.Systems/Drawing/FontPal.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/GdipFuns.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/FillMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsPath.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/FlushIntention.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsState.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/CombineMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/SmoothingMode.h"
#include "Aspose.Cells.Systems/Drawing/Text/TextRenderingHint.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageAttributes.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/CoordinateSpace.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/CompositingQuality.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/InterpolationMode.h"

using namespace Gdiplus::DllExports;
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing;

namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
	class Image;
	class Pen;
	class Rectangle;
	class RectangleF;
	class Point;
	class PointF;
	class Color;
	class GraphicsPath;
	class Region;
	class FontPal;
	class ASPOSE_CELLS_API Graphics : public Object, public IDisposable
	{
	private: 
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeObject;
		bool disposed;
		HDC deviceContextHdc;
		static float defDpiX;
		static float defDpiY;
		GpRegion** native_regions;//in MeasureCharacterRanges function

		void ReleaseHdcInternal(HDC& hdc);

	public:
		Graphics();
		Graphics(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> gdipNativeGraphics);
		void InitVars();

		void Clear(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color);
		void Close();
		void Dispose();
		void DrawArc(intrusive_ptr<Pen> pen, intrusive_ptr<Rectangle> rect, float startAngle, float sweepAngle);
		void DrawArc(intrusive_ptr<Pen> pen, intrusive_ptr<RectangleF> rect, float startAngle, float sweepAngle);
		void DrawArc(intrusive_ptr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
		// Microsoft documentation states that the signature for this member should be
		// public void DrawArc( Pen pen,  int x,  int y,  int width,  int height,   int startAngle,
		// int sweepAngle. However, GdipDrawArcI uses also float for the startAngle and sweepAngle params
		void DrawArc(intrusive_ptr<Pen> pen, int x, int y, int width, int height, int startAngle, int sweepAngle);
		void DrawBezier(intrusive_ptr<Pen> pen, intrusive_ptr<Point> pt1, intrusive_ptr<Point> pt2, intrusive_ptr<Point> pt3, intrusive_ptr<Point> pt4);
		void DrawBezier(intrusive_ptr<Pen> pen, intrusive_ptr<PointF> pt1, intrusive_ptr<PointF> pt2, intrusive_ptr<PointF> pt3, intrusive_ptr<PointF> pt4);
		void DrawBezier(intrusive_ptr<Pen> pen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
		void DrawBeziers(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void DrawBeziers(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void DrawClosedCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void DrawClosedCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		// according to MSDN fillmode "is required but ignored" which makes _some_ sense since the unmanaged 
		// GDI+ call doesn't support it (issue spotted using Gendarme's AvoidUnusedParametersRule)
		void DrawClosedCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, float tension, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode);
		// according to MSDN fillmode "is required but ignored" which makes _some_ sense since the unmanaged 
		// GDI+ call doesn't support it (issue spotted using Gendarme's AvoidUnusedParametersRule)
		void DrawClosedCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, float tension, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, float tension);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, float tension);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, int offset, int numberOfSegments);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, int offset, int numberOfSegments, float tension);
		void DrawCurve(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, int offset, int numberOfSegments, float tension);
	
		void DrawEllipse(intrusive_ptr<Pen> pen, intrusive_ptr<Rectangle> rect);
		void DrawEllipse(intrusive_ptr<Pen> pen, intrusive_ptr<RectangleF> rect);
		void DrawEllipse(intrusive_ptr<Pen> pen, int x, int y, int width, int height);
		void DrawEllipse(intrusive_ptr<Pen> pen, float x, float y, float width, float height);

		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<PointF> point);
		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<Point> point);
		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<RectangleF> rect);
		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<Rectangle> rect);
		void DrawImage(intrusive_ptr<Image> image, int x, int y);
		void DrawImage(intrusive_ptr<Image> image, int x, int y, int width, int height);
		void DrawImage(intrusive_ptr<Aspose::Cells::Systems::Drawing::Image> image, intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF>  destRect,
						   intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF>  srcRect, GraphicsUnit srcUnit);
		void DrawImage(intrusive_ptr<Aspose::Cells::Systems::Drawing::Image> image,intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle>  destRect,
			               intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle>  srcRect,GraphicsUnit srcUnit);
		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit);
		void DrawImage(intrusive_ptr<Image> image, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> destRect,
			               int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageAttributes> imageAttr);

		void DrawImageUnscaled(intrusive_ptr<Image> image, int x, int y);
		void DrawLine(intrusive_ptr<Pen> pen, intrusive_ptr<PointF> pt1, intrusive_ptr<PointF> pt2);
		void DrawLine(intrusive_ptr<Pen> pen, intrusive_ptr<Point>  pt1, intrusive_ptr<Point> pt2);
		void DrawLine(intrusive_ptr<Pen> pen, int x1, int y1, int x2, int y2);
		void DrawLine(intrusive_ptr<Pen> pen, float x1, float y1, float x2, float y2);
		void DrawLines(intrusive_ptr<Pen> pen,
			               intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void DrawLines(intrusive_ptr<Pen> pen,
			               intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void DrawPath(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> path);
		void DrawPie(intrusive_ptr<Pen> pen, intrusive_ptr<Rectangle> rect, float startAngle, float sweepAngle);
		void DrawPie(intrusive_ptr<Pen> pen, intrusive_ptr<RectangleF> rect, float startAngle, float sweepAngle);
		void DrawPie(intrusive_ptr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
		void DrawPie(intrusive_ptr<Pen> pen, int x, int y, int width, int height, int startAngle, int sweepAngle);
		void DrawPolygon(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void DrawPolygon(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void DrawRectangle(intrusive_ptr<Pen> pen, intrusive_ptr<Rectangle> rect);
		void DrawRectangle(intrusive_ptr<Pen> pen, float x, float y, float width, float height);
		void DrawRectangle(intrusive_ptr<Pen> pen, int x, int y, int width, int height);
		void DrawRectangles(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::RectangleF*>> rects);
		void DrawRectangles(intrusive_ptr<Pen> pen, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Rectangle*>> rects);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<RectangleF> layoutRectangle);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::PointF> point);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::PointF> point,
			                intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> format);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, float x, float y);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, float x, float y, 
			                intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> format);
		void DrawString(StringPtr s, intrusive_ptr<FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush,
			                intrusive_ptr<RectangleF> layoutRectangle, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> format);
		void ExcludeClip(intrusive_ptr<Rectangle> rect);
		void ExcludeClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> region);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode, float tension);
		void FillClosedCurve(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillmode, float tension);
		void FillEllipse(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect);
		void FillEllipse(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect);
		void FillEllipse(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, float x, float y, float width, float height);
		void FillEllipse(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, int x, int y, int width, int height); 
		void FillPath(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> path);
		void FillPie(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect, float startAngle, float sweepAngle);
		void FillPie(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, int x, int y, int width, int height, int startAngle, int sweepAngle);
		void FillPie(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, float x, float y, float width, float height, float startAngle, float sweepAngle);
		void FillPolygon(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
		void FillPolygon(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
		void FillPolygon(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode fillMode);
		void FillPolygon(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points, Aspose::Cells::Systems::Drawing::Drawing2D::FillMode  fillMode);
		void FillRectangle(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect);
		void FillRectangle(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect);
		void FillRectangle(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, int x, int y, int width, int height);
		void FillRectangle(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, float x, float y, float width, float height);
		void FillRectangles(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Rectangle* >> rects);
		void FillRectangles(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::RectangleF* >> rects);
		void FillRegion(intrusive_ptr<Aspose::Cells::Systems::Drawing::Brush> brush, intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> region);
		void Flush();
		void Flush(Aspose::Cells::Systems::Drawing::Drawing2D::FlushIntention intention);
		static intrusive_ptr<Graphics> FromHdc(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> hdc);
		static intrusive_ptr<Graphics> FromImage(intrusive_ptr<Image> image);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> GetClipBounds();
		Aspose::Cells::Systems::Drawing::Drawing2D::CompositingQuality GetCompositingQuality();
		void SetCompositingQuality(Aspose::Cells::Systems::Drawing::Drawing2D::CompositingQuality value);
		static Single GetsystemDpiX();
		static Single GetsystemDpiY();
		Single GetDpiX();
		Single GetDpiY();
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetHdc();
		void ReleaseHdc();
		void ReleaseHdc(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr>);
		
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetNearestColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color);
		float GetPageScale();
		void SetPageScale(float value);
		Aspose::Cells::Systems::Drawing::GraphicsUnit GetPageUnit();
		void SetPageUnit(Aspose::Cells::Systems::Drawing::GraphicsUnit value);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> GetTransform();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> GetVisibleClipBounds();
		void SetTransform(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> value);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Point> GetRenderingOrigin();
		void SetRenderingOrigin(intrusive_ptr<Aspose::Cells::Systems::Drawing::Point> value);
		int  GetTextContrast();
		void SetTextContrast(int value);
		void IntersectClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> region);
		void IntersectClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect);
		void IntersectClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect);
		bool IsClipEmpty();
		bool IsVisibleClipEmpty();
		bool IsVisible(intrusive_ptr<Aspose::Cells::Systems::Drawing::Point> point);
		bool IsVisible(intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect);
		bool IsVisible(intrusive_ptr<Aspose::Cells::Systems::Drawing::PointF> point);
		bool IsVisible(intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect);
		bool IsVisible(float x, float y);
		bool IsVisible(int x, int y);
		bool IsVisible(float x, float y, float width, float height);
		bool IsVisible(int x, int y, int width, int height);
		intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Region*>>
		MeasureCharacterRanges(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font,
			    intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> layoutRect, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> stringFormat);

		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> gMeasureString(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> graphics, StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font,
			intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> layoutRect, intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> stringFormat);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> layoutArea);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font, int width);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font,
		         intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> layoutArea, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> stringFormat);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font, int width, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> format);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::PointF> origin, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> stringFormat);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> MeasureString(StringPtr text, intrusive_ptr<Aspose::Cells::Systems::Drawing::FontPal> font, intrusive_ptr<Aspose::Cells::Systems::Drawing::SizeF> layoutArea,
			intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> stringFormat, int& charactersFitted, int& linesFilled);
		void MultiplyTransform(intrusive_ptr <Aspose::Cells::Systems::Drawing::Drawing2D::Matrix>  matrix);
		void MultiplyTransform(intrusive_ptr <Aspose::Cells::Systems::Drawing::Drawing2D::Matrix>  matrix, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		void ResetClip();
		void ResetTransform();
		void Restore(intrusive_ptr <Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsState> gstate);
		void RotateTransform(float angle);
		void RotateTransform(float angle, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsState> Save();
		void ScaleTransform(float sx, float sy);
		void ScaleTransform(float sx, float sy, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> GetClip();
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> value);
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect);
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> path);//
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect);//
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g);//
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g, Aspose::Cells::Systems::Drawing::Drawing2D::CombineMode combineMode);//
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> rect, Aspose::Cells::Systems::Drawing::Drawing2D::CombineMode combineMode);//
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::RectangleF> rect, Aspose::Cells::Systems::Drawing::Drawing2D::CombineMode combineMode);
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Region> region, Aspose::Cells::Systems::Drawing::Drawing2D::CombineMode combineMode);
		void SetClip(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> path, Aspose::Cells::Systems::Drawing::Drawing2D::CombineMode combineMode);
		Aspose::Cells::Systems::Drawing::Drawing2D::SmoothingMode GetSmoothingMode();
		void SetSmoothingMode(Aspose::Cells::Systems::Drawing::Drawing2D::SmoothingMode value);
		Aspose::Cells::Systems::Drawing::Text::TextRenderingHint GetTextRenderingHint();
		void SetTextRenderingHint(Aspose::Cells::Systems::Drawing::Text::TextRenderingHint value);
		void TransformPoints(Aspose::Cells::Systems::Drawing::Drawing2D::CoordinateSpace destSpace, Aspose::Cells::Systems::Drawing::Drawing2D::CoordinateSpace srcSpace,
			 intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> pts);
		void TransformPoints(Aspose::Cells::Systems::Drawing::Drawing2D::CoordinateSpace destSpace, Aspose::Cells::Systems::Drawing::Drawing2D::CoordinateSpace srcSpace,
			 intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> pts);
		void TranslateClip(int dx, int dy);
		void TranslateClip(float dx, float dy);
		void TranslateTransform(float dx, float dy);
		void TranslateTransform(float dx, float dy, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		//static void* FromPointToUnManagedMemory(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>>);
		//static void* FromPointToUnManagedMemoryI(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>>);
		//static void  FromUnManagedMemoryToPoint(void* prt, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>>);
		//static void  FromUnManagedMemoryToPointI(void* prt, intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>>);
		Drawing2D::InterpolationMode GetInterpolationMode();
		void SetInterpolationMode(Drawing2D::InterpolationMode value);


		~Graphics();
		virtual void add_ref() {++ref_count_;}
		virtual int  release_ref() {return --ref_count_;}
	};

}
}
}
}
#endif
