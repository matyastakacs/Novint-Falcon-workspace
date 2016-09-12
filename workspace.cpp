#include "workspace.h"

libnifalcon::WorkSpace::WorkSpace()
{

}

void libnifalcon::WorkSpace::getWorkSpace()
{
    std::ofstream log;
    std::ifstream open;
    log.open("./log.dat");
    QFile workSpaceLog("workspacelog.dat");
    QFile results("results.dat");
    workSpaceLog.open(QFile::ReadWrite);
    QTextStream out(&workSpaceLog);
    QTextStream res(&results);
    results.open(QFile::ReadWrite);

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            for(int k = 0; k < 15; k++)
            {
            pos[0] = -0.075 + 0.001 * i;
            pos[1] = -0.075 + 0.001 * j;
            pos[2] = 0.06 + 0.001 * k;
            stamper.IK(angles,pos);
            th[0] = angles.theta1[0];
            th[1] = angles.theta1[1];
            th[2] = angles.theta1[2];

            if(th[0] != th[0] || th[1] != th[1] || th[2] != th[2])
            {
            break;
            }

            log << pos[0] << " " << pos[1] << " " << pos[2] << " " << th[0] << " " << th[1] << " " << th[2] << std::endl;
            //out << pos[0] << ";" << pos[1] << ";" << pos[2] << ";" << th[0] << ";" << th[1] << ";" << th[2] << endl;
            //readLine = out.readLine(0);
            //res << readLine << endl;
            //std::cout << readLine.toStdString() << std::endl;
            }
        }
    }
    log.close();
    open.open("./log.dat");
    for(int i = 0; i < 3375000; i++)
    {
        open >> p0 >> p1 >> p2 >> t0 >> t1 >> t2;
        ps0 = QString::fromStdString(p0);
        ps1 = QString::fromStdString(p1);
        ps2 = QString::fromStdString(p2);
        ts0 = QString::fromStdString(t0);
        ts1 = QString::fromStdString(t1);
        ts2 = QString::fromStdString(t2);
        if(t0 == "-nan(ind)")
        {}
        else
        {
            if(t1 == "-nan(ind)")
            {}
            else
            {
                if(t2 == "-nan(ind)")
                {}
                else
                {
                res << ps0 << sep << ps1 << sep << ps2 << sep << ts0 << sep << ts1 << sep << ts2 << endl;
                }
            }
        }


    }
    std::cout << "Operation done." << std::endl;
    log.close();
    //copy.close();
    /*workSpaceLog.flush();
    results.flush();
    results.close();
    workSpaceLog.close();*/

}
