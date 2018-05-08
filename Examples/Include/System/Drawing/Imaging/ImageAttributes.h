#ifndef _SYSTEM_DRAWING_IMAGING_IMAGINGATTRIBUTES_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGINGATTRIBUTES_H_

#include <windows.h>
#include <gdiplus.h>

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/ICloneable.h"
#include "System/IntPtr.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Imaging/ColorAdjustType.h"
#include "System/Drawing/Imaging/ColorMatrix.h"
#include "System/Drawing/Imaging/ColorMatrixFlags.h"
#include "System/Drawing/Imaging/ColorPalette.h"
#include "System/Drawing/Imaging/ColorMap.h"
#include "System/Drawing/Imaging/ColorChannelFlags.h"
#include "System/Drawing/Drawing2D/WrapMode.h"

using namespace Gdiplus;
using namespace Gdiplus::DllExports;
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ImageAttributes : public Object, public ICloneable, public IDisposable
					{
					private:
						//Gdiplus::GpImageAttributes* nativeImageAttr;
						intrusive_ptr<IntPtr> nativeImageAttr;
					public:
						ImageAttributes(intrusive_ptr<IntPtr> native);
						ImageAttributes();
						virtual ~ImageAttributes();
						void Dispose();

						intrusive_ptr<IntPtr> GetNativeObject();
						ObjectPtr Clone();

						void ClearBrushRemapTable();
						void ClearColorKey();
						void ClearColorKey(ColorAdjustType type);
						void ClearColorMatrix();
						void ClearColorMatrix(ColorAdjustType type);
						void ClearGamma();
						void ClearGamma(ColorAdjustType type);
						void ClearNoOp();
						void ClearNoOp(ColorAdjustType type);
						void ClearOutputChannel();
						void ClearOutputChannel(ColorAdjustType type);
						void ClearOutputChannelColorProfile();
						void ClearOutputChannelColorProfile(ColorAdjustType type);
						void ClearRemapTable();
						void ClearRemapTable(ColorAdjustType type);
						void ClearThreshold();
						void ClearThreshold(ColorAdjustType type);
						void SetColorKey(intrusive_ptr<Aspose::Cells::System::Drawing::Color> colorLow, intrusive_ptr<Aspose::Cells::System::Drawing::Color> colorHigh);
						void SetColorMatrix(intrusive_ptr<ColorMatrix> colorMatrix);
						void SetColorMatrix(intrusive_ptr<ColorMatrix> colorMatrix, ColorMatrixFlags colorMatrixFlag);
						void SetColorMatrix(intrusive_ptr<ColorMatrix> colorMatrix, ColorMatrixFlags colorMatrixFlag, ColorAdjustType colorAdjustType);
						void GetAdjustedPalette(ColorPalette palette, ColorAdjustType type);
						void SetBrushRemapTable(intrusive_ptr<Array1D<ColorMap*>> map);
						void SetColorKey(intrusive_ptr<Aspose::Cells::System::Drawing::Color> colorLow, intrusive_ptr<Aspose::Cells::System::Drawing::Color> colorHigh, ColorAdjustType type);
						void SetColorMatrices(intrusive_ptr<ColorMatrix> newColorMatrix, intrusive_ptr<ColorMatrix> grayMatrix);
						void SetColorMatrices(intrusive_ptr<ColorMatrix> newColorMatrix, intrusive_ptr<ColorMatrix> grayMatrix, ColorMatrixFlags flags);
						void SetColorMatrices(intrusive_ptr<ColorMatrix> newColorMatrix, intrusive_ptr<ColorMatrix> grayMatrix, ColorMatrixFlags mode, ColorAdjustType type);
						void SetGamma(float gamma);
						void SetGamma(float gamma, ColorAdjustType coloradjust);
						void SetNoOp();
						void SetNoOp(ColorAdjustType type);
						void SetOutputChannel(ColorChannelFlags flags);
						void SetOutputChannel(ColorChannelFlags flags, ColorAdjustType type);
						void SetOutputChannelColorProfile(StringPtr colorProfileFilename);
						void SetOutputChannelColorProfile(StringPtr colorProfileFilename, ColorAdjustType type);
						void SetRemapTable(intrusive_ptr<Array1D<ColorMap*>> map);
						void SetRemapTable(intrusive_ptr<Array1D<ColorMap*>> map, ColorAdjustType type);
						void SetThreshold(float threshold);
						void SetThreshold(float threshold, ColorAdjustType type);
						void SetWrapMode(Aspose::Cells::System::Drawing::Drawing2D::WrapMode mode);
						void SetWrapMode(Aspose::Cells::System::Drawing::Drawing2D::WrapMode mode, intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
						void SetWrapMode(Aspose::Cells::System::Drawing::Drawing2D::WrapMode mode, intrusive_ptr<Aspose::Cells::System::Drawing::Color> color, bool clamp);

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