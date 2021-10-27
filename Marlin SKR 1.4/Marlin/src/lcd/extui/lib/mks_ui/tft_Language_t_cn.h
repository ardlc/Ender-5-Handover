/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//***************繁体中文**********************//
#define NEXT_T_CN                       "下一頁"
#define PREVIOUS_T_CN                   "上一頁"
#define DEFAULT_T_CN                    "默認值"
#define KEY_BACK_T_CN                   "退格"
#define KEY_REST_T_CN                   "重置"
#define KEY_CONFIRM_T_CN                "確定"

#define MACHINE_PARA_TITLE_T_CN         "機器參數"
#define MACHINE_TYPE_CNOFIG_T_CN        "機器設置"
#define MOTOR_CONFIG_T_CN               "電機設置"
#define MACHINE_LEVELING_CONFIG_T_CN    "調平設置"
#define ADVANCE_CONFIG_T_CN             "高級設置"

#define MACHINE_CONFIG_TITLE_T_CN       "機器參數>機器配置"
#define MACHINE_TYPE_T_CN               "機型選擇"
#define MACHINE_STROKE_T_CN             "行程設置"
#define MACHINE_HOMEDIR_T_CN            "歸零方向"
#define MACHINE_ENDSTOP_TYPE_T_CN       "限位開關類型"
#define MACHINE_FILAMENT_CONFIG_T_CN    "換料設置"

#define MACHINE_TYPE_CONFIG_TITLE_T_CN  "機器參數>機型選擇"
#define MACHINE_TYPE_XYZ_T_CN           "XYZ機型"
#define MACHINE_TYPE_DELTA_T_CN         "Delta機型"
#define MACHINE_TYPE_COREXY_T_CN        "Corexy機型"

#define MACHINE_STROKE_CONF_TITLE_T_CN  "機器參數>機器行程"
#define X_MAX_LENGTH_T_CN               "X軸最大行程"
#define Y_MAX_LENGTH_T_CN               "Y軸最大行程"
#define Z_MAX_LENGTH_T_CN               "Z軸最大行程"

#define X_MIN_LENGTH_T_CN               "X軸最小行程"
#define Y_MIN_LENGTH_T_CN               "Y軸最小行程"
#define Z_MIN_LENGTH_T_CN               "Z軸最小行程"

#define HOME_DIR_CONF_TITLE_T_CN        "機器參數>歸零方向"
#define HOME_DIR_X_T_CN                 "X軸歸零方向"
#define HOME_DIR_Y_T_CN                 "Y軸歸零方向"
#define HOME_DIR_Z_T_CN                 "Z軸歸零方向"
#define HOME_MIN_T_CN                   "MIN"
#define HOME_MAX_T_CN                   "MAX"

#define ENDSTOP_CONF_TITLE_T_CN         "機器參數>限位開關"
#define MIN_ENDSTOP_X_T_CN              "X軸最小限位"
#define MIN_ENDSTOP_Y_T_CN              "Y軸最小限位"
#define MIN_ENDSTOP_Z_T_CN              "Z軸最小限位"
#define MAX_ENDSTOP_X_T_CN              "X軸最大限位"
#define MAX_ENDSTOP_Y_T_CN              "Y軸最大限位"
#define MAX_ENDSTOP_Z_T_CN              "Z軸最大限位"
#define ENDSTOP_FIL_T_CN                "斷料開關類型"
#define ENDSTOP_LEVEL_T_CN              "調平開關類型"
#define ENDSTOP_OPENED_T_CN             "常開"
#define ENDSTOP_CLOSED_T_CN             "常閉"

#define FILAMENT_CONF_TITLE_T_CN        "換料設置"
#define FILAMENT_IN_LENGTH_T_CN         "進料長度"
#define FILAMENT_IN_SPEED_T_CN          "進料速度"
#define FILAMENT_TEMPERATURE_T_CN       "換料溫度"
#define FILAMENT_OUT_LENGTH_T_CN        "退料長度"
#define FILAMENT_OUT_SPEED_T_CN         "退料速度"

