#pragma once

#include <QtWidgets/QWidget>

// This include is autogenerated by the .ui file in the same folder
// The generated version will be names 'ui_<filename>.h'
#include "software/gui/robot_diagnostics/ui/ui_main_widget.h"
#include "software/gui/robot_diagnostics/widgets/progress_bar.h"
#include "software/proto/sensor_msg.pb.h"

/**
 * Set up status and temperature area of the widget
 *
 * @param widget widget to setup
 */
void setupSensorStatus(Ui::AutoGeneratedMainWidget *widget);

/**
 * Update values of components in the sensor status widget using a new SensorProto
 *
 * @param widget the parent widget
 * @param sensor_msg the SensorProto to update the widget with
 */
void updateSensorStatus(Ui::AutoGeneratedMainWidget *widget,
                        const SensorProto &sensor_msg);
