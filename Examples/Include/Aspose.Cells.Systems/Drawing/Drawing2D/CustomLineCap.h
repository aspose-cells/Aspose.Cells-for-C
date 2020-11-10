#ifndef _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_
#define _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Exception.h"
//#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsPath.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/LineCap.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/LineJoin.h"

#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/GdipCallStatus.h"
#include "Aspose.Cells.Systems/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
using namespace Gdiplus;
using namespace Gdiplus::DllExports;
//#pragma  comment(lib, "gdiplus.lib")

namespace Aspose {
	namespace Cells {
		namespace Systems{
			namespace Drawing {
				namespace Drawing2D {
					class GraphicsPath;
					class CustomLineCap: public Object, public ICloneable, public IDisposable /*MarshalByRefObject,@Jack,remove temporary */ 
					{
					public:
					    bool disposed;
						intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeObject; //GpCustomLineCap
						
						CustomLineCap();
						CustomLineCap(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> fillPath, intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> strokePath, Aspose::Cells::Systems::Drawing::Drawing2D::LineCap baseCap, Aspose::Cells::Systems::Single baseInset);
						void InitVars();
						
						ObjectPtr Clone();;
						Aspose::Cells::Systems::Drawing::Drawing2D::LineCap GetBaseCap();
						void SetBaseCap(LineCap value);
						Aspose::Cells::Systems::Drawing::Drawing2D::LineJoin GetStrokeJoin();
						void SetStrokeJoin(LineJoin value);
						void GetStrokeCaps(LineCap &startCap, LineCap& endCap);
						void SetStrokeCaps(LineCap startCap, LineCap endCap);
					//private:
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual void Dispose(bool disposing);
						virtual void Dispose();
						virtual ~CustomLineCap();
					};
				}
			}
		}
	}
}
#endif