#define LEVELING_CONF_TITLE_T_CN        "機器參數>調平設置"
#define LEVELING_PARA_CONF_T_CN         "調平設置"
#define LEVELING_MANUAL_POS_T_CN        "手動調平坐標設置"
#define LEVELING_AUTO_COMMAND_T_CN      "自動調平指令設置"
#define LEVELING_AUTO_ZOFFSET_T_CN      "擠出頭與調平開關偏移設置"

#define LEVELING_PARA_CONF_TITLE_T_CN   "調平參數"
#define AUTO_LEVELING_ENABLE_T_CN       "自動調平"
#define BLTOUCH_LEVELING_ENABLE_T_CN    "啟動BLtouch"
#define PROBE_PORT_T_CN                 "調平探針接口"
#define PROBE_X_OFFSET_T_CN             "探針X方向偏移"
#define PROBE_Y_OFFSET_T_CN             "探针Y方向偏移"
#define PROBE_Z_OFFSET_T_CN             "探针Z方向偏移"
#define PROBE_XY_SPEED_T_CN             "探针XY方向移動速度"
#define PROBE_Z_SPEED_T_CN              "探针Z方向移動速度"
#define ENABLE_T_CN                     "是"
#define DISABLE_T_CN                    "否"
#define LOCKED_T_CN                     "否"
#define Z_MIN_T_CN                      "ZMin"
#define Z_MAX_T_CN                      "ZMax"

#define DELTA_LEVEL_CONF_TITLE_T_CN     "Delta機器參數"
#define DELTA_LEVEL_CONF_T_CN           "Delta機器調平"
#define DELTA_MACHINE_RADIUS_T_CN       "機器半徑"
#define DELTA_DIAGONAL_ROD_T_CN         "機器桿長"
#define DELTA_PRINT_RADIUS_T_CN         "打印半徑"
#define DELTA_HEIGHT_T_CN               "打印高度"
#define SMOOTH_ROD_OFFSET_T_CN          "滑塊偏移"
#define EFFECTOR_OFFSET_T_CN            "效應器偏移"
#define CALIBRATION_RADIUS_T_CN         "調平半徑"

#define XYZ_LEVEL_CONF_TITLE_T_CN       "XYZ機器參數"
#define PROBE_REACH_MAX_LEFT_T_CN       "探针達到最左位置"
#define PROBE_REACH_MAX_RIGHT_T_CN      "探针達到最右位置"
#define PROBE_REACH_MAX_FRONT_T_CN      "探针達到最前位置"
#define PROBE_REACH_MAX_BACK_T_CN       "探针達到最後位置"

#define TEMPERATURE_CONF_TITLE_T_CN     "機器參數>溫度設置"
#define NOZZLE_CONF_T_CN                "噴頭設置"
#define HOTBED_CONF_T_CN                "熱床設置"
#define PREHEAT_TEMPER_T_CN             "預設溫度"

#define NOZZLE_CONF_TITLE_T_CN          "機器參數>噴頭設置"
#define NOZZLECNT_T_CN                  "噴頭數量"
#define NOZZLE_TYPE_T_CN                "E0溫感類型"
#define NOZZLE_ADJUST_TYPE_T_CN         "PID調溫"
#define NOZZLE_MIN_TEMPERATURE_T_CN     "最低溫度"
#define NOZZLE_MAX_TEMPERATURE_T_CN     "最高溫度"
#define EXTRUD_MIN_TEMPER_T_CN          "最低擠出溫度"

#define HOTBED_CONF_TITLE_T_CN          "機器參數>熱床設置"
#define HOTBED_ADJUST_T_CN              "PID調溫"
#define HOTBED_MIN_TEMPERATURE_T_CN     "最低溫度"
#define HOTBED_MAX_TEMPERATURE_T_CN     "最高溫度"

