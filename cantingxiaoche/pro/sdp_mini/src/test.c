/*
* This file is automatically generated by Slamware Config Tool
* The encoded config is
{
    "base": {
        "manufacture_id": 255,
        "manufacture_name": "Slamtec",
        "model_id": 56593,
        "model_name": "Slamware SDP Mini",
        "hardware_version": 3,
        "robot_size": 0.18,
        "low_battery_percentage_for_charging": 0.1,
        "high_battery_percentage_for_charging": 0.9,
        "low_battery_auto_homing": true,
        "sensors": [
            {
                "id": 0,
                "type": "sonar",
                "installation_pose": {
                    "x": 0.06,
                    "y": 0.08,
                    "z": 0.07,
                    "yaw": 0.785398
                }
            },
            {
                "id": 1,
                "type": "sonar",
                "installation_pose": {
                    "x": 0.1,
                    "z": 0.07
                }
            },
            {
                "id": 2,
                "type": "sonar",
                "installation_pose": {
                    "x": 0.06,
                    "y": -0.08,
                    "z": 0.07,
                    "yaw": 5.497787
                }
            },
            {
                "id": 3,
                "type": "bumper",
                "installation_pose": {
                    "x": 0.06,
                    "y": 0.08,
                    "z": 0.07,
                    "yaw": 0.785398
                }
            },
            {
                "id": 4,
                "type": "bumper",
                "installation_pose": {
                    "x": 0.06,
                    "y": -0.08,
                    "z": 0.07,
                    "yaw": 5.497787
                }
            }
        ]
    },
    "lidar": {
        "installation_pose": {}
    },
    "feature": {
        "has_ir_docking_tower": false
    },
    "motion_plan": {
        "side_margin": "0.01",
        "bump_handle_strategy": "default"
    }
}

* Please DO NOT modify this by hand
*/

#include <stdint.h>
#include <stdlib.h>

const unsigned char slamware_config[] = {
0x50,0x04,0x00,0x50,0x0a,0x01,0x10,0xff,0x02,0x30,0x07,0x53,0x6c,0x61,0x6d,0x74,
0x65,0x63,0x03,0x11,0x11,0xdd,0x04,0x30,0x11,0x53,0x6c,0x61,0x6d,0x77,0x61,0x72,
0x65,0x20,0x53,0x44,0x50,0x20,0x4d,0x69,0x6e,0x69,0x05,0x10,0x03,0x06,0x20,0xec,
0x51,0x38,0x3e,0x07,0x20,0xcd,0xcc,0xcc,0x3d,0x08,0x20,0x66,0x66,0x66,0x3f,0x09,
0x60,0x0a,0x40,0x05,0x50,0x03,0x19,0x10,0x00,0x0b,0x31,0x15,0x0d,0x50,0x04,0x0e,
0x20,0x8f,0xc2,0x75,0x3d,0x0f,0x20,0x0a,0xd7,0xa3,0x3d,0x10,0x20,0x29,0x5c,0x8f,
0x3d,0x11,0x20,0xd8,0x0f,0x49,0x3f,0x50,0x03,0x19,0x10,0x01,0x0b,0x31,0x15,0x0d,
0x50,0x02,0x0e,0x20,0xcd,0xcc,0xcc,0x3d,0x10,0x20,0x29,0x5c,0x8f,0x3d,0x50,0x03,
0x19,0x10,0x02,0x0b,0x31,0x15,0x0d,0x50,0x04,0x0e,0x20,0x8f,0xc2,0x75,0x3d,0x0f,
0x20,0x0a,0xd7,0xa3,0xbd,0x10,0x20,0x29,0x5c,0x8f,0x3d,0x11,0x20,0xdf,0xed,0xaf,
0x40,0x50,0x03,0x19,0x10,0x03,0x0b,0x31,0x0c,0x0d,0x50,0x04,0x0e,0x20,0x8f,0xc2,
0x75,0x3d,0x0f,0x20,0x0a,0xd7,0xa3,0x3d,0x10,0x20,0x29,0x5c,0x8f,0x3d,0x11,0x20,
0xd8,0x0f,0x49,0x3f,0x50,0x03,0x19,0x10,0x04,0x0b,0x31,0x0c,0x0d,0x50,0x04,0x0e,
0x20,0x8f,0xc2,0x75,0x3d,0x0f,0x20,0x0a,0xd7,0xa3,0xbd,0x10,0x20,0x29,0x5c,0x8f,
0x3d,0x11,0x20,0xdf,0xed,0xaf,0x40,0x18,0x50,0x01,0x0d,0x50,0x00,0x16,0x50,0x01,
0x17,0x61,0x1a,0x50,0x02,0x1e,0x30,0x04,0x30,0x2e,0x30,0x31,0x1b,0x31,0x1c
};
const size_t slamware_config_size = 255;
