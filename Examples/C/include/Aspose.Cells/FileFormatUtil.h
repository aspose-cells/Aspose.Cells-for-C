#pragma once
//#include "System/Collections/IList.h"
//#include "System/Exception.h"
//#include "System/Int64.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/IO/FileAccess.h"
//#include "System/IO/FileMode.h"
#include "System/Guid.h"
//#include "System/IO/File.h"
#include "FileFormatType.h"
#include "System/IO/Stream.h"
//#include "System/IO/FileShare.h"
//#include "System/IO/MemoryStream.h"
#include "XlsbUtil.h"
#include "SaveFormat.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/IO/Path.h"
#include "System/Array1D.h"
//#include "System/Collections/SortedList.h"
#include "LoadFormat.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/IO/BinaryReader.h"
#include "OpenXMLUtil.h"
//#include "System/Int32.h"
//#include "System/IO/FileStream.h"
#define STATIC_FILEFORMATUTIL() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class FileFormatInfo;
}
}
namespace Aspose {
namespace Ss {
class MemoryStorage;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FileFormatUtil : public Aspose::Cells::System::Object
#else	class FileFormatUtil : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			static void GetOpenOfficeFileType(intrusive_ptr<Aspose::Cells::FileFormatInfo> info , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zipFile);
			static bool ReadContentTypes(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zipFile , intrusive_ptr<Aspose::Cells::FileFormatInfo> info);
	public:

			static intrusive_ptr<Aspose::Cells::FileFormatInfo> DetectFileFormat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static intrusive_ptr<Aspose::Cells::FileFormatInfo> DetectFileFormat(intrusive_ptr<Aspose::Cells::System::String> filePath);
			static bool IsProtectedByRMS(intrusive_ptr<Aspose::Ss::MemoryStorage> root);
			static intrusive_ptr<Aspose::Cells::FileFormatInfo> GetFileType(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Ss::MemoryStorage> root);
			static intrusive_ptr<Aspose::Cells::System::Guid> FileFormatTypeToGuid(Aspose::Cells::FileFormatType type);
			static Aspose::Cells::LoadFormat ConvertFileFormatToLoadFormat(Aspose::Cells::FileFormatType format);
			static Aspose::Cells::SaveFormat ConvertFileFormatToSaveFormat(Aspose::Cells::FileFormatType format);
			static Aspose::Cells::FileFormatType ConvertSaveFormatToFileFormat(Aspose::Cells::SaveFormat format , Aspose::Cells::FileFormatType defaultFormat);
			static intrusive_ptr<Aspose::Cells::SaveOptions> ConvertSaveFormatToOptions(intrusive_ptr<Aspose::Cells::System::String> fileName , Aspose::Cells::FileFormatType fileFormatType , Aspose::Cells::SaveFormat saveFormat , intrusive_ptr<Aspose::Cells::SaveOptions> options);
			static intrusive_ptr<Aspose::Cells::System::String> FileFormatTypeToProgId(Aspose::Cells::FileFormatType format);
			static intrusive_ptr<Aspose::Cells::System::String> FileFormatFormatToExtension(Aspose::Cells::FileFormatType format , intrusive_ptr<Aspose::Cells::System::String> defaultExtension);
			static Aspose::Cells::FileFormatType ExtensionToFileFormatFormat(intrusive_ptr<Aspose::Cells::System::String> extension , Aspose::Cells::FileFormatType type);
			static Aspose::Cells::SaveFormat ExtensionToSaveFormat(intrusive_ptr<Aspose::Cells::System::String> extension);
			static bool IsTemplateFormat(intrusive_ptr<Aspose::Cells::System::String> extension);
			static intrusive_ptr<Aspose::Cells::System::String> LoadFormatToExtension(Aspose::Cells::LoadFormat loadFormat);
			static Aspose::Cells::SaveFormat LoadFormatToSaveFormat(Aspose::Cells::LoadFormat loadFormat);
			static intrusive_ptr<Aspose::Cells::System::String> SaveFormatToExtension(Aspose::Cells::SaveFormat format);
			static Aspose::Cells::LoadFormat SaveFormatToLoadFormat(Aspose::Cells::SaveFormat saveFormat);
			static intrusive_ptr<Aspose::Cells::SaveOptions> ConvertSaveOptions(Aspose::Cells::FileFormatType fileFormatType , intrusive_ptr<Aspose::Cells::SaveOptions> options);
			static bool IsExcel2007File(Aspose::Cells::FileFormatType type);
			 FileFormatUtil();
		public:
			virtual ~FileFormatUtil();
	};

}

}
