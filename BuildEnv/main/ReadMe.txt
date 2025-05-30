﻿/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*
*   Embedded Wizard Build Environment for the follwing target platform:
*
*   ESP32-S3-BOX-3
*
*   This package contains everything needed to build and run an Embedded Wizard
*   generated UI application on a dedicated target.
*   This Build Environment for Embedded Wizard generated UI applications was
*   tested by using the following components:
*   - Embedded Wizard Studio V14
*   - Embedded Wizard Platform Package (GFX/RTE) V14.00.00
*   - Embedded Wizard Build Environment V14.00.00.00
*   - ESP32-S3-BOX-3 development kit from Espressif
*   - ESP-IDF V5.3.1 (stable)
*
*******************************************************************************/

Getting started with the target system:
---------------------------------------
  To get your first UI application generated by Embedded Wizard working on a
  particular reference platform, we have prepared a detailed article covering
  all necessary steps.
  We highly recommend to study the following document:

  https://doc.embedded-wizard.de/getting-started-esp32-s3-box-3


Getting started with Embedded Wizard Studio:
--------------------------------------------
  In order to get familiar with Embedded Wizard Studio and the UI development
  work-flow, we highly recommend to study our online documentation:

  https://doc.embedded-wizard.de

  Furthermore, we have collected many 'Questions and Answers' covering
  typical Embedded Wizard programming aspects. Please visit our community:

  https://ask.embedded-wizard.de

  Please use this platform to drop your questions, answers and ideas.


Build Environment Release Notes:
--------------------------------
  The Graphics Engine (GFX) and Runtime Environment (RTE) version history is
  included in the Embedded Wizard release notes. Please see our online
  documentation to be informed of any improvements, changes or bug fixes:

  https://doc.embedded-wizard.de/release-notes

  Any improvements, changes or bug fixes related only to the Build Environment
  are described directly in the above mentioned 'Getting Started' article in
  the section 'Release Notes'.


/*******************************************************************************
* Important note:
* This Build Environment is intended to be used as template for Embedded Wizard
* GUI applications on the development board or your customer specific hardware.
* Please take care to adjust all timings and hardware configurations (e.g. system
* clock configurations, memory timings, MPU and cache settings) according to your
* needs and hardware capabilities in order to ensure a stable system.
* Please also take the hardware manufacturer's corresponding specifications,
* application notes and erratas into account.
*******************************************************************************/


3rdParty-Components
-------------------
The following 3rdParty-Components are used:

The folder /ThirdParty/Espressif contains esp-box 3rd party files that are a partial
import from the repository https://github.com/espressif/esp-box/.
Modified files are located in main\TargetSpecific\Drivers.