#define MOTOR_CONF_TITLE_T_CN           "機器參數>電機設置"
#define MAXFEEDRATE_CONF_T_CN           "最大速度設置"
#define ACCELERATION_CONF_T_CN          "加速度設置"
#define JERKCONF_T_CN                   "突變速度設置"
#define STEPSCONF_T_CN                  "脈沖設置"
#define TMC_CURRENT_T_CN                "TMC 驅動電流設置"
#define TMC_STEP_MODE_T_CN              "TMC 驅動模式設置"
#define MOTORDIRCONF_T_CN               "電機方向設置"
#define HOMEFEEDRATECONF_T_CN           "歸零速度設置"
#define HOMING_SENSITIVITY_CONF_T_CN    "無限位回零靈敏度調節"

#define MAXFEEDRATE_CONF_TITLE_T_CN     "機器參數>最大速度"
#define X_MAXFEEDRATE_T_CN              "X軸最大速度"
#define Y_MAXFEEDRATE_T_CN              "Y軸最大速度"
#define Z_MAXFEEDRATE_T_CN              "Z軸最大速度"
#define E0_MAXFEEDRATE_T_CN             "E0軸最大速度"
#define E1_MAXFEEDRATE_T_CN             "E1軸最大速度"

#define ACCELERATION_CONF_TITLE_T_CN    "機器參數>加速度"
#define PRINT_ACCELERATION_T_CN         "打印加速度"
#define RETRACT_ACCELERATION_T_CN       "回抽加速度"
#define TRAVEL_ACCELERATION_T_CN        "空載加速度"
#define X_ACCELERATION_T_CN             "X軸加速度"
#define Y_ACCELERATION_T_CN             "Y軸加速度"
#define Z_ACCELERATION_T_CN             "Z軸加速度"
#define E0_ACCELERATION_T_CN            "E0軸加速度"
#define E1_ACCELERATION_T_CN            "E1軸加速度"

#define JERK_CONF_TITLE_T_CN            "機器參數>突變速度"
#define X_JERK_T_CN                     "X軸突變速度"
#define Y_JERK_T_CN                     "Y軸突變速度"
#define Z_JERK_T_CN                     "Z軸突變速度"
#define E_JERK_T_CN                     "E軸突變速度"

#define STEPS_CONF_TITLE_T_CN           "機器參數>脈衝設置"
#define X_STEPS_T_CN                    "X軸脈沖"
#define Y_STEPS_T_CN                    "Y軸脈沖"
#define Z_STEPS_T_CN                    "Z軸脈沖"
#define E0_STEPS_T_CN                   "E0軸脈沖"
#define E1_STEPS_T_CN                   "E1軸脈沖"

#define TMC_CURRENT_CONF_TITLE_T_CN     "機器參數>TMC電流設置"
#define X_TMC_CURRENT_T_CN              "X軸電流(毫安)"
#define Y_TMC_CURRENT_T_CN              "Y軸電流(毫安)"
#define Z_TMC_CURRENT_T_CN              "Z軸電流(毫安)"
#define E0_TMC_CURRENT_T_CN             "E0軸電流(毫安)"
#define E1_TMC_CURRENT_T_CN             "E1軸電流(毫安)"

#define TMC_MODE_CONF_TITLE_T_CN        "機器參數>TMC模式設置"
#define X_TMC_MODE_T_CN                 "X軸是否使能靜音模式"
#define Y_TMC_MODE_T_CN                 "Y軸是否使能靜音模式"
#define Z_TMC_MODE_T_CN                 "Z軸是否使能靜音模式"
#define E0_TMC_MODE_T_CN                "E0軸是否使能靜音模式"
#define E1_TMC_MODE_T_CN                "E1軸是否使能靜音模式"

#define MOTORDIR_CONF_TITLE_T_CN        "機器參數>電機方向"
#define X_MOTORDIR_T_CN                 "X軸電機方向"
#define Y_MOTORDIR_T_CN                 "Y軸電機方向"
#define Z_MOTORDIR_T_CN                 "Z軸電機方向"
#define E0_MOTORDIR_T_CN                "E0軸電機方向"
#define E1_MOTORDIR_T_CN                "E1軸電機方向"
#define INVERT_P_T_CN                   "正向"
#define INVERT_N_T_CN                   "反向"

