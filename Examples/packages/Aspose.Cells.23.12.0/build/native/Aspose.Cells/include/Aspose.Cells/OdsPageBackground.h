// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ODS_ODSPAGEBACKGROUND_H
#define ASPOSE_CELLS_ODS_ODSPAGEBACKGROUND_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/OdsPageBackgroundGraphicPositionType.h"
#include "Aspose.Cells/OdsPageBackgroundGraphicType.h"
#include "Aspose.Cells/OdsPageBackgroundType.h"

namespace Aspose { namespace Cells { namespace Ods {

using namespace Aspose::Cells;

class OdsPageBackground_Impl;

/// <summary>
/// Represents the page background of ods.
/// </summary>
class OdsPageBackground {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OdsPageBackground_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackground();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackground(OdsPageBackground_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackground(const OdsPageBackground& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OdsPageBackground();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackground& operator=(const OdsPageBackground& src);
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
    /// Gets and sets the page background type.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackgroundType GetType();
    /// <summary>
    /// Gets and sets the page background type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(OdsPageBackgroundType value);
    /// <summary>
    /// Gets and sets the color of background.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets and sets the color of background.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the page background graphic type.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackgroundGraphicType GetGraphicType();
    /// <summary>
    /// Gets and sets the page background graphic type.
    /// </summary>
    ASPOSE_CELLS_API void SetGraphicType(OdsPageBackgroundGraphicType value);
    /// <summary>
    /// Gets and set the background graphic position.
    /// </summary>
    ASPOSE_CELLS_API OdsPageBackgroundGraphicPositionType GetGraphicPositionType();
    /// <summary>
    /// Gets and set the background graphic position.
    /// </summary>
    ASPOSE_CELLS_API void SetGraphicPositionType(OdsPageBackgroundGraphicPositionType value);
    /// <summary>
    /// Indicates whether it's a linked graphic.
    /// </summary>
    ASPOSE_CELLS_API bool IsLink();
    /// <summary>
    /// Gets and sets the linked graphic path.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLinkedGraphic();
    /// <summary>
    /// Gets and sets the linked graphic path.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedGraphic(const U16String& value);
    /// <summary>
    /// Gets and sets the linked graphic path.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedGraphic(const char16_t* value);
    /// <summary>
    /// Gets and sets the graphic data.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetGraphicData();
    /// <summary>
    /// Gets and sets the graphic data.
    /// </summary>
    ASPOSE_CELLS_API void SetGraphicData(const Vector<uint8_t>& value);
    
};

} } }

#endif
