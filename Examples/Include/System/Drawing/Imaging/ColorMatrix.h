#ifndef _SYSTEM_DRAWING_IMAGING_COLOR_MATRIX_H_
#define _SYSTEM_DRAWING_IMAGING_COLOR_MATRIX_H_

#include "System/Object.h"
#include "System/Array2D.h"

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API ColorMatrix : public Object
					{
					private:
						float color00;
						float color01;
						float color02;
						float color03;
						float color04;
						float color10;
						float color11;
						float color12;
						float color13;
						float color14;
						float color20;
						float color21;
						float color22;
						float color23;
						float color24;
						float color30;
						float color31;
						float color32;
						float color33;
						float color34;
						float color40;
						float color41;
						float color42;
						float color43;
						float color44;

					public:
						ColorMatrix();
						ColorMatrix(intrusive_ptr<Array2D<float>> matrix);
						virtual ~ColorMatrix();

						float Get(int row, int column);
						void Set(int row, int column, float value);

						float GetMatrix00();
						void SetMatrix00(float value);
						float GetMatrix01();
						void SetMatrix01(float value);
						float GetMatrix02();
						void SetMatrix02(float value);
						float GetMatrix03();
						void SetMatrix03(float value);
						float GetMatrix04();
						void SetMatrix04(float value);
						float GetMatrix10();
						void SetMatrix10(float value);
						float GetMatrix11();
						void SetMatrix11(float value);
						float GetMatrix12();
						void SetMatrix12(float value);
						float GetMatrix13();
						void SetMatrix13(float value);
						float GetMatrix14();
						void SetMatrix14(float value);
						float GetMatrix20();
						void SetMatrix20(float value);
						float GetMatrix21();
						void SetMatrix21(float value);
						float GetMatrix22();
						void SetMatrix22(float value);
						float GetMatrix23();
						void SetMatrix23(float value);
						float GetMatrix24();
						void SetMatrix24(float value);
						float GetMatrix30();
						void SetMatrix30(float value);
						float GetMatrix31();
						void SetMatrix31(float value);
						float GetMatrix32();
						void SetMatrix32(float value);
						float GetMatrix33();
						void SetMatrix33(float value);
						float GetMatrix34();
						void SetMatrix34(float value);
						float GetMatrix40();
						void SetMatrix40(float value);
						float GetMatrix41();
						void SetMatrix41(float value);
						float GetMatrix42();
						void SetMatrix42(float value);
						float GetMatrix43();
						void SetMatrix43(float value);
						float GetMatrix44();
						void SetMatrix44(float value);

						static void* Alloc(intrusive_ptr<ColorMatrix> colorMatrix);
						static void Free(void* colorMatrix);
					};
				}
			}
		}
	}
}
#endif



