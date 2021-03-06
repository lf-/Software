#pragma once

#include <QtWidgets/QWidget>

// This include is autogenerated by the .ui file in the same folder
// The generated version will be names 'ui_<filename>.h'
#include "software/gui/robot_diagnostics/ui/ui_main_widget.h"

/**
 * updates the shown value of the progress bar with a float
 *
 * @param progress_bar the QProgressBar to update
 * @param value the value to update the progress bar with
 */
void updateProgressBar(QProgressBar *progress_bar, float value);