#define HOMEFEEDRATE_CONF_TITLE_T_CN    "機器參數>歸零速度"
#define X_HOMESPEED_T_CN                "XY軸歸零速度"
#define Y_HOMESPEED_T_CN                "Y軸歸零速度"
#define Z_HOMESPEED_T_CN                "Z軸歸零速度"

#define ADVANCED_CONF_TITLE_T_CN        "機器參數>高級設置"
#define PWROFF_DECTION_T_CN             "斷電檢測模塊"
#define PWROFF_AFTER_PRINT_T_CN         "啟動打完關機功能"
#define HAVE_UPS_T_CN                   "機器配備UPS電壓"
#define Z2_AND_Z2ENDSTOP_CONF_T_CN      "雙z軸雙限位功能設置"
#define ENABLE_PINS_CONF_T_CN           "電機使能腳電平設置"
#define WIFI_SETTINGS_T_CN              "Wi-Fi參數設置"
#define ENCODER_SETTINGS_T_CN           "旋鈕設置"

#define Z2_AND_Z2ENDSTOP_CONF_TITLE_T_CN  "雙z軸雙限位設置"
#define Z2_ENABLE_T_CN                    "啟用Z2軸"
#define Z2_ENDSTOP_T_CN                   "啟用Z2限位"
#define Z2_PORT_T_CN                      "Z2限位接口"

#define ENABLE_PINS_CONF_TITLE_T_CN     "電機使能腳電平"
#define X_ENABLE_PINS_INVERT_T_CN       "X軸電機使能電平"
#define Y_ENABLE_PINS_INVERT_T_CN       "Y軸電機使能電平"
#define Z_ENABLE_PINS_INVERT_T_CN       "Z軸電機使能電平"
#define E_ENABLE_PINS_INVERT_T_CN       "E軸電機使能電平"

#define PAUSE_POSITION_T_CN         "打印暫停位置設置"
#define PAUSE_POSITION_X_T_CN       "X軸暫停位置(絕對位置,-1無效)"
#define PAUSE_POSITION_Y_T_CN       "Y軸暫停位置(絕對位置,-1無效)"
#define PAUSE_POSITION_Z_T_CN       "Z軸暫停位置(相對位置,-1無效)"
#define WIFI_SETTINGS_TITLE_T_CN    "機器參數>Wi-Fi設置"
#define WIFI_SETTINGS_MODE_T_CN     "Wi-Fi 模式"
#define WIFI_SETTINGS_NAME_T_CN     "Wi-Fi 名稱: "
#define WIFI_SETTINGS_PASSWORD_T_CN "Wi-Fi 密碼: "
#define WIFI_SETTINGS_CLOUD_T_CN    "是否使用雲服務?"
#define WIFI_SETTINGS_CONFIG_T_CN   "配置"
#define WIFI_SETTINGS_EDIT_T_CN     "編輯"
#define WIFI_CONFIG_TIPS_T_CN       "進行Wi-Fi配置?"

#define OFFSET_TITLE_T_CN               "機器參數>偏移設置"
#define OFFSET_X_T_CN                   "X軸與調平開關偏移"
#define OFFSET_Y_T_CN                   "Y軸與調平開關偏移"
#define OFFSET_Z_T_CN                   "Z軸與調平開關偏移"

#define HOMING_SENSITIVITY_CONF_TITLE_T_CN      "機器參數>靈敏度調節"
#define X_SENSITIVITY_T_CN                      "X軸靈敏度"
#define Y_SENSITIVITY_T_CN                      "Y軸靈敏度"
#define Z_SENSITIVITY_T_CN                      "Z軸靈敏度"
#define Z2_SENSITIVITY_T_CN                     "Z2軸靈敏度"

