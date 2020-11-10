#ifndef _SYSTEM_DRAWING_PEN_H_
#define _SYSTEM_DRAWING_PEN_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/CustomLineCap.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/DashCap.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/DashStyle.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/PenType.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/LineCap.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/LineJoin.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
namespace Drawing2D {class Matrix;}
	class ASPOSE_CELLS_API Pen : public Object, public ICloneable, public IDisposable
	{
	private:
		intrusive_ptr<Color> _color;
		bool isModifiable;
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::CustomLineCap> startCap;
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::CustomLineCap> endCap;
	public:
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeObject;

		Pen(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> p);
		Pen(intrusive_ptr<Brush> brush, float width);
		Pen(intrusive_ptr<Color> color);
		Pen(intrusive_ptr<Color> color, float width);
		void InitVars();
		intrusive_ptr<Color> GetColor();
		intrusive_ptr<Brush> GetBrush();
		intrusive_ptr<Array1D<float>> GetCompoundArray();
		void SetCompoundArray(intrusive_ptr<Array1D<float>> value);
		void SetCustomEndCap(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::CustomLineCap> value);
		void SetCustomStartCap(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::CustomLineCap> value);
		void SetLineCap(Aspose::Cells::Systems::Drawing::Drawing2D::LineCap startCap, Aspose::Cells::Systems::Drawing::Drawing2D::LineCap endCap, Aspose::Cells::Systems::Drawing::Drawing2D::DashCap dashCap);
		Aspose::Cells::Systems::Drawing::Drawing2D::DashCap GetDashCap();
		void SetDashCap(Aspose::Cells::Systems::Drawing::Drawing2D::DashCap value);
		float GetDashOffset();
		void SetDashOffset(float value);
		intrusive_ptr<Array1D<float>> GetDashPattern();
		void SetDashPattern(intrusive_ptr<Array1D<float>> value);
		Aspose::Cells::Systems::Drawing::Drawing2D::DashStyle GetDashStyle();
		void SetDashStyle(Aspose::Cells::Systems::Drawing::Drawing2D::DashStyle value);
		Aspose::Cells::Systems::Drawing::Drawing2D::LineCap GetStartCap();
		void SetStartCap(Aspose::Cells::Systems::Drawing::Drawing2D::LineCap value);
		Aspose::Cells::Systems::Drawing::Drawing2D::LineCap GetEndCap();
		void SetEndCap(Aspose::Cells::Systems::Drawing::Drawing2D::LineCap value);
		Aspose::Cells::Systems::Drawing::Drawing2D::LineJoin GetLineJoin();
		void SetLineJoin(Aspose::Cells::Systems::Drawing::Drawing2D::LineJoin value);
		float GetMiterLimit();
		void SetMiterLimit(float value);
		Aspose::Cells::Systems::Drawing::Drawing2D::PenType GetPenType();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> GetTransform();
		void SetTransform(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> value);
		float GetWidth();
		void SetWidth(float value);
		ObjectPtr Clone();
		void Dispose();
		void Dispose(bool disposing);
		~Pen(){ Dispose(false); }
		virtual void add_ref() {++ref_count_;}
		virtual int release_ref() {return --ref_count_;}
	};
}
}
}
}
#endif
