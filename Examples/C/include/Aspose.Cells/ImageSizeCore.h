#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#define STATIC_IMAGESIZECORE() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class ImageSizeCore : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 ImageSizeCore();
			Aspose::Cells::System::Int32 mLeft;
			Aspose::Cells::System::Int32 mTop;
			Aspose::Cells::System::Int32 mWidth;
			Aspose::Cells::System::Int32 mHeight;
			Aspose::Cells::System::Double mHorizontalResolution;
			Aspose::Cells::System::Double mVerticalResolution;
	public:

			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> CreateEmpty();
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> CreateWithResolution(Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Double horizontalResolution , Aspose::Cells::System::Double verticalResolution);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> CreateWithResolution(Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 right , Aspose::Cells::System::Int32 bottom , Aspose::Cells::System::Double horizontalResolution , Aspose::Cells::System::Double verticalResolution);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> CreateWithDimensions(Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 right , Aspose::Cells::System::Int32 bottom , Aspose::Cells::System::Int32 widthEmus , Aspose::Cells::System::Int32 heightEmus);
			 ImageSizeCore(Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Double horizontalResolution , Aspose::Cells::System::Double verticalResolution);
			Aspose::Cells::System::Int32 GetLeft();
			void SetLeft(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetTop();
			void SetTop(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetRight();
			Aspose::Cells::System::Int32 GetBottom();
			Aspose::Cells::System::Int32 GetWidth();
			void SetWidth(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetHeight();
			void SetHeight(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetHorizontalResolution();
			void SetHorizontalResolution(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetVerticalResolution();
			void SetVerticalResolution(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWidthPoints();
			Aspose::Cells::System::Double GetHeightPoints();
			Aspose::Cells::System::Int32 GetWidthEmus();
			Aspose::Cells::System::Int32 GetHeightEmus();
			Aspose::Cells::System::Int32 GetWidthTwips();
			Aspose::Cells::System::Int32 GetHeightTwips();
		public:
			virtual ~ImageSizeCore();
	};

}

}

}

}
