#pragma once
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	enum GdiRasterOperation 

	{

			GdiRasterOperation_SrcCopy = 0x00CC0020 ,
			GdiRasterOperation_SrcPaint = 0x00EE0086 ,
			GdiRasterOperation_SrcAnd = 0x008800C6 ,
			GdiRasterOperation_SrcInvert = 0x00660046 ,
			GdiRasterOperation_SrcErase = 0x00440328 ,
			GdiRasterOperation_NotSrcCopy = 0x00330008 ,
			GdiRasterOperation_NotSrcErase = 0x001100A6 ,
			GdiRasterOperation_MergeCopy = 0x00C000CA ,
			GdiRasterOperation_MergePaint = 0x00BB0226 ,
			GdiRasterOperation_PatCopy = 0x00F00021 ,
			GdiRasterOperation_PatPaint = 0x00FB0A09 ,
			GdiRasterOperation_PatInvert = 0x005A0049 ,
			GdiRasterOperation_DstInvert = 0x00550009 ,
			GdiRasterOperation_Blackness = 0x00000042 ,
			GdiRasterOperation_Whiteness = 0x00FF0062 ,
			GdiRasterOperation_NoMirrorBitmap = 0x80000000L ,
			GdiRasterOperation_CaptureBlt = 0x40000000 ,
	};


}

}

}

}
