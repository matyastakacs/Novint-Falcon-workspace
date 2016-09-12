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
bool elsoTalalatMegvolt=false;
bool ujsor=false;
bool isNan=true;



for(int x = 0; x < 150; x++)
    {//   qDebug() << " Új X";

        for(int y = 0; y < 150; y++)
        {
          //  qDebug() << " Új Y";

            for(int z = 0; z < 150; z++)
            {
            pos[0] = -0.5 + 0.005 * x;
            pos[1] = -0.5 + 0.005 * y;
            pos[2] = 0.1 + 0.005 * z;
            stamper.IK(angles,pos);
            th[0] = angles.theta1[0];
            th[1] = angles.theta1[1];
            th[2] = angles.theta1[2];
            loopCount++;

            if(th[0] == th[0] && th[1] == th[1] && th[2] == th[2] && elsoTalalatMegvolt==false){
                elsoTalalatMegvolt=true;
                log << pos[0] << " " << pos[1] << " " << pos[2] <<std::endl;
               // qDebug() << "Első találat a sorban pipa!";
            }

            if((th[0] != th[0] || th[1] != th[1] || th[2] != th[2]) && elsoTalalatMegvolt==true){
                log << prev_pos[0] << " " << prev_pos[1] << " " << prev_pos[2] <<std::endl;
               // qDebug() << "Köv ciklus!";
                elsoTalalatMegvolt=false;
                break;}

            prev_pos = pos;
            }
        }


    }
/*
    for(int x = 0; x < 250; x++)
    {  // qDebug() << " Új X";

        for(int y = 0; y < 250; y++)
        {
         //   qDebug() << " Új Y";

            for(int z = 0; z < 250; z++)
            {
            pos[0] = -0.5 + 0.005 * x;
            pos[1] = -0.5 + 0.005 * y;
            pos[2] = 0.1 - 0.005 * z;
            stamper.IK(angles,pos);
            th[0] = angles.theta1[0];
            th[1] = angles.theta1[1];
            th[2] = angles.theta1[2];
            loopCount++;

            if(th[0] == th[0] && th[1] == th[1] && th[2] == th[2] && elsoTalalatMegvolt==false){
                elsoTalalatMegvolt=true;
                log << pos[0] << " " << pos[1] << " " << pos[2] <<std::endl;
               // qDebug() << "Első találat a sorban pipa!";
            }

            if((th[0] != th[0] || th[1] != th[1] || th[2] != th[2]) && elsoTalalatMegvolt==true){
                log << prev_pos[0] << " " << prev_pos[1] << " " << prev_pos[2] <<std::endl;
               // qDebug() << "Köv ciklus!";
                elsoTalalatMegvolt=false;
                break;}

            prev_pos = pos;
            }
        }


    }*/
    log.close();
    qDebug() << loopCount;
    qDebug() << "KÉSZ";
}

