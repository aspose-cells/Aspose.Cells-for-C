// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_IFILEPATHPROVIDER_H
#define ASPOSE_CELLS_IFILEPATHPROVIDER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the exported file path provider.
/// </summary>
class IFilePathProvider {
public:
    /// <summary>
    /// Gets the full path of the file by Worksheet name when exporting Worksheet to html separately.
    /// So the references among the Worksheets can be exported correctly.
    /// </summary>
    /// <param name="sheetName">Worksheet name</param>
    /// <returns>the full path of the file</returns>
    virtual U16String GetFullName(const U16String& sheetName) = 0;
    
};

} }

#endif
