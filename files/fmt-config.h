#pragma once

#cmakedefine HAVE_JPEG 1
#cmakedefine HAVE_PNG 1

#define PACKAGE "${PACKAGE}"
#define PACKAGE_VERSION "${PACKAGE_VERSION_MAJOR}.${PACKAGE_VERSION_MINOR}.${PACKAGE_VERSION_PATCH}"
#define PACKAGE_STRING PACKAGE " " PACKAGE_VERSION
