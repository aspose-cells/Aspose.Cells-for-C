#ifndef _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATH_H_
#define _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Drawing/Point.h"
#include "Aspose.Cells.Systems/Drawing/PointF.h"
#include "Aspose.Cells.Systems/Drawing/RectangleF.h"
#include "Aspose.Cells.Systems/Drawing/Pen.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/FillMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/Matrix.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/PathData.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/StringFormat.h"
#include "Aspose.Cells.Systems/Drawing/FontFamily.h"
#include "Aspose.Cells.Systems/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
//#include <gdiplustypes.h>////
//#include <gdiplusgpstubs.h>////
//using namespace Gdiplus;
using namespace Gdiplus::DllExports;

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing ;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D ;

namespace Aspose { 
	namespace Cells { 
		namespace Systems{
			namespace Drawing {
				namespace Drawing2D {
					class  GraphicsPath : public Object, public ICloneable, public IDisposable
					{	
						private:
							const float FlatnessDefault = 1.0f / 4.0f;
							void InitVars();
							void* pValue = NULL;
						public:
							intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativePath;
							GraphicsPath();
							GraphicsPath(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
							GraphicsPath(FillMode fillMode);
							GraphicsPath(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> pts, intrusive_ptr<Aspose::Cells::Systems::Array1D<byte>> types);

							GraphicsPath(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> pts, intrusive_ptr<Aspose::Cells::Systems::Array1D<byte>> types);
							GraphicsPath(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> pts, intrusive_ptr<Aspose::Cells::Systems::Array1D<byte>> types, FillMode fillMode);
							GraphicsPath(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> pts, intrusive_ptr<Aspose::Cells::Systems::Array1D<byte>> types, FillMode fillMode);
							intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
							void SetNativeObject(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> value);
							//AddArc
							void AddArc(intrusive_ptr<Rectangle> rect, float start_angle, float sweep_angle);
							void AddArc(intrusive_ptr<RectangleF> rect, float start_angle, float sweep_angle);
							void AddArc(int x, int y, int width, int height, float start_angle, float sweep_angle);
							void AddArc(float x, float y, float width, float height, float start_angle, float sweep_angle);
							//
							// AddLine
							//
							void AddLine(intrusive_ptr<Point> a, intrusive_ptr<Point> b);
							void AddLine(intrusive_ptr<PointF> a, intrusive_ptr<PointF> b);
							void AddLine(int x1, int y1, int x2, int y2);
							void AddLine(float x1, float y1, float x2, float y2);
							void AddLines(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
							void AddLines(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
							//
							// AddPie
							//
							void AddPie(intrusive_ptr<Rectangle> rect, float startAngle, float sweepAngle);
							void AddPie(int x, int y, int width, int height, float startAngle, float sweepAngle);
							void AddPie(float x, float y, float width, float height, float startAngle, float sweepAngle);
							// AddPolygon
							//
							void AddPolygon(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Point*>> points);
							void AddPolygon(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF*>> points);
							//
							// AddRectangle
							//
							void AddRectangle(intrusive_ptr<Rectangle> rect);
							void AddRectangle(intrusive_ptr<RectangleF> rect);
							//
							// AddBezier
							//
							void AddBezier(intrusive_ptr<Point> pt1, intrusive_ptr<Point> pt2, intrusive_ptr<Point> pt3, intrusive_ptr<Point> pt4);
							void AddBezier(intrusive_ptr<PointF> pt1, intrusive_ptr<PointF> pt2, intrusive_ptr<PointF> pt3, intrusive_ptr<PointF> pt4);
							void AddBezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
							void AddBezier(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
							//
							// AddBeziers
							//
							void AddBeziers(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF *>> pts);
							// AddCurve
							//
							void AddCurve(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::PointF *>> points);
							//
							// AddEllipse
							//
							void AddEllipse(intrusive_ptr<RectangleF> r);
							void AddEllipse(float x, float y, float width, float height);
							void AddEllipse(intrusive_ptr<Rectangle>  r);	 
							// AddPath
							//
							void AddPath(intrusive_ptr<GraphicsPath> addingPath, bool connect);
							//
							// AddString
							//
							//[MonoTODO("The StringFormat parameter is ignored when using libgdiplus.")]
							void AddString(StringPtr s, intrusive_ptr<FontFamily> family, int style, float emSize, intrusive_ptr<Point> origin, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat>  format);
							void AddString(StringPtr s, intrusive_ptr<FontFamily> family, int style, float emSize, intrusive_ptr<PointF> origin, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat> format);

							//[MonoTODO("The layoutRect and StringFormat parameters are ignored when using libgdiplus.")]
							void AddString(StringPtr s, intrusive_ptr<FontFamily> family, int style,  float emSize, intrusive_ptr<Rectangle> layoutRect, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat>  format);
							void AddString(StringPtr s, intrusive_ptr<FontFamily>  family, int style, float emSize, intrusive_ptr<RectangleF> layoutRect, intrusive_ptr<Aspose::Cells::Systems::Drawing::StringFormat>  format);

							void CloseFigure();
							void CloseAllFigures();
							intrusive_ptr<RectangleF> GetBounds();
							intrusive_ptr<RectangleF> GetBounds(intrusive_ptr<Matrix> matrix);
							intrusive_ptr<RectangleF> GetBounds(intrusive_ptr<Matrix> matrix, intrusive_ptr<Pen> pen);
							intrusive_ptr<PointF> GetLastPoint();
							intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::PathData> GetPathData();
							int GetPointCount();
							intrusive_ptr<Aspose::Cells::Systems::Array1D<PointF*>> GetPathPoints();
							intrusive_ptr<Aspose::Cells::Systems::Array1D<byte>> GetPathTypes();
							void StartFigure();
							void Widen(intrusive_ptr<Pen> pen);
							void Widen(intrusive_ptr<Pen> pen, intrusive_ptr<Matrix>  matrix);
							void Widen(intrusive_ptr<Pen> pen, intrusive_ptr<Matrix> matrix, float flatness);
							void Transform(intrusive_ptr<Matrix>  matrix);
							ObjectPtr Clone();
							void Dispose();
							void Dispose(bool disposing);
							virtual void add_ref() 
							{
								++ref_count_;
							}

							virtual int release_ref() 
							{
								return --ref_count_;
							}

							~GraphicsPath();
					};
				}
			}
		}
	}
}
#endif
