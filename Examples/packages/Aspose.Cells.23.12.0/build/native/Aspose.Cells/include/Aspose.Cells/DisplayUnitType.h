// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_DISPLAYUNITTYPE_H
#define ASPOSE_CELLS_CHARTS_DISPLAYUNITTYPE_H

namespace Aspose { namespace Cells { namespace Charts {

/// <summary>
/// Represents the type of display unit of chart's axis.
/// </summary>
enum class DisplayUnitType {
    /// <summary>
    /// Display unit is None.
    /// </summary>
    None = 0x0000,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100.
    /// </summary>
    Hundreds = 0x0001,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000.
    /// </summary>
    Thousands = 0x0002,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 10,000.
    /// </summary>
    TenThousands = 0x0003,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100,000.
    /// </summary>
    HundredThousands = 0x0004,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000.
    /// </summary>
    Millions = 0x0005,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 10,000,000.
    /// </summary>
    TenMillions = 0x0006,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100,000,000.
    /// </summary>
    HundredMillions = 0x0007,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000,000.
    /// </summary>
    Billions = 0x0008,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000,000,000.
    /// </summary>
    Trillions = 0x0009,
    /// <summary>
    /// The values on the chart shall be divided by 0.01.
    /// </summary>
    Percentage = 0x000A,
    /// <summary>
    /// specifies a custom value for the display unit.
    /// </summary>
    /// <remarks>NOTE: This member is now obsolete. Instead,
    /// please use DisplayUnitType.Custom.
    /// This property will be removed 12 months later since January 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use DisplayUnitType.Custom, instead.
    Cust,
    /// <summary>
    /// specifies a custom value for the display unit.
    /// </summary>
    Custom,
};

} } }

#endif
