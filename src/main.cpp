/***************************************************************************
 *   Copyright (C) 2004 by Paul Lutus                                      *
 *   lutusp@arachnoid.com                                                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include <QtGui/QApplication>
#include "fftexplorerwin.h"
//#include <kapplication.h>
//#include <kaboutdata.h>
//#include <kcmdlineargs.h>
//#include <klocale.h>

//static const char description[] =
//    I18N_NOOP("A KDE KPart Application");

//static const char version[] = "0.1";

//static KCmdLineOptions options[] =
//    {
//        //    { "+[URL]", I18N_NOOP( "Document to open." ), 0 },
//        KCmdLineLastOption
//    };

int main(int argc, char **argv) {
//    KAboutData about("fftexplorer", I18N_NOOP("fftexplorer"), version, description,
//                     KAboutData::License_GPL, "(C) 2004 Paul Lutus", 0, 0, "lutusp@arachnoid.com");
//    about.addAuthor( "Paul Lutus", 0, "lutusp@arachnoid.com" );
//    KCmdLineArgs::init(argc, argv, &about);
//    KCmdLineArgs::addCmdLineOptions( options );
    QApplication app(argc, argv);
    fftexplorer mainWin;

//    if (app.isRestored()) {
//        //RESTORE(fftexplorer);
//    } else {
//        // no session.. just start up normally
////        KCmdLineArgs *args = KCmdLineArgs::parsedArgs();

        /// @todo do something with the command line args here

//        mainWin = new fftexplorer();
//        app.setMainWidget( mainWin );
        mainWin.showNormal();

//        args->clear();
//    }

    // mainWin has WDestructiveClose flag by default, so it will delete itself.
    return app.exec();
}

