#ifndef _SYSTEM_DRAWING_IMAGING_BITMAPDATA_H_
#define _SYSTEM_DRAWING_IMAGING_BITMAPDATA_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/PixelFormat.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems{
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API BitmapData : public Object
					{
						private:
							Int32 width;
							Int32 height;
							Int32 stride;
							PixelFormat	pixel_format;
							intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> Scan0; 
							Int32 		reserved;

						public:		
							BitmapData() : width(0), height(0), stride(0), pixel_format(PixelFormat_DontCare), reserved(0) 
							{
								Scan0 = NEW Aspose::Cells::Systems::IntegerPtr();
							}

							BitmapData(Int32 width, Int32 height, Int32 stride, Systems::Drawing::Imaging::PixelFormat pixel_format, intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> Scan0, Int32 reserved)
							{
								this->width = width;
								this->height = height;
								this->stride = stride;
								this->pixel_format = pixel_format;
								this->Scan0 = Scan0;
								this->reserved = reserved;
							}
							virtual ~BitmapData() {
							}

							Int32 GetWidth() {
								return width;
							}
							
							void SetWidth(Int32 value) {
								width = value;
							}

							Int32 GetHeight() {
								return height;
							}
							
							void SetHeight(Int32 value) {
								height = value;
							}
							
							Int32 GetStride() {
								return stride;
							}
							
							void SetStride(Int32 value) {
								stride = value;
							}
							
							intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetScan0() {
								return Scan0;
							}
							
							void SetScan0(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> value) {
								Scan0 = value;
							}

							PixelFormat	GetPixelFormat() {
								return pixel_format;
							}

							void SetPixelFormat(Systems::Drawing::Imaging::PixelFormat value) {
								pixel_format = value;
							}

							Int32 GetReserved() {
								return reserved;
							}
							
							void SetReserved (Int32 value) {
								reserved = value;
							}

					};
				}
			}
		}
	}
}
#endif
