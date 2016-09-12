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
int loopCount = 0;
bool elozoNaN=false;
bool marTalalt=false;
    for(int x = 0; x < 2500; x++)
    {marTalalt=false;
        for(int y = 0; y < 150; y++)
        {
            marTalalt=false;
            for(int z = 0; z < 150; z++)
            {
            pos[0] = -0.5 + 0.001 * x;
            pos[1] = 0 + 0.001 * y;
            pos[2] = 0.12 + 0.001 * z;
            stamper.IK(angles,pos);
            th[0] = angles.theta1[0];
            th[1] = angles.theta1[1];
            th[2] = angles.theta1[2];
            loopCount++;


            if(th[0] != th[0] || th[1] != th[1] || th[2] != th[2])
            {
            qDebug()<< loopCount;
            break;
            }
            else
            {
                if(marTalalt)
                    {continue;}

                else
            {log << pos[0] << " " << pos[1] << " " << pos[2] <<std::endl;}
                    //<< " " << th[0] << " " << th[1] << " " << th[2] << std::endl;

            }
            //out << pos[0] << ";" << pos[1] << ";" << pos[2] << ";" << th[0] << ";" << th[1] << ";" << th[2] << endl;
            //readLine = out.readLine(0);
            //res << readLine << endl;
            //std::cout << readLine.toStdString() << std::endl;
            }
        }
    }
    log.close();
    open.open("./log.dat");
    /*for(int i = 0; i < 3375000; i++)
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


    }*/
    std::cout << "Operation done." << std::endl;
    log.close();
    //copy.close();
    /*workSpaceLog.flush();
    results.flush();
    results.close();
    workSpaceLog.close();*/

}