#define ENCODER_CONF_TITLE_T_CN                 "機器參數>旋鈕設置"
#define ENCODER_CONF_TEXT_T_CN                  "是否使用旋鈕功能?"

#define TOOL_TEXT_T_CN                  "工具"
#define PREHEAT_TEXT_T_CN               "預熱"
#define MOVE_TEXT_T_CN                  "移動"
#define HOME_TEXT_T_CN                  "回零"
#define PRINT_TEXT_T_CN                 "打印"
#define EXTRUDE_TEXT_T_CN               "擠出"
#define LEVELING_TEXT_T_CN              "調平"
#define AUTO_LEVELING_TEXT_T_CN         "自動調平"
#define SET_TEXT_T_CN                   "設置"
#define MORE_TEXT_T_CN                  "更多"
#define MORE_GCODE_T_CN                 "G-Code"
#define MORE_ENTER_GCODE_T_CN           "Enter G-Code"

#define ADD_TEXT_T_CN                   "增加"
#define DEC_TEXT_T_CN                   "減少"
#define EXTRUDER_1_TEXT_T_CN            "噴頭1"
#define EXTRUDER_2_TEXT_T_CN            "噴頭2"
#define HEATBED_TEXT_T_CN               "熱床"
#define TEXT_1C_T_CN                    "1℃"
#define TEXT_5C_T_CN                    "5℃"
#define TEXT_10C_T_CN                   "10℃"
#define CLOSE_TEXT_T_CN                 "關閉"

#define BACK_TEXT_T_CN                  "返回"

#define TOOL_PREHEAT_T_CN               "預熱"
#define TOOL_EXTRUDE_T_CN               "擠出"
#define TOOL_MOVE_T_CN                  "移動"
#define TOOL_HOME_T_CN                  "回零"
#define TOOL_LEVELING_T_CN              "調平"
#define TOOL_AUTO_LEVELING_T_CN         "自動調平"
#define TOOL_FILAMENT_T_CN              "換料"
#define TOOL_MORE_T_CN                  "更多"

#define AXIS_X_ADD_TEXT_T_CN            "X+"
#define AXIS_X_DEC_TEXT_T_CN            "X-"
#define AXIS_Y_ADD_TEXT_T_CN            "Y+"
#define AXIS_Y_DEC_TEXT_T_CN            "Y-"
#define AXIS_Z_ADD_TEXT_T_CN            "Z+"
#define AXIS_Z_DEC_TEXT_T_CN            "Z-"
#define TEXT_01MM_T_CN                  "0.1mm"
#define TEXT_1MM_T_CN                   "1mm"
#define TEXT_10MM_T_CN                  "10mm"

#define HOME_X_TEXT_T_CN                "X"
#define HOME_Y_TEXT_T_CN                "Y"
#define HOME_Z_TEXT_T_CN                "Z"
#define HOME_ALL_TEXT_T_CN              "回零"
#define HOME_STOPMOVE_T_CN              "急停"

#define PAGE_UP_TEXT_T_CN               "上一頁"
#define PAGE_DOWN_TEXT_T_CN             "下一頁"

#define EXTRUDER_IN_TEXT_T_CN           "進料"
#define EXTRUDER_OUT_TEXT_T_CN          "退料"
#define EXTRUDE_1MM_TEXT_T_CN           "1mm"
#define EXTRUDE_5MM_TEXT_T_CN           "5mm"
#define EXTRUDE_10MM_TEXT_T_CN          "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_T_CN     "低速"
#define EXTRUDE_MEDIUM_SPEED_TEXT_T_CN  "常速"
#define EXTRUDE_HIGH_SPEED_TEXT_T_CN    "高速"

#define LEVELING_POINT1_TEXT_T_CN       "第一點"
#define LEVELING_POINT2_TEXT_T_CN       "第二點"
#define LEVELING_POINT3_TEXT_T_CN       "第三點"
#define LEVELING_POINT4_TEXT_T_CN       "第四點"
#define LEVELING_POINT5_TEXT_T_CN       "第五點"

