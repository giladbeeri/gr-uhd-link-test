INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_UHD_LINK_TEST uhd_link_test)

FIND_PATH(
    UHD_LINK_TEST_INCLUDE_DIRS
    NAMES uhd_link_test/api.h
    HINTS $ENV{UHD_LINK_TEST_DIR}/include
        ${PC_UHD_LINK_TEST_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    UHD_LINK_TEST_LIBRARIES
    NAMES gnuradio-uhd_link_test
    HINTS $ENV{UHD_LINK_TEST_DIR}/lib
        ${PC_UHD_LINK_TEST_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(UHD_LINK_TEST DEFAULT_MSG UHD_LINK_TEST_LIBRARIES UHD_LINK_TEST_INCLUDE_DIRS)
MARK_AS_ADVANCED(UHD_LINK_TEST_LIBRARIES UHD_LINK_TEST_INCLUDE_DIRS)

