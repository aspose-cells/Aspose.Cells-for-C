#pragma once

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Zip/Zip64Option.h"
#include "Aspose.Cells.Systems/Zip/ZipOptions.h"

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ZipFile;
			class ZipOutputStream;
			class ZipContainer : public reference_counter 
			{
			public:
				ZipContainer(ZipFile* zipfile) {
					_zf = zipfile;
					_zos = NULL;
				}
				ZipContainer(ZipOutputStream* zos) {
					_zos = zos;
					_zf = NULL;
				}

				ZipFile* GetZipFile() {
					return _zf;
				}

				ZipOutputStream* GetZipOutputStream() {
					return _zos;
				}

				Zip64Option GetZip64();
				int32_t GetCodecBufferSize();
				CompressionStrategy GetStrategy();

			private:
				ZipFile*			_zf;
				ZipOutputStream*	_zos;
			};
		}
	}
}

