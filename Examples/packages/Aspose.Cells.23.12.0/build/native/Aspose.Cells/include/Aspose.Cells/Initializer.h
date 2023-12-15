// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_INITIALIZER_H
#define ASPOSE_CELLS_INITIALIZER_H

#include "Aspose.Cells/Export.h"

namespace Aspose {
	namespace Cells {
		/// <summary>
		/// Initializes the Aspose.Cells library, which must be invoked before using the library.
		/// </summary>
		ASPOSE_CELLS_API void Startup();
		/// <summary>
		/// Clean up the Aspose.Cells library.
		/// </summary>
		/// <param name="cleanupOpenSSL">If true, also clean up OpenSSL used by this library</param>
		ASPOSE_CELLS_API void Cleanup(bool cleanupOpenSSL = true);
	}
}

#endif
