/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/IterativeRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <CORERobotLib.h>

/* Drive Motor Ports */
//Right Front Drive Motor
#define RIGHT_FRONT_PORT 20
//Right Back Drive Motor
#define RIGHT_BACK_PORT 1
//Left Front Drive Motor
#define LEFT_FRONT_PORT 19
//Left Back Drive Motor
#define LEFT_BACK_PORT 32

#define DRIVE_SHIFTER_PCM 0
#define COMPRESSOR_PCM 0

#define DRIVE_SHIFTER_HIGH_GEAR_PORT 6
#define DRIVE_SHIFTER_LOW_GEAR_PORT 7



class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
