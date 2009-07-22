# Set directory paths
SET(TOOLBOX_BASE_DIR "/Users/dtnaylor/Documents/Work/opensgtoolbox")
SET(OPENSG_BASE_DIR "/Users/dtnaylor/Documents/Work/OpenSGInstall")
SET(BOOST_BASE_DIR "/Users/dtnaylor/Documents/Work/Boost")
SET(ODE_BASE_DIR "/Users/dtnaylor/Documents/Work/ode-0.11.1/Apple_INSTALL")
SET(INSTALLER_BASE_DIR "/Users/dtnaylor/Documents/Work/opensgtoolbox/trunk/Release/Installer_Full")

# Check directory paths
IF(NOT EXISTS ${TOOLBOX_BASE_DIR})
   MESSAGE("ERROR (TOOLBOX_BASE_DIR):  \"${TOOLBOX_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${TOOLBOX_BASE_DIR})

IF(NOT EXISTS ${OPENSG_BASE_DIR})
   MESSAGE("ERROR (OPENSG_BASE_DIR):  \"${OPENSG_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${OPENSG_BASE_DIR})

IF(NOT EXISTS ${BOOST_BASE_DIR})
   MESSAGE("ERROR (BOOST_BASE_DIR):  \"${BOOST_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${BOOST_BASE_DIR})

IF(NOT EXISTS ${ODE_BASE_DIR})
   MESSAGE("ERROR (ODE_BASE_DIR):  \"${ODE_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${ODE_BASE_DIR})

IF(NOT EXISTS ${INSTALLER_BASE_DIR})
   MESSAGE("ERROR (INSTALLER_BASE_DIR):  \"${INSTALLER_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${INSTALLER_BASE_DIR})


# Set generator
IF(NOT CPACK_GENERATOR)
   SET(CPACK_GENERATOR "PackageMaker")
ENDIF(NOT CPACK_GENERATOR)
MESSAGE("CPack Generator: ${CPACK_GENERATOR}")

# Get revision number
FIND_PACKAGE(Subversion)
IF(Subversion_FOUND)
   Subversion_WC_INFO(${TOOLBOX_BASE_DIR}/trunk Project)
   MESSAGE("Current revision is ${Project_WC_REVISION}")
ENDIF(Subversion_FOUND)

# Get Apple architecture
EXEC_PROGRAM(uname ARGS -m OUTPUT_VARIABLE _CMAKE_OSX_MACHINE)
IF("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
  SET(_CMAKE_OSX_MACHINE ppc)
ELSE("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
  SET(_CMAKE_OSX_MACHINE intel)
ENDIF("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
MESSAGE("Apple Architecture: ${_CMAKE_OSX_MACHINE}")

# Name and version
FILE(STRINGS ${TOOLBOX_BASE_DIR}/trunk/VERSION VersionFile)
STRING(REGEX MATCH "([0-9]+)\\.([0-9]+)\\.([0-9]+)" VersionMatch ${VersionFile})
SET(CPACK_PACKAGE_VERSION ${CMAKE_MATCH_0})
SET(CPACK_PACKAGE_VERSION_MAJOR ${CMAKE_MATCH_1})
SET(CPACK_PACKAGE_VERSION_MINOR ${CMAKE_MATCH_2})
SET(CPACK_PACKAGE_VERSION_PATCH ${CMAKE_MATCH_3})
MESSAGE("Version: ${CMAKE_MATCH_0}")
SET(CPACK_PACKAGE_FILE_NAME "OpenSGToolbox-${CPACK_PACKAGE_VERSION}-${Project_WC_REVISION}-OSX-${_CMAKE_OSX_MACHINE}")
SET(CPACK_PACKAGE_NAME "OpenSGToolbox")
SET(CPACK_PACKAGE_VENDOR "VRAC")


# Resource files
SET(CPACK_RESOURCE_FILE_LICENSE "${INSTALLER_BASE_DIR}/../../LICENSE.txt")
SET(CPACK_RESOURCE_FILE_README "${INSTALLER_BASE_DIR}/../../README.txt")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "${INSTALLER_BASE_DIR}/DESCRIPTION.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "${INSTALLER_BASE_DIR}/WELCOME.txt")

# Set up installer
# Process files to install
IF(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)
     SET(CPACK_INSTALL_COMMANDS "rm -r ${INSTALLER_BASE_DIR}/Install_Files" "mkdir ${INSTALLER_BASE_DIR}/Install_Files" "mkdir ${INSTALLER_BASE_DIR}/Install_Files/include" "mkdir ${INSTALLER_BASE_DIR}/Install_Files/lib" "touch ${INSTALLER_BASE_DIR}/Install_Files/include/Revision${Project_WC_REVISION}" "cp -r ${ODE_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${ODE_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib" "cp -r ${BOOST_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${BOOST_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib" "cp -r ${OPENSG_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${OPENSG_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib")
ELSE(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)
     SET(CPACK_INSTALL_COMMANDS "mkdir ${INSTALLER_BASE_DIR}/Install_Files" "mkdir ${INSTALLER_BASE_DIR}/Install_Files/include" "mkdir ${INSTALLER_BASE_DIR}/Install_Files/lib" "touch ${INSTALLER_BASE_DIR}/Install_Files/include/Revision${Project_WC_REVISION}" "cp -r ${ODE_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${ODE_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib" "cp -r ${BOOST_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${BOOST_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib" "cp -r ${OPENSG_BASE_DIR}/include/ ${INSTALLER_BASE_DIR}/Install_Files/include" "cp -r ${OPENSG_BASE_DIR}/lib/ ${INSTALLER_BASE_DIR}/Install_Files/lib")
ENDIF(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)


# Set up components
SET(CPACK_COMPONENTS_ALL opensg boost ode)
SET(CPACK_COMPONENT_OPENSG_DISPLAY_NAME "OpenSG")
SET(CPACK_COMPONENT_BOOST_DISPLAY_NAME "Boost")
SET(CPACK_COMPONENT_ODE_DISPLAY_NAME "ODE")
SET(CPACK_COMPONENT_OPENSG_DESCRIPTION "Installs OpenSG headers and libraries.")
SET(CPACK_COMPONENT_BOOST_DESCRIPTION "Installs Boost headers and libraries.")
SET(CPACK_COMPONENT_ODE_DESCRIPTION "Installs ODE headers and libraries.")
SET(CPACK_COMPONENT_OPENSG_GROUP "Dependencies")
SET(CPACK_COMPONENT_BOOST_GROUP "Dependencies")
SET(CPACK_COMPONENT_ODE_GROUP "Dependencies")
SET(CPACK_COMPONENT_GROUP_DEPENDENCIES_DESCRIPTION "Installs headers and libraries for all OpenSGToolbox dependencies.")


SET(CPACK_PACKAGING_INSTALL_PREFIX "/")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/usr/local")
SET(CPACK_INSTALLED_DIRECTORIES ${INSTALLER_BASE_DIR}/Install_Files;.)
SET(CPACK_PACKAGE_RELOCATABLE "true")
#SET(CPACK_INSTALL_DIRECTORY "/usr/local")
