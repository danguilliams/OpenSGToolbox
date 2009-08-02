# Set directory paths
SET(TOOLBOX_BASE_DIR "/Users/davidkabala/Documents/Work/OpenSGToolbox")
SET(OPENSG_BASE_DIR "/Users/davidkabala/Documents/Work/OpenSG/OpenSG/AppleInstall")
SET(BOOST_BASE_DIR "/Users/davidkabala/Documents/Work/boost_1_39_0/AppleInstall")
SET(ODE_BASE_DIR "/Users/davidkabala/Documents/Work/ode-0.11.1/AppleInstall")
SET(INSTALLER_BASE_DIR "/Users/davidkabala/Documents/Work/OpenSGToolbox/trunk/Release/Installer_Dependencies")
SET(JPG_LIB_DIR "/sw/lib")

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


# Set up install files directories
SET(INCLUDE_INSTALL_FILES_DIR "${INSTALLER_BASE_DIR}/Install_Files/include")
SET(LIB_INSTALL_FILES_DIR "${INSTALLER_BASE_DIR}/Install_Files/lib")

# Process files to install

# If APPLE, include libtif, libpng, and libjpg
IF(APPLE)
	IF(EXISTS ${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES)
		SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "rm -r ${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES")
	ENDIF(EXISTS ${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES)
	SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "mkdir ${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES")

	FILE(GLOB FILE_LIST "${JPG_LIB_DIR}/libjpeg.*.dylib" "${JPG_LIB_DIR}/libpng.*.dylib" "${JPG_LIB_DIR}/libtiff.*.dylib")
	FOREACH(FILE ${FILE_LIST})
			SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp ${FILE} ${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES")
	ENDFOREACH(FILE ${FILE_LIST})
	SET(INSTALL_DIRS ${INSTALL_DIRS};${INSTALLER_BASE_DIR}/TEMP_INSTALL_FILES;/lib)
ENDIF(APPLE)


MACRO(PROCESS_LIBRARY LIBRARY_DIR)

	MESSAGE("Processing files for: ${LIBRARY_DIR}")

	SET(INSTALL_DIRS ${INSTALL_DIRS};${LIBRARY_DIR}/include;/include;${LIBRARY_DIR}/lib;/lib)

ENDMACRO(PROCESS_LIBRARY)


# Tell CPack where to look for library files
PROCESS_LIBRARY(${OPENSG_BASE_DIR})
PROCESS_LIBRARY(${BOOST_BASE_DIR})
PROCESS_LIBRARY(${ODE_BASE_DIR})

# Configure installer
SET(CPACK_GENERATOR "PackageMaker")
SET(CPACK_PACKAGING_INSTALL_PREFIX "/")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/usr/local")
SET(CPACK_INSTALLED_DIRECTORIES ${INSTALL_DIRS})
SET(CPACK_PACKAGE_RELOCATABLE "true")
#SET(CPACK_INSTALL_DIRECTORY "/usr/local")
