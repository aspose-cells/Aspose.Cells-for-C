#ifndef _SYSTEM_DRAWING_DRAWING2D_MATRIX_H_
#define _SYSTEM_DRAWING_DRAWING2D_MATRIX_H_

#include "System/Object.h"
#include "System/Single.h"
#include "System/IDisposable.h"
#include "System/Array1D.h"
#include "System/Math.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Drawing2D/MatrixOrder.h"
#include "System/IntPtr.h"
#include "System/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
//using namespace Gdiplus;
using namespace Gdiplus::DllExports;
using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API Matrix : public Object, public IDisposable//, public ICloneable
	{
		private:
			intrusive_ptr<IntPtr> nativeMatrix;

	    public:
			// constructors
			Matrix();
			Matrix(intrusive_ptr<IntPtr> ptr);
			Matrix(float m11, float m12, float m21, float m22, float dx, float dy);
			void InitVars();

			intrusive_ptr<Aspose::Cells::System::Array1D<float>> GetElements();
			float GetOffsetX();
			float GetOffsetY();
			void Invert();
			bool IsIdentity();
			void Multiply(intrusive_ptr<Matrix> matrix);
			void Multiply(intrusive_ptr<Matrix> matrix, MatrixOrder order);
			void Rotate(float angle);
			void Rotate(float angle, MatrixOrder order);
			void RotateAt(float angle, intrusive_ptr<PointF> point);
			void RotateAt(float angle, intrusive_ptr<PointF> point, MatrixOrder order);
			void Scale(float scaleX, float scaleY);
			void Scale(float scaleX, float scaleY, MatrixOrder order);
			void Shear(float shearX, float shearY);
			void Shear(float shearX, float shearY, MatrixOrder order);
			void TransformPoints(intrusive_ptr<Aspose::Cells::System::Array1D<Point*>> pts);
			void TransformPoints(intrusive_ptr<Aspose::Cells::System::Array1D<PointF*>> pts);
			void Translate(float offsetX, float offsetY);
			void Translate(float offsetX, float offsetY, MatrixOrder order);
			intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> Clone();
			intrusive_ptr<IntPtr> GetNativeObject();
			void SetNativeObject(intrusive_ptr<IntPtr> value);
			~Matrix()
			{
				Dispose();
			}
			void Dispose();
			virtual void add_ref() {
				++ref_count_;
			}

			virtual int release_ref() {
				return --ref_count_;
			}
			
	};
}
}
}
}
}
#endif
