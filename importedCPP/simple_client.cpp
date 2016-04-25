/*

Copyright (c) 2003, Arvid Norberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the distribution.
    * Neither the name of the author nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/
#include "./mainwindow.h"
#include "./simple_client.h"

#include <string.h>
#include "QMessageBox"


#include "libtorrent/add_torrent_params.hpp"
#include "libtorrent/torrent_handle.hpp"


simple_client::~simple_client(){
    printf("Simple client destructor called");
}

int simple_client::startTorrent(QString onlyFilename)
{
    QMessageBox infoBox;
    QString errorCode;
    std::string ecCode;

	using namespace libtorrent;
	namespace lt = libtorrent;

	settings_pack sett;

    int refresh_delay = 500;
#ifndef TORRENT_DISABLE_DHT
    bool start_dht = true;
#endif
    bool rate_limit_locals = false;


	sett.set_str(settings_pack::listen_interfaces, "0.0.0.0:6881");

	lt::session s(sett);

	error_code ec;
	if (ec)
	{
        ecCode = strcat("failed to open listen socket: ",ec.message().c_str());
        errorCode = QString(ecCode.c_str());
        infoBox.setText(errorCode);
        infoBox.exec();
		return 1;
	}
	add_torrent_params p;
	p.save_path = "./";
    p.ti = boost::make_shared<torrent_info>(onlyFilename.toLatin1().data(), boost::ref(ec), 0);


	if (ec)
    {
        infoBox.setText(ec.message().c_str());
        infoBox.exec();
		return 1;
	}

	s.add_torrent(p, ec);


	if (ec)
    {
        infoBox.setText(ec.message().c_str());
        infoBox.exec();
		return 1;
	}

//     wait for the user to end
    char a;
    scanf("%c\n", &a);

    return 0;
}

