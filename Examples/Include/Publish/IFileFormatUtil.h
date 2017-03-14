#pragma once
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class IFileFormatInfo;
		enum SaveFormat;
		enum LoadFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Provides utility methods for working with file formats, such as detecting file format or converting file extensions to/from file format enums.
			/// </summary>
	class ASPOSE_CELLS_API IFileFormatUtil : public Aspose::Cells::System::Object
	{
		public:
public:
			/// <summary>
			/// Detects and returns the information about a format of excel stored in a stream. 
			/// </summary>
			/// <param name="stream" />
			/// 
			/// <returns>A <see cref="IFileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			/// <summary>
			/// Detects and returns the information about a format of excel stored in a file. 
			/// </summary>
			/// <param name="filePath" >The file path.</param>
			/// <returns>A <see cref="FileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::System::String> filePath);
			/// <summary>
			/// Converts a file name extension into a SaveFormat value.
			/// </summary>
			/// <param name="extension" >The file extension. Can be with or without a leading dot. Case-insensitive.</param>
			/// <returns/>
			/// 
			/// <remarks>If the extension cannot be recognized, returns <see cref="SaveFormat.Unknown" />
			/// .</remarks>
			static  Aspose::Cells::SaveFormat 		ExtensionToSaveFormat(intrusive_ptr<Aspose::Cells::System::String> extension);
			/// <summary>
			/// Returns true if the extension is .xlt, .xltX, .xltm,.ots.
			/// </summary>
			/// <param name="extension" />
			/// 
			/// <returns/>
			/// 
			static  bool 		IsTemplateFormat(intrusive_ptr<Aspose::Cells::System::String> extension);
			/// <summary>
			/// Converts a load format enumerated value into a file extension.
			/// </summary>
			/// <param name="loadFormat" >The loaded file format.</param>
			/// <returns> The returned extension is a lower-case string with a leading dot.</returns>
			/// <remarks>If can not convert, returns null.</remarks>
			static  intrusive_ptr<Aspose::Cells::System::String> 		LoadFormatToExtension(Aspose::Cells::LoadFormat loadFormat);
			/// <summary>
			/// Converts a LoadFormat value to a SaveFormat value if possible. 
			/// </summary>
			/// <param name="loadFormat" >The load format.</param>
			/// <returns>The save format.</returns>
			static  Aspose::Cells::SaveFormat 		LoadFormatToSaveFormat(Aspose::Cells::LoadFormat loadFormat);
			/// <summary>
			/// Converts a save format enumerated value into a file extension.
			/// </summary>
			/// <param name="format" >The save format.</param>
			/// <returns>The returned extension is a lower-case string with a leading dot. </returns>
			static  intrusive_ptr<Aspose::Cells::System::String> 		SaveFormatToExtension(Aspose::Cells::SaveFormat format);
			/// <summary>
			/// Converts a SaveFormat value to a LoadFormat value if possible. 
			/// </summary>
			/// <param name="saveFormat" >The save format.</param>
			/// <returns>The load format</returns>
			static  Aspose::Cells::LoadFormat 		SaveFormatToLoadFormat(Aspose::Cells::SaveFormat saveFormat);

	};
}
}
