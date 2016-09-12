#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <falcon/kinematic/FalconKinematicStamper.h>
#include "falcon/kinematic/stamper/StamperUtils.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <Windows.h>

namespace libnifalcon
{
class WorkSpace
{
public:
    WorkSpace();
    FalconKinematicStamper stamper;
    void getWorkSpace();

    StamperKinematicImpl::Angle angles;
    gmtl::Vec3d pos;
    gmtl::Vec3d th;
    QString readLine;
    std::string line;
    std::string p0;
    std::string p1;
    std::string p2;
    std::string t0;
    std::string t1;
    std::string t2;
    QString ps0;
    QString ps1;
    QString ps2;
    QString ts0;
    QString ts1;
    QString ts2;
    QString sep = ";";
};
}
#endif // WORKSPACE_H
