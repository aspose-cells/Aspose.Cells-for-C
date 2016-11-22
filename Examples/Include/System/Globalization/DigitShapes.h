#ifndef _SYSTEM_GLOBALIZATION_DIGITSHAPES_H_
#define _SYSTEM_GLOBALIZATION_DIGITSHAPES_H_
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Globalization {
	enum DigitShapes
	{
		/// <summary>The digit shape depends on the previous text in the same output-> European digits follow Latin scripts; Arabic-Indic digits follow Arabic text; and Thai digits follow Thai text-></summary>
		DigitShapes_Context,
		/// <summary>The digit shape is not changed-> Full Unicode compatibility is maintained-></summary>
		DigitShapes_None,
		/// <summary>The digit shape is the native equivalent of the digits from 0 through 9-> ASCII digits from 0 through 9 are replaced by equivalent native national digits-></summary>
		DigitShapes_NativeNational
	};
}
}
}
}
#endif//_SYSTEM_GLOBALIZATION_DIGITSHAPES_H_
