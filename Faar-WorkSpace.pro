#-------------------------------------------------
#
# Project created by QtCreator 2016-09-09T23:48:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Faar-WorkSpace
TEMPLATE = app




FORMS    += mainwindow.ui

HEADERS += \
    falcon/core/FalconComm.h \
    falcon/core/FalconCore.h \
    falcon/core/FalconDevice.h \
    falcon/core/FalconFirmware.h \
    falcon/core/FalconGeometry.h \
    falcon/core/FalconGrip.h \
    falcon/core/FalconKinematic.h \
    falcon/core/FalconLogger.h \
    falcon/cpp-optparse/OptionParser.h \
    falcon/firmware/FalconFirmwareNovintSDK.h \
    falcon/gmtl/External/OpenSGConvert.h \
    falcon/gmtl/Fit/GaussPointsFit.h \
    falcon/gmtl/Misc/MatrixConvert.h \
    falcon/gmtl/Numerics/Eigen.h \
    falcon/gmtl/Util/Assert.h \
    falcon/gmtl/Util/Meta.h \
    falcon/gmtl/Util/StaticAssert.h \
    falcon/gmtl/AABox.h \
    falcon/gmtl/AABoxOps.h \
    falcon/gmtl/AxisAngle.h \
    falcon/gmtl/AxisAngleOps.h \
    falcon/gmtl/Comparitors.h \
    falcon/gmtl/Config.h \
    falcon/gmtl/Containment.h \
    falcon/gmtl/Coord.h \
    falcon/gmtl/CoordOps.h \
    falcon/gmtl/Defines.h \
    falcon/gmtl/EulerAngle.h \
    falcon/gmtl/EulerAngleOps.h \
    falcon/gmtl/Frustum.h \
    falcon/gmtl/FrustumOps.h \
    falcon/gmtl/Generate.h \
    falcon/gmtl/gmtl.h \
    falcon/gmtl/Helpers.h \
    falcon/gmtl/Intersection.h \
    falcon/gmtl/LineSeg.h \
    falcon/gmtl/LineSegOps.h \
    falcon/gmtl/Math.h \
    falcon/gmtl/Matrix.h \
    falcon/gmtl/MatrixOps.h \
    falcon/gmtl/OOBox.h \
    falcon/gmtl/Output.h \
    falcon/gmtl/Plane.h \
    falcon/gmtl/PlaneOps.h \
    falcon/gmtl/Point.h \
    falcon/gmtl/Quat.h \
    falcon/gmtl/QuatOps.h \
    falcon/gmtl/Ray.h \
    falcon/gmtl/RayOps.h \
    falcon/gmtl/Sphere.h \
    falcon/gmtl/SphereOps.h \
    falcon/gmtl/Tri.h \
    falcon/gmtl/TriOps.h \
    falcon/gmtl/Vec.h \
    falcon/gmtl/VecBase.h \
    falcon/gmtl/VecExprMeta.h \
    falcon/gmtl/VecOps.h \
    falcon/gmtl/VecOpsMeta.h \
    falcon/gmtl/Version.h \
    falcon/gmtl/Xforms.h \
    falcon/grip/FalconGripFourButton.h \
    falcon/kinematic/stamper/StamperUtils.h \
    falcon/kinematic/FalconKinematicStamper.h \
    falcon/util/FalconCLIBase.h \
    falcon/util/FalconDeviceThread.h \
    falcon/util/FalconFirmwareBinaryNvent.h \
    falcon/util/FalconFirmwareBinaryTest.h \
    mainwindow.h \
    workspace.h

SOURCES += \
    src/core/FalconDevice.cpp \
    src/core/FalconFirmware.cpp \
    src/cpp-optparse/OptionParser.cpp \
    src/firmware/FalconFirmwareNovintSDK.cpp \
    src/kinematic/FalconKinematicStamper.cpp \
    src/util/FalconCLIBase.cpp \
    src/util/FalconDeviceThread.cpp \
    main.cpp \
    mainwindow.cpp \
    workspace.cpp