#define FILESYS_TEXT_T_CN               "文件系統"
#define WIFI_TEXT_T_CN                  "WIFI"
#define FAN_TEXT_T_CN                   "風扇"
#define ABOUT_TEXT_T_CN                 "關於"
#define BREAK_POINT_TEXT_T_CN           "斷點續打"
#define FILAMENT_TEXT_T_CN              "換料"
#define LANGUAGE_TEXT_T_CN              "語言"
#define MOTOR_OFF_TEXT_T_CN             "關閉電機"
#define MOTOR_OFF_XY_TEXT_T_CN          "關閉XY"
#define SHUTDOWN_TEXT_T_CN              "關機"
#define MACHINE_PARA_T_CN               "機器參數"
#define EEPROM_SETTINGS_T_CN            "Eeprom設置"

#define U_DISK_TEXT_T_CN                "U盤"
#define SD_CARD_TEXT_T_CN               "SD卡"
#define WIFI_NAME_TEXT_T_CN             "無線網絡:"
#define WIFI_KEY_TEXT_T_CN              "密碼: "
#define WIFI_IP_TEXT_T_CN               "IP: "
#define WIFI_AP_TEXT_T_CN               "狀態: AP"
#define WIFI_STA_TEXT_T_CN              "狀態: STA"
#define WIFI_CONNECTED_TEXT_T_CN        "已連接"
#define WIFI_DISCONNECTED_TEXT_T_CN     "未連接"
#define WIFI_EXCEPTION_TEXT_T_CN        "模塊異常"
#define CLOUD_TEXT_T_CN                 "雲服務"
#define CLOUD_BIND_T_CN                 "已綁定"
#define CLOUD_UNBIND_T_CN               "解綁"
#define CLOUD_UNBINDING_T_CN            "解绑中"
#define CLOUD_DISCONNECTED_T_CN         "未連接"
#define CLOUD_UNBINDED_T_CN             "未綁定"
#define CLOUD_BINDED_T_CN               "已綁定"
#define CLOUD_DISABLE_T_CN              "已禁用"

#define FAN_ADD_TEXT_T_CN               "增加"
#define FAN_DEC_TEXT_T_CN               "減少"
#define FAN_OPEN_TEXT_T_CN              "100%"
#define FAN_HALF_TEXT_T_CN              "50%"
#define FAN_CLOSE_TEXT_T_CN             "關閉"
#define FAN_TIPS1_TEXT_T_CN             "風扇"
#define FAN_TIPS2_TEXT_T_CN             "FAN\nClose"

#define FILAMENT_IN_TEXT_T_CN           "進料"
#define FILAMENT_OUT_TEXT_T_CN          "退料"
#define FILAMENT_EXT0_TEXT_T_CN         "噴頭1"
#define FILAMENT_EXT1_TEXT_T_CN         "噴頭2"
#define FILAMENT_HEAT_TEXT_T_CN         "預熱"
#define FILAMENT_STOP_TEXT_T_CN         "停止"
#define FILAMENT_TIPS2_TEXT_T_CN        "T:"
#define FILAMENT_TIPS3_TEXT_T_CN        "正在進料"
#define FILAMENT_TIPS4_TEXT_T_CN        "正在退料"
#define FILAMENT_TIPS5_TEXT_T_CN        "溫度太低,請先預熱"
#define FILAMENT_TIPS6_TEXT_T_CN        "換料完成"
#define FILAMENT_CHANGE_TEXT_T_CN       "待打印機暫停后,\n請按<進料>或<退料>"

#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_T_CN       "準備進料,正在加熱,請稍等"
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_T_CN     "準備退料,正在加熱,請稍等"
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_T_CN   "加熱完成,請裝載耗材后,按<確定>開始進料"
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_T_CN   "請裝載耗,按<確定>開始進料!"
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_T_CN  "加熱完成,请按<確定>開始退料!"
#define FILAMENT_DIALOG_LOADING_TIPS_T_CN         "正在進料,请等待耗材加載完成!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_T_CN       "正在退料,请等待耗材卸載完成!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_T_CN   "進料完成,请按<確定>返回"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_T_CN "退料完成,请按<確定>返回"

