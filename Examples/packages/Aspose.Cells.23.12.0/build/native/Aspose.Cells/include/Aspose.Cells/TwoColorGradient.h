// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TWOCOLORGRADIENT_H
#define ASPOSE_CELLS_TWOCOLORGRADIENT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/GradientStyleType.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;

class TwoColorGradient_Impl;

/// <summary>
/// Represents two color gradient.
/// </summary>
class TwoColorGradient {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TwoColorGradient_Impl* _impl;
    
public:
    /// <summary>
    /// </summary>
    /// <param name="color1"></param>
    /// <param name="color2"></param>
    /// <param name="gradientStyleType"></param>
    /// <param name="variant"></param>
    ASPOSE_CELLS_API TwoColorGradient(const Aspose::Cells::Color& color1, const Aspose::Cells::Color& color2, GradientStyleType gradientStyleType, int32_t variant);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TwoColorGradient(TwoColorGradient_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TwoColorGradient(const TwoColorGradient& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TwoColorGradient();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TwoColorGradient& operator=(const TwoColorGradient& src);
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
    /// Gets and sets the first gradient color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor1();
    /// <summary>
    /// Gets and sets the first gradient color.
    /// </summary>
    ASPOSE_CELLS_API void SetColor1(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the second gradient color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor2();
    /// <summary>
    /// Gets and sets the second gradient color.
    /// </summary>
    ASPOSE_CELLS_API void SetColor2(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets gradient shading style.
    /// </summary>
    ASPOSE_CELLS_API GradientStyleType GetGradientStyleType();
    /// <summary>
    /// Gets and sets gradient shading style.
    /// </summary>
    ASPOSE_CELLS_API void SetGradientStyleType(GradientStyleType value);
    /// <summary>
    /// Gets and sets the gradient variant.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetVariant();
    /// <summary>
    /// Gets and sets the gradient variant.
    /// </summary>
    ASPOSE_CELLS_API void SetVariant(int32_t value);
    
};

} }

#endif
