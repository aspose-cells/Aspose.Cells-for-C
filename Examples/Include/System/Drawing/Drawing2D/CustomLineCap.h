#ifndef _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_
#define _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Exception.h"
//#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Drawing/Drawing2D/LineCap.h"
#include "System/Drawing/Drawing2D/LineJoin.h"

#include "System/IntPtr.h"
#include "System/Drawing/GdipCallStatus.h"
#include "System/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
using namespace Gdiplus;
using namespace Gdiplus::DllExports;
//#pragma  comment(lib, "gdiplus.lib")

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Drawing2D {
					class GraphicsPath;
					class CustomLineCap: public Object, public ICloneable, public IDisposable /*MarshalByRefObject,@Jack,remove temporary */ 
					{
					public:
					    bool disposed;
						intrusive_ptr<IntPtr> nativeObject; //GpCustomLineCap
						
						CustomLineCap();
						CustomLineCap(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::GraphicsPath> fillPath, intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::GraphicsPath> strokePath, Aspose::Cells::System::Drawing::Drawing2D::LineCap baseCap, Aspose::Cells::System::Single baseInset);
						void InitVars();
						
						ObjectPtr Clone();;
						Aspose::Cells::System::Drawing::Drawing2D::LineCap GetBaseCap();
						void SetBaseCap(LineCap value);
						Aspose::Cells::System::Drawing::Drawing2D::LineJoin GetStrokeJoin();
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