#define PRE_HEAT_EXT_TEXT_T_CN        "噴頭"
#define PRE_HEAT_BED_TEXT_T_CN        "熱床"

#define FILE_LOADING_T_CN             "正在載入......"
#define NO_FILE_AND_CHECK_T_CN        "無文件!請插入sd卡/u盤!"
#define NO_FILE_T_CN                  "無文件!"

#define EXTRUDER_TEMP_TEXT_T_CN       "溫度"
#define EXTRUDER_E_LENGTH1_TEXT_T_CN  "噴頭"
#define EXTRUDER_E_LENGTH2_TEXT_T_CN  "噴頭"
#define EXTRUDER_E_LENGTH3_TEXT_T_CN  "噴頭"

#define ABOUT_TYPE_TEXT_T_CN          "Type: "
#define ABOUT_VERSION_TEXT_T_CN       "Firmware: "
#define ABOUT_WIFI_TEXT_T_CN          "Wifi: "

#define PRINTING_OPERATION_T_CN       "操作"
#define PRINTING_PAUSE_T_CN           "暫停"
#define PRINTING_TEMP_T_CN            "溫度"
#define PRINTING_CHANGESPEED_T_CN     "變速"
#define PRINTING_RESUME_T_CN          "恢復"
#define PRINTING_STOP_T_CN            "停止"
#define PRINTING_MORE_T_CN            "更多"
#define PRINTING_EXTRUDER_T_CN        "擠出"
#define PRINTING_MOVE_T_CN            "移動"

#define EXTRUDER_SPEED_T_CN           "擠出"
#define MOVE_SPEED_T_CN               "移動"
#define EXTRUDER_SPEED_STATE_T_CN     "擠出速度"
#define MOVE_SPEED_STATE_T_CN         "移動速度"
#define STEP_1PERCENT_T_CN            "1%%"
#define STEP_5PERCENT_T_CN            "5%%"
#define STEP_10PERCENT_T_CN           "10%%"

#define TITLE_READYPRINT_T_CN         "準備打印"
#define TITLE_PREHEAT_T_CN            "預熱"
#define TITLE_MOVE_T_CN               "移動"
#define TITLE_HOME_T_CN               "回零"
#define TITLE_EXTRUDE_T_CN            "擠出"
#define TITLE_LEVELING_T_CN           "調平"
#define TITLE_SET_T_CN                "設置"
#define TITLE_MORE_T_CN               "更多"
#define TITLE_CHOOSEFILE_T_CN         "選擇文件"
#define TITLE_PRINTING_T_CN           "正在打印"
#define TITLE_OPERATION_T_CN          "操作"
#define TITLE_ADJUST_T_CN             "調整"
#define TITLE_WIRELESS_T_CN           "無線網絡"
#define TITLE_FILAMENT_T_CN           "換料"
#define TITLE_ABOUT_T_CN              "關於"
#define TITLE_FAN_T_CN                "風扇"
#define TITLE_LANGUAGE_T_CN           "語言"
#define TITLE_PAUSE_T_CN              "暫停"
#define TITLE_CHANGESPEED_T_CN        "變速"
#define TITLE_CLOUD_TEXT_T_CN         "雲服務"
#define TITLE_DIALOG_CONFIRM_T_CN     "確認"
#define TITLE_FILESYS_T_CN            "文件系統"

#define AUTO_SHUTDOWN_T_CN            "自動關機"
#define MANUAL_SHUTDOWN_T_CN          "手動關機"

