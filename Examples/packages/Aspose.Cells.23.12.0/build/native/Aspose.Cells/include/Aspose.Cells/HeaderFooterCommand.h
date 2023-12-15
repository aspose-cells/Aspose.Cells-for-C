// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HEADERFOOTERCOMMAND_H
#define ASPOSE_CELLS_HEADERFOOTERCOMMAND_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/HeaderFooterCommandType.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells {

class HeaderFooterCommand_Impl;

/// <summary>
/// Represents the command of header/footer
/// </summary>
class ASPOSE_CELLS_API2 HeaderFooterCommand {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HeaderFooterCommand_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HeaderFooterCommand(HeaderFooterCommand_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HeaderFooterCommand(const HeaderFooterCommand& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HeaderFooterCommand();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HeaderFooterCommand& operator=(const HeaderFooterCommand& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the header/footer' command type .
    /// </summary>
    ASPOSE_CELLS_API HeaderFooterCommandType GetType();
    /// <summary>
    /// Gets the font of the command's value.
    /// </summary>
    /// <remarks>
    /// Useless for HeaderFooterCommandType.Picture.
    /// </remarks>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Gets the text of the command.
    /// </summary>
    /// <remarks>
    /// Only valid for HeaderFooterCommandType.Text.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetText();
    
};

} }

#endif
