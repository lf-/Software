#include "software/gui/robot_diagnostics/widgets/sensor_status.h"

void setupSensorStatus(Ui::AutoGeneratedMainWidget* widget)
{
    updateProgressBar(widget->progressBar_battery, 0.0f);
    updateProgressBar(widget->progressBar_capacitor, 100.0f);
    updateProgressBar(widget->progressBar_dribbler_speed, 0.0f);
    updateProgressBar(widget->progressBar_break_beam, 24.24f);
    updateProgressBar(widget->progressBar_dribbler_temp, 0.0f);
    updateProgressBar(widget->progressBar_board_temp, 0.0f);
}

void updateSensorStatus(Ui::AutoGeneratedMainWidget* widget,
                        const SensorProto& sensor_msg)
{
    for (const auto& robot_msg : sensor_msg.robot_status_msgs())
    {
        // update status progress bars
        updateProgressBar(widget->progressBar_battery,
                          robot_msg.power_status().battery_voltage());
        updateProgressBar(widget->progressBar_capacitor,
                          robot_msg.power_status().capacitor_voltage());
        updateProgressBar(widget->progressBar_dribbler_speed,
                          robot_msg.dribbler_status().dribbler_rpm());
        // break beam reading is from [0,1] and we want it displayed as a percent so it is
        // multiplied by 100 to map to [0,100]
        updateProgressBar(widget->progressBar_break_beam,
                          robot_msg.break_beam_status().break_beam_reading() * 100);

        // update temperature progress bars
        updateProgressBar(widget->progressBar_dribbler_temp,
                          robot_msg.temperature_status().dribbler_temperature());
        updateProgressBar(widget->progressBar_board_temp,
                          robot_msg.temperature_status().board_temperature());
    }
}