#define DIALOG_CONFIRM_T_CN           "確定"
#define DIALOG_CANCLE_T_CN            "取消"
#define DIALOG_OK_T_CN                "確認"
#define DIALOG_RESET_T_CN             "重設"
#define DIALOG_RETRY_T_CN             "重試"
#define DIALOG_DISABLE_T_CN           "禁用"
#define DIALOG_PRINT_MODEL_T_CN       "打印模型?"
#define DIALOG_CANCEL_PRINT_T_CN      "停止打印?"
#define DIALOG_RETRY_T_CN             "重試"
#define DIALOG_STOP_T_CN              "停止"
#define DIALOG_REPRINT_FROM_BREAKPOINT_T_CN "從斷點續打?"
#define DIALOG_ERROR_TIPS1_T_CN       "錯誤:找不到文件,請插入sd卡/u盤!"
#define DIALOG_ERROR_TIPS2_T_CN       "錯誤:通信失敗,請檢查波特率或主板硬件!"
#define DIALOG_ERROR_TIPS3_T_CN       "錯誤:文件名或文件路徑太長!"
#define DIALOG_CLOSE_MACHINE_T_CN     "正在關機......"
#define DIALOG_UNBIND_PRINTER_T_CN    "解除綁定?"
#define DIALOG_FILAMENT_NO_PRESS_T_CN "請先裝載耗材!"
#define DIALOG_PRINT_FINISH_T_CN      "打印完成!"
#define DIALOG_PRINT_TIME_T_CN        "打印時間: "
#define DIALOG_REPRINT_T_CN           "再打印壹次"
#define DIALOG_WIFI_ENABLE_TIPS_T_CN  "wifi模塊正在配置中,請稍等......"

#define TEXT_VALUE_T_CN               "%d℃/%d℃"
#define EXTRUDE_TEXT_VALUE_T_T_CN     ": %d℃"
#define WIFI_RECONNECT_TEXT_T_CN      "重新連接"

#define MESSAGE_PAUSING_T_CN          "暫停中..."
#define MESSAGE_CHANGING_T_CN         "等待換料開始..."
#define MESSAGE_UNLOAD_T_CN           "退料中,請稍等..."
#define MESSAGE_WAITING_T_CN          "點擊按鈕恢復打印"
#define MESSAGE_INSERT_T_CN           "裝載耗材後,點擊按鈕開始打印"
#define MESSAGE_LOAD_T_CN             "進料中,請稍等..."
#define MESSAGE_PURGE_T_CN            "等待擠出..."
#define MESSAGE_RESUME_T_CN           "等待恢復打印..."
#define MESSAGE_HEAT_T_CN             "按下按鈕,加熱噴頭"
#define MESSAGE_HEATING_T_CN          "噴頭加熱中,請等待..."
#define MESSAGE_OPTION_T_CN           "擠出更多還是繼續打印"
#define MESSAGE_PURGE_MORE_T_CN       "擠出"
#define MESSAGE_CONTINUE_PRINT_T_CN   "打印"

#define EEPROM_SETTINGS_TITLE_T_CN    "EEPROM 設置"
#define EEPROM_SETTINGS_STORE_T_CN    "保存參數至EEPROM"
#define EEPROM_SETTINGS_READ_T_CN     "讀取EEPROM參數"
#define EEPROM_SETTINGS_REVERT_T_CN   "恢復默認參數"

#define EEPROM_STORE_TIPS_T_CN        "是否保存參數到EEPROM?"
#define EEPROM_READ_TIPS_T_CN         "是否使用EEPROM參數?"
#define EEPROM_REVERT_TIPS_T_CN       "是否恢復默認參數?"

#define MORE_CUSTOM1_TEXT_T_CN  MAIN_MENU_ITEM_1_DESC
#define MORE_CUSTOM2_TEXT_T_CN  MAIN_MENU_ITEM_2_DESC
#define MORE_CUSTOM3_TEXT_T_CN  MAIN_MENU_ITEM_3_DESC
#define MORE_CUSTOM4_TEXT_T_CN  MAIN_MENU_ITEM_4_DESC
#define MORE_CUSTOM5_TEXT_T_CN  MAIN_MENU_ITEM_5_DESC
#define MORE_CUSTOM6_TEXT_T_CN  MAIN_MENU_ITEM_6_DESC
