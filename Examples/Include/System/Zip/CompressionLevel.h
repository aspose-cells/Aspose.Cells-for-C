#ifndef _SYSTEM_ZIP_COMPRESSIONLEVEL_H_
#define _SYSTEM_ZIP_COMPRESSIONLEVEL_H_

namespace Aspose {
	namespace Cells {
		namespace OpenXML {
			enum CompressionLevel
			{
				/// <summary>
				/// None means that the data will be simply stored, with no change at all.
				/// If you are producing ZIPs for use on Mac OSX, be aware that archives produced with CompressionLevel.None
				/// cannot be opened with the default zip reader. Use a different CompressionLevel.
				/// </summary>
				CompressionLevel_None = 0,
				/// <summary>
				/// Same as None.
				/// </summary>
				CompressionLevel_Level0 = 0,

				/// <summary>
				/// The fastest but least effective compression.
				/// </summary>
				CompressionLevel_BestSpeed = 1,

				/// <summary>
				/// A synonym for BestSpeed.
				/// </summary>
				CompressionLevel_Level1 = 1,

				/// <summary>
				/// A little slower, but better, than level 1.
				/// </summary>
				CompressionLevel_Level2 = 2,

				/// <summary>
				/// A little slower, but better, than level 2.
				/// </summary>
				CompressionLevel_Level3 = 3,

				/// <summary>
				/// A little slower, but better, than level 3.
				/// </summary>
				CompressionLevel_Level4 = 4,

				/// <summary>
				/// A little slower than level 4, but with better compression.
				/// </summary>
				CompressionLevel_Level5 = 5,

				/// <summary>
				/// The default compression level, with a good balance of speed and compression efficiency.
				/// </summary>
				CompressionLevel_Default = 6,
				/// <summary>
				/// A synonym for Default.
				/// </summary>
				CompressionLevel_Level6 = 6,

				/// <summary>
				/// Pretty good compression!
				/// </summary>
				CompressionLevel_Level7 = 7,

				/// <summary>
				///  Better compression than Level7!
				/// </summary>
				CompressionLevel_Level8 = 8,

				/// <summary>
				/// The "best" compression, where best means greatest reduction in size of the input data stream.
				/// This is also the slowest compression.
				/// </summary>
				CompressionLevel_BestCompression = 9,

				/// <summary>
				/// A synonym for BestCompression.
				/// </summary>
				CompressionLevel_Level9 = 9,
			};


		}
	}
}
#endif